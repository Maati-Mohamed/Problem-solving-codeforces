#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long arr[n], flag = 0;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i] % 2 != 0){
            flag++;
        }
    }
    if(flag != 0){
        cout<<"0";
    } else {
        long long fin = 0;
        while(true){
            long long f = 0;
            for(int m = 0; m < n; m++){
                if(arr[m] % 2 == 0){
                    arr[m] = arr[m] / 2;
                    f++;
                }
            }
            if(f != n){
                break;
            } else{
                fin++;
            }
        }
        cout<<fin;
    }
    return 0;
}