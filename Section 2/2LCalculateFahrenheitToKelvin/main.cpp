#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

//(32°F − 32) × 5/9 + 273.15 = 273.15K

int main()
{
    float fahrenheit;
    float kelvin;

    cout << " ------------------------" << endl;
    cout << " Enter the fahrenheit value : ";
    cin >> fahrenheit;
    kelvin = (fahrenheit - 32) * 5/9 + 273.15;
    cout << " Kelvin value is : " << kelvin << endl;
    cout << " Thank you for using! " << endl;
    cout << " ------------------------" << endl;

    system("PAUSE");
    return 0;
}