#include<iostream>
using namespace std;
int main()
{
    int t;
    long long n, counter = 0, result = 0;
    cin>>t;
    for(int i = 1; i <= t; i++){
        cin>>n;
        while(n % 2 == 0){
            counter++;
            n = n/2;
        }
        if(counter > result){
            result = counter; 
        }
        counter = 0;
    }
    cout<<result;
    return 0;
}