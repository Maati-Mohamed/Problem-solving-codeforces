#include<iostream>
using namespace std;
int main()
{
    int n,counter = 0;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            cout<<i<<"\n";
            counter++;
        }
    }
    if(counter == 0){
        cout<<"-1";
    }
    return 0;
}