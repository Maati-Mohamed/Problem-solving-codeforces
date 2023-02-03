#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,d;
    int flag = 0;
    cin>>a>>b>>c>>d;
    long long result1 = a + b - c;
    long long result2 = a + b * c;
    long long result3 = a * b - c;
    long long result4 = a * b + c;
    long long result5 = a - b * c;
    long long result6 = a - b + c;
    
    if(result1 == d){ 
       flag = 1;
    }
    if(result2 == d){
        flag = 1;
    }
    if(result3 == d){
        flag = 1;
    }
    if(result4 == d){
        flag = 1;
    }
    if(result5 == d){ 
        flag = 1;
    }
    if(result6 == d){
        flag = 1;
    } 
    if(flag == 1){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}