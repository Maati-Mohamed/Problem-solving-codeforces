#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x, v;
    cin>>x;
    v = floor(x / 1000);
    if((v % 2) == 0){
        cout<<"EVEN";
    } else{
        cout<<"ODD";
    }   
    return 0;
}