#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int x = i; x < n; x++){
            cout<<" ";
        }
        for(int z = 1; z <= i*2-1; z++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}
