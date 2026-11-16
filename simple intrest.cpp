#include <iostream>
using namespace std;

int main() 
{
    int x,y,z,si;
    cout << "enter amount ";
    cin >> x;
    cout << "enter time ";
    cin >> y;
    cout << "enter rate of interst ";
    cin >> z;
    si = (x*y*z)/100;
    cout << "simple intrest is " << si;
    return 0;
}
