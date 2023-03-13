#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    n = n%10;
    for(int i = 0; i<=n; i++){
        for(int x=0; x<=n; x++){
            if(i*2 + x*2 % n == 0){
                cout<<x<<" "<<x;
                break;
            }
        }
    }
    return 0;
}
