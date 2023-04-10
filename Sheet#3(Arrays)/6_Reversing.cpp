#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i = 0; i < t; i++){
        cin>>arr[i];
    }
    for(int s = t-1; s >= 0; s--){
        cout<<arr[s]<<" ";
    }
    return 0;
}