#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long l,r,t, sum, sub, result;
    cin>>t;
    for(int i = 1; i<=t; i++){
        cin>>l>>r;
        sum = max(l,r) * (max(l,r)+ 1) / 2;
        sub = ((min(l,r)-1) * min(l,r)) / 2;
        result = sum - sub;
        cout<<result<<endl;
        sum = 0;
    }
    return 0;
} 