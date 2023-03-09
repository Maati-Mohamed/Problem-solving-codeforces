#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,num = 0;
    cin>>a>>b;
    for(int i = 1; i<= max(a,b); i++){
        if(a%i == 0 && b % i == 0){
            num = i;
        }
    }
    cout<<num;
    return 0;
}