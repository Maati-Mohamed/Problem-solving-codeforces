#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i] == 0){
            reverse(arr, arr+i);
        }
    }
    
    for(int m = 0; m < n; m++){
        cout<<arr[m]<<" ";
    }
    
    return 0;
}