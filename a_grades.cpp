#include "iostream"
using namespace std;
int main()
{
    int total = 45, boys = 25;
    int girls = total - boys;
    double ace_total = (80.0/100.0) * 45;
    int ace_boys = 17;
    int ace_girls = ace_total - ace_boys;
    cout<<"The number of girls who got grade A = "<<ace_girls<<endl;
    return 0;
}