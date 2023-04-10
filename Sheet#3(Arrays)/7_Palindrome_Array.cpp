#include<iostream>
using namespace std;
int main()
{
    int t, flag = 0, pos = 0;
    cin>>t;
    int arr[t];
    for(int i = 0; i < t; i++){
        cin>>arr[i];
    }
    for(int s = t-1; s >=0; s--){
        if(arr[pos] != arr[s]){
            flag = 1;
            break;
        }
        pos++;
        
    }
    if(flag == 0){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}