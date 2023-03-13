#include<iostream>
using namespace std;
int main()
{
    long long n,k,x,z,g;
    cin>>n>>k;
    while(n){
        if(n > k){
            for(int i = 1; i<=k; i++){
            long long y;
            cin>>x;
            if(i == 1){
                y = x;
            } else {
                if(x < y){
                    y=x;
                }
            }
            g = y;
        }
        } else {
            for(int i = 1; i<=n; i++){
            long long y;
            cin>>x;
            if(i == 1){
                y = x;
            } else {
                if(x < y){
                    y=x;
                }
            }
            g = y;
            
        }
        }
        
        cout<<g<<endl;       
        
        if(n < k){
            k = n%k;
            n = 0;
        } else {
            n = n-k;
        }
    }
    return 0;
   
}  