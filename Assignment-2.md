## <u>Question 1</u>
Write a program to check whether two numbers (entered by user) are equal or not.

### <u>**Answer**</u>
```c++
#include "iostream"
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<(a==b?1:0)<<endl;
    return 0;
}
```

## <u>Question 2</u>
Write a program to take the values of two variables a and b from the keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.

### <u>**Answer**</u>
```c++
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
```

## <u>Question 3</u>
There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grades "A" if 17 boys made up 80% of the students that received grades "A".

### <u>**Answer**</u>
```c++
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
```

## <u>Question 4</u>
Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

### <u>**Answer**</u>
```c++
#include "iostream"
using namespace std;
int main()
{
    int num;
    cout<<"Enter a 5-digit number: ";
    cin>>num;
    int second_last = num/100;
    int first = (num%100000)/10000;
    int sum = first+second_last;
    cout<<first+second_last<<endl;
    return 0;
}
```

## <u>Question 5</u>
Write a program to calculate the sum of digits of a 3 digit number.

### <u>**Answer**</u>
```c++
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
```

## <u>Question 6</u>
Design a calculator to perform basic arithmetic operations (+,-,/,*,%)

### <u>**Answer**</u>
```c++
