#include<iostream>
using namespace std;
int main()
{
    long long n, n1,n2;
    cin>>n;
    if(n == 1){
        cout<<"0";
    } else {
        n1 = 1;
        n2 = 0;
        long long tmp = n1;
        for(int i = 1; i<=n - 2; i++){
            tmp = n2;
            n2 = n1;
            n1 = n1 + tmp;
        }
        cout<<n1;
    }
    
    return 0;
}
