#include<iostream>
using namespace std;
int main()
{
    char s;
    int n,x;
    cin>>s>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        for(int z = 1; z <= x; z++){
            cout<<s;
        }
        cout<<endl;
    }
    return 0;
}