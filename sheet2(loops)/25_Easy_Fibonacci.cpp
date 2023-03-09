#include<iostream>
using namespace std;
int main()
{
    int n, n1,n2;
    cin>>n;
    if(n == 1){
        cout<<"0";
    } else if(n == 2){
        cout<<"0"<<" "<<"1";
    } else {
        cout<<"0"<<" "<<"1"<<" ";
        n1 = 1;
        n2 = 0;
        int tmp = n1;
        for(int i = 1; i<=n - 2; i++){
            cout<<n1+n2<<" ";
            tmp = n2;
            n2 = n1;
            n1 = n1 + tmp;
        }
    }
    
    return 0;
}
