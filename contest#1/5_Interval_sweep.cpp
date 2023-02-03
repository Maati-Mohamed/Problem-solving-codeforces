#include<iostream>
using namespace std;
int main()
{
    int odd_numbers,even_numbers;
    cin>>odd_numbers>>even_numbers;
    if(odd_numbers > even_numbers){ // 78 78
        if(even_numbers == (odd_numbers-1) ){
            cout<<"YES";
        } else {
            cout<<"NO";
        }
    }
    if(even_numbers > odd_numbers){
        if(odd_numbers == (even_numbers-1) ){
            cout<<"YES";
        } else {
            cout<<"NO";
        }
    }
    if (odd_numbers == even_numbers){
        if(odd_numbers == 0){
            cout<<"NO";
        } else {
            cout<<"YES";
        }
        
    }
    return 0;
}