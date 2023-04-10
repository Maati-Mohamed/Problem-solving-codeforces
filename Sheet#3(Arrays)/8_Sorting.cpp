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
    for(int z = 0; z < t; z++){
        int min;
        for(int x = z; x < t; x++){
            if(x == 0){
                min = arr[z];
            }
           if(arr[x] < arr[z]){
                int tmp = arr[z];
                arr[z] = arr[x];
                arr[x] = tmp;
           }
        }
    }
    for(int m = 0; m< t; m++){
        cout<<arr[m]<<" ";
    }
    return 0;
}