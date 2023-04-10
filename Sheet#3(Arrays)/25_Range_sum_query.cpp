#include<iostream>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    long long arr[n], arrSum[n] = {}, sum = 0;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        long long x = arr[i];
        arrSum[i] = sum + arr[i];
        sum = arrSum[i];
    }
    int l,r;
    while(q--){
        cin>>l>>r;
        l = l - 1; r = r - 1;
        if(l == 0){
            cout<<arrSum[r]<<endl;
        } else {
            cout<<arrSum[r] - arrSum[l-1]<<endl;
        }
    }
    return 0;
}