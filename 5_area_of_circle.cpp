#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // Area = π * R2.
    // π = 3.141592653
    cout << fixed << setprecision(9); // To print 9 digits after decimal point.
    double r, value;
    cin>>r;
    value = 3.141592653 * (r*r);
    cout<<value;
    return 0;
}