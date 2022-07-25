#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    float celsius;
    float kelvin;

    cout << " ---------------------------------" << endl;
    cout << " Input the temperature in Celsius : ";
    cin >> celsius;
    kelvin = celsius + 273.15;
    cout << " Temperature in Kelvin is : " << kelvin << endl;
    cout << " Thank you for using! " << endl;
    cout << " ---------------------------------" << endl;

    system("PAUSE");
    return 0;
}