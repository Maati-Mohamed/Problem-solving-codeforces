#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long a, b, c;
    cin>>a>>b>>c;
    cout<<min(min(a,b),c)<<" "<<max(max(a,b),c);
    return 0;
}