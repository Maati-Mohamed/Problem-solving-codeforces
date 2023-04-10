#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long arrA[n], arrB[m];
    for(int i =0; i< n; i++){
        cin>>arrA[i];
    }
    for(int d =0; d< m; d++){
        cin>>arrB[d];
    }
    int lab = -1, no = 0, found = 0;
    if(m > n){
        cout<<"NO";
    } else {
        for(int x = 0; x< m; x++){
            int flag = 0,fu = 0;
            for(int a = 0; a < n; a++){
                if(arrB[x] == arrA[a]){
                    fu++;
                    arrA[a] = 0;
                    if(lab == -1){
                        lab = a;
                    } else {
                        if(a < lab){
                            no++;
                            break;
                        } else {
                            lab = a; 
                        }
                    }
                    break;
                }
            }

            if(fu > 0){
                found++;
            }
        }
        if(found == 0 || found < m){
            cout<<"NO";
        } else if(no > 0){
            cout<<"NO";
        } else{
            cout<<"YES";
        }
        
    }



}