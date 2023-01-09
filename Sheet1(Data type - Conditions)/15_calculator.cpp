#include<iostream>
using namespace std;
int main()
{
    char s;
    int a,c;
    cin>>a>>s>>c;
    if(char(s) == 43){
        cout<<a+c;
    } else if(char(s) == 42){
        cout<<a*c;
    } else if(char(s) == 47){
        cout<<a/c;
    } else if(char(s) == 45){
        cout<<a-c;
    }
    return 0;
}