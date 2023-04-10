#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int mn = 1e5, mx = -1e5;
    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        if(arr[i] < mn){
            mn = arr[i];
        }
        if(arr[i] > mx){
            mx = arr[i];
        }
    }
    for(int i = 0; i<n; i++){
        if(arr[i] == mn){
            cout<<mx<<" "; 
        } else if(arr[i] == mx){
            cout<<mn<<" ";
        } else {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}