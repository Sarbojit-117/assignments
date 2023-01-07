#include "iostream"
using namespace std;
int main()
{
    int num;
    cout<<"Enter a 5-digit number: ";
    cin>>num;
    int second_last = (num%100)/10;
    int first = (num%100000)/10000;
    int sum = first+second_last;
    cout<<first+second_last<<endl;
    return 0;
}