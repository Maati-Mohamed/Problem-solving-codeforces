#include<iostream>
using namespace std;
int main()
{ 
    long double n,k,a;
    long long z;
    cin>>n>>k>>a;
    z = n * k / a;
    if(n == a || k == a){
        cout<<"int";
    } else{
        if((n*k)/a != z){
            cout<<"double";
        } else if ((n*k)/a <= 2147483647 && (n*k)/a >= -2147483647) {
            cout<<"int";
        } else{
            cout<<"long long";
        }
    }
    return 0;
}