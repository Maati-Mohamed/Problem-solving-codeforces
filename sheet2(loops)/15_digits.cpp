#include<iostream>
using namespace std;
int main()
{
    long n,l;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>l;
        if(l == 0){
            cout<<"0";
        } else {
            while(l){
            cout<<l%10<<" ";
            l /= 10;
            }
        }
        
        cout<<endl;
    }
    return 0;
}