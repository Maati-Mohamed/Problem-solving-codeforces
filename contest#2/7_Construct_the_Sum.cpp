#include<iostream>
using namespace std;
int arr[1000005];
int main()
{
    long long  t,n,s,sum = 0,counter = 0;
    cin>>t;
    for(int i = 1; i <= t; i++){
        cin>>n>>s;        
            if(n*(n+1)/2 < s){
                cout<<"-1";
            } else {
                for(int y = n; y >= 1; y--){
                    if(sum + y <= s){
                        sum+=y;
                        arr[counter] = y;
                        counter++;
                    }
                    if(sum == s){
                        break;
                    }
                    
                }
            }
       
        for(int i = 0; i < counter; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        sum = 0;
        counter = 0;
    }
    return 0;






    // for(int y = n; y >= 1; y--){
            
    //         if(s < 10){
    //             if(y != s && y < s ){
    //                 if(y + tmp <= s){
    //                     tmp = y;
    //                     cout<<y<<" ";
    //                 }
    //             }
    //         } else {
    //             if(y != s && y < s / 2 ){
    //                 if(y + tmp <= s){
    //                     tmp = y;
    //                     cout<<y<<" ";
    //                 }
    //             }
    //         }
    //     }
} 