#include "iostream"
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<(a<b?((a<50)?1:0):0)<<endl;
    return 0;
}