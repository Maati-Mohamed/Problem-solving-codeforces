#include<iostream>
using namespace std;
int main()
{
    int x, r = 0;
    cin>>x;
    while(x != 1999){
        r++;
        cin>>x;
    }
    for(int y=1; y<=r; y++){
        cout<<"Wrong \n";
    }
    cout<<"Correct \n";
   
}