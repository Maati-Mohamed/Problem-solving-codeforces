#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
    int lowest, p;
    for(int i = 0; i < t; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < t; i++){
        if(i == 0){
            lowest = arr[i];
        }
        if(arr[i] < lowest){
            lowest = arr[i];
            int x = i;
            p = x;
        }
    }
    cout<<lowest<<" "<<p+1;
    return 0;
}