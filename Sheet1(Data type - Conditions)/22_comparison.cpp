#include<iostream>
using namespace std;
int main()
{
    char s;
    int a,b;
    cin>>a>>s>>b;
    if(int(s) == 62){
        if(a > b){
            cout<<"Right";
        } else {
            cout<<"Wrong";
        }
    } else if(int(s) == 60){
        if(a < b){
            cout<<"Right";
        } else {
            cout<<"Wrong";
        }
    } else if(int(s) == 61){
        if(a == b){
            cout<<"Right";
        } else {
            cout<<"Wrong";
        }
    }
    return 0;
}