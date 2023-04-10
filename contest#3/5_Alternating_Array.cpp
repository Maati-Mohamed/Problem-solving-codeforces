#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr2[n];
    for(int i = 0; i < n; i++){
        int value;
        cin>>value;
        arr[i] = value;
        arr2[i] = value;
    }
    int tmp = 0, counter = 0, counter2 = 1;
    int tmp2 = arr2[0] * -1;
    for(int x = 0; x < n; x++){
        if(x == 0){
            tmp = arr[x];
        } else {
            if(tmp > 0 && arr[x] > 0 || tmp < 0 && arr[x] < 0){
                arr[x] *= -1;
                counter++;
            }
            if(tmp2 > 0 && arr2[x] > 0 || tmp2 < 0 && arr2[x] < 0){
                arr2[x] *= -1;
                counter2++;
            }
            tmp = arr[x];
            tmp2 = arr2[x];
        }
    }
    if(counter < counter2){
        cout<<counter;
    } else{
        cout<<counter2;
    }
    return 0;
}