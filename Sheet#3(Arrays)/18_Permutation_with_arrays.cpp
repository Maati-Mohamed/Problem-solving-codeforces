#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long arrA[n], arrB[n];
    for(int i = 0;i < n;i++){
        cin>>arrA[i];
    }
    for(int x = 0;x < n;x++){
        cin>>arrB[x];
    }
    int flag = 0, same = 0;
    for(int y = 0;y < n;y++){
        for(int z = 0; z < n; z++){
            if(arrB[y] == arrA[z]){
                arrA[z] = 0;
                flag++;
                if(z == y){
                    same++;
                }
                break;
            }
        }
    }
    if(flag == n && same < n){
        cout<<"yes";
    } else {
        cout<<"no";
    }
    return 0;
}