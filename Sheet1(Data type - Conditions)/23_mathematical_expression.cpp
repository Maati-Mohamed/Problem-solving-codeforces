#include<iostream>
using namespace std;
int main()
{
    char s, q;
    int a,b,c;
    cin>>a>>s>>b>>q>>c;
    if(char(s) == 43){ // +
        if((a + b) == c){
            cout<<"Yes";
        } else{
            cout<<a+b;
        }
    } else if(char(s) == 42){ // *
        if((a * b) == c){
            cout<<"Yes";
        } else{
            cout<<a*b;
        }
    } else if(char(s) == 45){ // -
        if((a - b) == c){
            cout<<"Yes";
        } else{
            cout<<a-b;
        }
    }
    return 0;
}