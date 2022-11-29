#include <iostream>
using namespace std;
enum Day
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
int main()
{
    Day day1, day2;
    int midday;
    day1 = Monday;
    day2 = Friday;
    midday = Wednesday;
    cout << "day1: " << day1 << endl << "day2: " << day2 << endl << "midday: " << midday << endl;
    return 0;
}
