#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int kph;
    float mph;

    //For the approximate result of mph, divide the kph value by 1.609.

    cout << " -----------------------------" << endl;
    cout << " Enter the kph value : ";
    cin >> kph;
    mph = kph / 1.609;
    cout << " Mph value is : " << mph << endl;
    cout << " Thank you for using! " << endl;
    cout << " -----------------------------" << endl;

    system("PAUSE");
    return 0;
}