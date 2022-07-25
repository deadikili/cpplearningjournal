#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

//(0K − 273.15) × 9/5 + 32 = -459.7°F

int main()
{
    int kelvin;
    float fahrenheit;

    cout << " --------------------------------" << endl;
    cout << " Kelvin value is : ";
    cin >> kelvin;
    fahrenheit = (kelvin - 273.15) * 9/5 + 32;
    cout << " Fahrenheit value is : " << fahrenheit << endl;
    cout << " Thank you for using! " << endl;
    cout << " --------------------------------" << endl;

    system("PAUSE");
    return 0;
}