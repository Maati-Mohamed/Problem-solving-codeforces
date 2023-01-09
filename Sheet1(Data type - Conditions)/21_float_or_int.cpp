#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    float x;
    cin>>x;
    if((x - floor(x)) == 0){
        cout<<"int "<<floor(x);
    } else {
        cout<<"float "<<floor(x)<<" "<< fixed << setprecision(3)<<x - floor(x)<<endl;
    } 
    return 0;
}