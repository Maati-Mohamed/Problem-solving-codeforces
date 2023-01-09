#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a <= b && a <= c){
        if(b <= c){
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
        } else {
            cout<<a<<endl;
            cout<<c<<endl;
            cout<<b<<endl;
        }
    } else if(b <= a && b <= c){
        if(a <= c){
            cout<<b<<endl;
            cout<<a<<endl;
            cout<<c<<endl;
        } else {
            cout<<b<<endl;
            cout<<c<<endl;
            cout<<a<<endl;
        }
    } else if(c <= a && c <= b){
        if(b <= a){
            cout<<c<<endl;
            cout<<b<<endl;
            cout<<a<<endl;
        } else {
            cout<<c<<endl;
            cout<<a<<endl;
            cout<<b<<endl;
        }
    }
    cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}