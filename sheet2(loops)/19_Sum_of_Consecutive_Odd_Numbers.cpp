#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,x,y,sum = 0;
    cin>>t;
    for(int i = 1; i<=t; i++){
        cin>>x>>y;
        for(int z = min(x,y)+1; z < max(x,y); z++){
            if(z % 2 != 0){
                sum += z;
            }
        }
        cout<<sum<<"\n";
        sum = 0;
    }
    return 0;
}
