#include<iostream>
using namespace std;
int main()
{
    long long id, row, col;
    cin>>id;
    row = id/4;
    if(row % 2 == 0){
        col = id % 4;
    } else{
        if(id % 4 == 0){
            col = 3;
        } else {
            col = (row+1) * 4 - id - 1;
        }
    }
    cout<<row<<" "<<col;
    return 0;
} 