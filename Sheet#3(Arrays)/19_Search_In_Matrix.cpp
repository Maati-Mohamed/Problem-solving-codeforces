#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int ex = 0;
    for(int l = 0; l < n; l++){
        for(int r = 0; r < m; r++){
            cin>>arr[l][r];
        }
    }
    int x;
    cin>>x;
    for(int l = 0; l < n; l++){
        for(int r = 0; r < m; r++){
            if(arr[l][r] == x){
                cout<<"will not take number";
                return 0;
            }
        }
    }
    cout<<"will take number";
    
    return 0;
}