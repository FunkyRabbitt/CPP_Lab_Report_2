#include <iostream>
using namespace std;
struct Phone
{
private:
    char area[10];
    char exchange[10];
    char num[10];

public:
    void setDetails();
    void displayDetails();
    void display();
};
int main()
{
    Phone P1, P2;
    P2.setDetails();
    P2.displayDetails();
    P1.display();
    return 0;
}
void Phone::display()
{
    cout << "My number is: " << "(212)767-8900" << endl;
}
void Phone::setDetails()
{
    cout << "Enter Area Code: ";
    cin >> area;
    cout << "Enter Exchange number: ";
    cin >> exchange;
    cout << "Enter Number: ";
    cin >> num;
}
void Phone::displayDetails()
{
    cout << "Your Number is: " << "(" << area << ")" << exchange << "-" << num << endl;
}