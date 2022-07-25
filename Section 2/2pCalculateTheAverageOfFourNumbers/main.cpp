#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    float num1, num2, num3, num4, total, avg;

    cout << " Calculates the average of four numbers. " << endl;
    cout << " ----------------------------------------" << endl;
    cout << " Enter the first two numbers : ";
    cin >> num1 >> num2;
    cout << " Enter the second two numbers : ";
    cin >> num3 >> num4;
    total = num1+num2+num3+num4;
    avg = total/4;
    cout << " The average of the given 4 numbers is : " << avg << endl;
    cout << " Thank you for using! " << endl;
    cout << " ----------------------------------------" << endl;

    system("PAUSE");
    return 0;
}