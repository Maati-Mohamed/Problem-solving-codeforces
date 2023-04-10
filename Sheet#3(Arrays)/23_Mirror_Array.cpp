#include<iostream>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long arr[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int x = 0; x < m; x++)
        {
            cin>>arr[i][x];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int x = m-1; x >= 0; x--)
        {
            cout<<arr[i][x]<<" ";
        }
        cout<<endl;
    }
    return 0;
}