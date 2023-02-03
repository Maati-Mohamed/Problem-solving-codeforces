#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long eye,mouth,body,result = 0;
    cin>>eye>>mouth>>body;

    if(eye == 0 || body == 0){
        cout<<0;
    } else {
        if((mouth > eye && mouth > body) || (mouth > eye && mouth < body) ||
        (mouth < eye && mouth > body)) {

            cout<<min(eye, body);
        } else if(mouth < eye && mouth < body){
            result = mouth;
            eye -= mouth;
            body-= mouth;
            cout<<result+min(eye/2, body);
        }
    }
    return 0;
}