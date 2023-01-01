## <u>Question 1</u>
Take 2 integer values in two variables x and y and print their product.

### <b><u>Answer</u></b>
```c++
# include "iostream"
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    int z = x*y;
    cout<<"Product = "<<z<<endl;
    return 0;
}
```

## <u>Question 2</u>
Print the ASCII value of the character 'U'.

### <u>**Answer**</u>
```c++
#include "iostream"
using namespace std;
int main()
{
    cout<<"The ASCII code of \'U\' = "<<int('U')<<endl;
    return 0;
}
```

## <u>Question 3</u>
Write a C++ program to take the length and breadth of a rectangle and print its area.

### <u>**Answer**</u>
```c++
# include "iostream"
using namespace std;
int main()
{
    int length, breadth, area;
    cout<<"Enter the length: ";
    cin>>length;
    cout<<"Enter the breadth: ";
    cin>>breadth;
    area = length*breadth;
    cout<<"Area = "<<area<<endl;
    return 0;
}
```

## <u>Question 4</u>
Write a C++ program to calculate the cube of a number.

### <u>**Answer**</u>
```c++
#include "iostream"
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Cube of the number = "<<num*num*num<<endl;
    return 0;
}
```

## <u>Question 5</u>
Write a C++ program to find size of basic data types.

### <u>**Answer**</u>
```c++
#include "iostream"
using namespace std;
int main()
{
    cout<<"The size of each of the basic data types is: "<<endl;
    cout<<"The size of integer data type is: "<<sizeof(int)<<endl;
    cout<<"The size of character data type is: "<<sizeof(char)<<endl;
    cout<<"The size of float data type is: "<<sizeof(float)<<endl;
    cout<<"The size of double data type is: "<<sizeof(double)<<endl;
    cout<<"The size of long data type is: "<<sizeof(long)<<endl;
    cout<<"The size of long long data type is: "<<sizeof(long long)<<endl;
    cout<<"The size of long double data type is: "<<sizeof(long double)<<endl;
    cout<<"The size of bool data type is: "<<sizeof(bool)<<endl;
    return 0;
}
```

## <u>Question 5</u>
Write a C++ program to swap two numbers with the help of a third variable.

### <u>**Answer**</u>
```c++
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
```