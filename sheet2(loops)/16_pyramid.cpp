#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = n; i >= 1; i--){
        for(int x = i; x <= n; x++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}
