#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    reverse(arr, arr+n);
    long long sum;
    for(int x = 0; x < k; x++){
        if(arr[x] < 0){
            break;
        }
        if(x == 0){
            sum = arr[x];
        } else {
            sum += arr[x];
        }
    }
    cout<<sum;
    return 0;
}