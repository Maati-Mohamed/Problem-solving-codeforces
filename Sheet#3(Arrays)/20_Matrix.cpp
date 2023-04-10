#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int mn = 0, sec = 0;
    for(int l = 0; l < n; l++){
        for(int r = 0; r < n; r++){
            cin>>arr[l][r];
            if(l == r){
                mn += arr[l][r];
            }
            if(l + r == n-1){
                sec += arr[l][r];
            }
        }
    }
    cout<<abs(mn-sec);
    return 0;
}