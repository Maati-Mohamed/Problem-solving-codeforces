#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n], arrN[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    long front  = 0, end = n-1, pos = 0;
    while(pos <= n){
        arrN[pos] = arr[front]; 
        pos++;
        arrN[pos] = arr[end];
        pos++;
        front++;
        end--;
    }
    for(int z = 0; z < n; z++){
        cout<<arrN[z]<<" ";
    }
    return 0;
}