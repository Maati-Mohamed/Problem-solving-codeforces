#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double res1 = b*log(a);
    double res2 = d*log(c);
    // cout<<res1<<endl;
    // cout<<res2<<endl;
    // return 0;
    if(res1 > res2){
        cout<<"YES";
    }else {
        cout<<"NO";
    }
    return 0;
}

//  if(pow(a,(b/d)) > c){
//         cout<<"YES";
//     }else {
//         cout<<"NO";
//     }
//     return 0;