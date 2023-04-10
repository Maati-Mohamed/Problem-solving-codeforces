#include<iostream>
#include<string>
using namespace std;
int main()
{    
    string digits;
    long long sum = 0, n;
    char digit;
    cin>>n>>digits;
    for(int i = 0; i<n; i++){
        int x = digits[i] - '0';
        sum += x;
    }
    cout<<sum;
    return 0;
}