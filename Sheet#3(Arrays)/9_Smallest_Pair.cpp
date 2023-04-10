#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        long long mn = INT_MAX, sum;
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        for(int k = 0; k<n; k++){
            for(int m=k+1; m<n; m++){
                sum = arr[k] + arr[m] + (m+1) - (k+1);
                if(sum < mn){
                    mn = sum;
                }
                sum = 0;
            }
        }
        cout<<mn<<endl;;
    }

    return 0;
}