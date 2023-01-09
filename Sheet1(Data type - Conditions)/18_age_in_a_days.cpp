#include<iostream>
using namespace std;
int main()
{
    int age;
    cin>>age;
    cout<<age/365<<" years"<<endl;
    cout<<(age % 365) / 30<<" months"<<endl;
    cout<<((age % 365) % 30)<<" days"<<endl;
    return 0;
}