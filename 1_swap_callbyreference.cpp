#include <iostream>
using namespace std;
void swap(int &x, int &y);
int main()
{
    int a, b;
    a = 20;
    b = 40;
    cout << "Before Function Call:" << "\n value of a: " << a << "\n Value of b: " << b << endl;
    swap(a, b);
    cout << "\nValue of a: " << a;
    cout << "\nValue of b: " << b;
    cout << "\nAddress of a: " << &a;
    cout << "\nAddress of b: " << &b;
    return 0;
}
void swap(int &x, int &y)
{
    x = 6;
    y = 7;
    cout << "\nInside Example Function:";
    cout << "\n Value of x: " << x;
    cout << "\n Value of y: " << y;
    cout << "\n Address of x: " << &x;
    cout << "\n Address of y: " << &y << endl;
    int temp;
    temp = x;
    x = y;
    y = temp;
}
