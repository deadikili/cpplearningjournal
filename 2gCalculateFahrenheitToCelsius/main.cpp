#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int fahrenheit;
    float celsius;

    cout << " ----------------------------" << endl;
    cout << " Enter the fahrenheit value : ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5/9;
    cout << " Celsius value is : " << celsius << endl;
    cout << " Thank you for using!" << endl;
    cout << " ----------------------------" << endl;

    system("PAUSE");
    return 0;
}