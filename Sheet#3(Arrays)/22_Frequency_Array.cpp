#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arrA[n], freq[m+1] = {};
    for(int i = 0; i < n; i++){
        cin>>arrA[i];
        int x = arrA[i];
        freq[x]++;
    }

    for(int z = 1; z <= m; z++){
        cout<<freq[z]<<endl;
    }
    return 0;
}