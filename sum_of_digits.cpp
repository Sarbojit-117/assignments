#include "iostream"
using namespace std;
int main()
{
    int num;
    cout<<"Enter a 3-digit number: ";
    cin>>num;
    int first_digit = (num%1000)/100;
    int second_digit = (num%100)/10;
    int third_digit = num%10;
    int sum = first_digit+second_digit+third_digit;
    cout<<"The sum of the digits = "<<sum<<endl;
    return 0;
}