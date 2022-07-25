#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

//0K − 273.15 = -273.1°C

int main()
{
    int kelvin;
    float celsius;

    cout << " ------------------------------" << endl;
    cout << " Input the kelvin value : ";
    cin >> kelvin;
    celsius = kelvin - 273.15;
    cout << " Celsius value is : " << celsius << endl;
    cout << " Thank you for using! " << endl;
    cout << " ------------------------------" << endl;

    system("PAUSE");
    return 0;
}