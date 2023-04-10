#include<iostream>
using namespace std;
int main()
{
    int t,x ,flag = -1;
    cin>>t;
    int arr[t];
    for(int i = 0; i < t; i++){
        cin>>arr[i];
    }
    cin>>x;
    for(int i = 0; i < t; i++){
        if(x == arr[i]){
            flag = i;
            break;
        }
    }

    cout<<flag;
    return 0;
}