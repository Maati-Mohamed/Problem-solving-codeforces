#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int minn = INT_MAX, flag = 0;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        minn = min(arr[i], minn);
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == minn){
            flag++;
        }
    }
    if(flag % 2 != 0){
        cout<<"Lucky";
    } else {
        cout<<"Unlucky";
    }
    return 0;
}
