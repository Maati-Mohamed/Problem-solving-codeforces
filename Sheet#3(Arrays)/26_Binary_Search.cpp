#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int left,int right,int search){
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == search){
            return mid;
            break;
        } else if(arr[mid] < search){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    while(q--){
        int search;
        cin>>search;
        int result = binarySearch(arr,0,n-1,search);
        if(result == -1){
            cout<<"not found"<<endl;
        } else {
            cout<<"found"<<endl;
        }
    }

    return 0;
}