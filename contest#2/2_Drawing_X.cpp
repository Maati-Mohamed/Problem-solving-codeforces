#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int y = 1; y<=n; y++){
            if(i == y && i != n/2 +1){
                cout<<"\\";
            } else if(i-y == 0 && i == n/2 + 1){
                cout<<"X";
            } else if (i+y == n+1){
                cout<<"/";
            } else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
} 