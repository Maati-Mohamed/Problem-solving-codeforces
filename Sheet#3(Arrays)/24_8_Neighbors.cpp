#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int x = 0; x < m; x++)
        {
            cin>>arr[i][x];
        }
    }
    int x,y, flag = 0;
    cin>>x>>y;
    if(x > 1){
        x -= 1;
    }
    if(y > 1){
        y -= 1;
    }
    if(arr[x-1][y-1] != 'x'){
        flag++;
    } else if(arr[x-1][y] != 'x'){
        flag++;
    } else if(arr[x-1][y+1] != 'x'){
        flag++;
    } else if(arr[x][y-1] != 'x'){
        flag++;
    }  else if(arr[x][y+1] != 'x'){
        flag++;
    } else if(arr[x+1][y-1] != 'x'){
        flag++;
    } else if(arr[x+1][y] != 'x'){
        flag++;
    } else if(arr[x+1][y+1] != 'x'){
        flag++;
    }
    if(flag == 0){
        cout<<"yes";
    } else {
        cout<<"no";
    }
    return 0;
}