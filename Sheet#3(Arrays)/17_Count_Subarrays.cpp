#include<iostream>
using namespace std;
int main()
{
    int t, sub = 0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }
        for(int l = 0; l < n; l++){
            for(int r = l; r < n; r++){
                int base, flag = 0;
                for(int x = l; x <= r; x++){
                    if(x == l){
                        base = arr[x];
                    } else {
                        if(arr[x] < base){
                            flag++;
                        } else {
                            base = arr[x];
                        }
                    }
                }
                if(flag == 0){
                    sub++;
                }
            }
        }
        cout<<sub<<endl;
        sub = 0;
    }
    return 0;
}