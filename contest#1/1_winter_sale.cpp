#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float x; int price;
    cin>>x>>price;
    int y = 100 - x;
    float z = y / x;
    float m = price / z;
    cout<<fixed << setprecision(2);
    cout<<price+m;
    return 0;
}

