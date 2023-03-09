#include<iostream>
using namespace std;
int main()
{
    long long x,n,factorial = 1;
    cin>>x;
    for(int i = 1; i <= x; i++){
        cin>>n;
        for(int z = 1; z <= n; z++){
            factorial = factorial*z;
        }
        cout<<factorial<<"\n";
        factorial = 1;
    }
    return 0;
}