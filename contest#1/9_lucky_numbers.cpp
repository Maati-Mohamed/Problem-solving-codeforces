#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
    int n, first, last;
    cin>>n;
    first = floor(n/10);
    last = n - (first * 10);
    if(last == 0){
        cout<<"YES";
    } else {
        if(first % last == 0 || last % first == 0){
        cout<<"YES";
        } else {
        cout<<"NO";
    }
    }
    
    return 0;
}