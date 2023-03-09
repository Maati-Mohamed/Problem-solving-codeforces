#include<iostream>
using namespace std;
int main()
{
    int n, yes = 0;
    cin>>n;
    for(int i = 2 ; i < n; i++){
        if(i != n){
            if(n % i == 0){
                yes++;
                break;
            }
        }
    }
    if(yes > 0){
        cout<<"NO";
    } else {
        cout<<"YES";
    }
    return 0;
}
