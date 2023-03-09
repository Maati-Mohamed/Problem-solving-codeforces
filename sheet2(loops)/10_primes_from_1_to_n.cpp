#include<iostream>
using namespace std;

int prime(int number){
    for(int i = 2; i<number; i++){
        if(number % i == 0){
            return -1;
        }
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    for(int i = 2; i <= n; i++){
        int x = prime(i);
        if(x != -1){
            cout<<i<<" ";
        }
    }
    

}