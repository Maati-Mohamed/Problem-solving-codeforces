#include<iostream>
using namespace std;
int main()
{
    int n,y,x = 0;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>y;
        if(y > x){
            x = y;
        }  
    }
    cout<<x;
    return 0;
}