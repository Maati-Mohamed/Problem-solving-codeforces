#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b, notDigit = 0, ch = 0;
    cin>>a>>b;
    string code;
    cin>>code;
    for(int i = 0; i< a+b+1; i++){
        if(int(code[i]) == 45){
            ch++;
        }
        if(i == a && int(code[a]) != 45){
            notDigit++;
            break;
        }
        if(i == a && int(code[a]) == 45){
            ch++;
        }
        if(int(code[i]) > 57) {
            notDigit++;
            break;
        } 
         
        if(int(code[i]) < 48 && int(code[i] != 45)) {
            notDigit++;
        }
        
        
    }
    if(notDigit == 0 && ch == 2){
        cout<<"Yes";
    } else{
        cout<<"No";
    }
    return 0;
}