#include <iostream>
using namespace std;
enum flag
{
    False,
    True
};
int main()
{
    int num;
    flag even;
    cout << "Enter a number to check odd or even: ";
    cin >> num;
    if (num % 2 == 0)
        even = True;
    else
        even = False;
    if (even)
        cout << num << " is even.";
    else
        cout << num << " is odd.";
    return 0;
}