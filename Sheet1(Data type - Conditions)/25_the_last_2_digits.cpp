#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,d,x,y;
    cin>>a>>b>>c>>d;
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;
    if(a*b*c*d % 100 < 10){
        cout<<"0"<<(a*b*c*d % 100);
    } else {
        cout<<(a*b*c*d % 100);
    }
    return 0;
}

