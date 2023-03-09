#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    long long n, r, numberOfOne = 0, binary = 0;
    cin>>t;
    for(int i = 1;i <= t; i++){
        cin>>n;
        r = n;
        while(r){
            if(r % 2 == 1){
                numberOfOne++;
            }
            r = r/2;
        }
        for(int z = 0; z < numberOfOne; z++){
            binary = binary + 1*pow(2,z);
        }
        cout<<binary<<endl;
        binary = 0;
        numberOfOne = 0;
    }
    return 0;
}
