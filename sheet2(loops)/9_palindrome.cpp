#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, reverse=0, rem, old_n;    
    cin>>n;    
    old_n = n;
    while(n!=0)    
    {    
        rem=n%10;      
        reverse=reverse*10+rem;   
        n/=10;    
    }    
    cout<<reverse<<"\n";
    if(reverse == old_n){
        cout<<"YES \n";
    } else {
        cout<<"NO \n";
    }
    return 0;
}