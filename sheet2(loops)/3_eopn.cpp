#include<iostream>
using namespace std;
int main()
{
    int n,x;
    int even = 0, odd = 0, positive = 0, nagaitive = 0;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>x;
        if(x % 2 == 0){
            even++;
        }  
        if(x % 2 != 0){
            odd++;
        }  
        if(x > 0){
            positive++;
        }  
        if (x < 0){
            nagaitive++;
        }
    }
    cout<<"Even: "<<even<<"\n";
    cout<<"Odd: "<<odd<<"\n";
    cout<<"Positive: "<<positive<<"\n";
    cout<<"Negative: "<<nagaitive<<"\n";
    return 0;
}