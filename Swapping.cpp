#include "iostream"
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    c = a;
    a = b;
    b = c;
    cout<<"After swapping, the value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}