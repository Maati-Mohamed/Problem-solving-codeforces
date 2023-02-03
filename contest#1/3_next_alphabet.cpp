#include<iostream>
using namespace std;
int main()
{
    char x;
    cin>>x;
    if(int(x) == 122){
        cout<<"a";
    } else{
        cout<<char(int(x)+1);
    }
    return 0;
}

