#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long n,a,b,sumOfDigit = 0, sum = 0;
    cin>>n>>a>>b;
    for(int i = 1; i<=n; i++){
        int x = i;
        while(x){
            int y = x %10;
            sumOfDigit += y;
            x = x / 10;
        }
        if(sumOfDigit <= max(a,b) && sumOfDigit >= min(a,b)){
            sum = sum + i;
        }
        sumOfDigit = 0;
    }
    cout<<sum;
    return 0;
}
