#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int celsius;
    float fahrenheit;

    cout << " ---------------" << endl;
    cout << " Enter the celsius value : ";
    cin >> celsius;
    fahrenheit = (celsius * 9/5) + 32;
    cout << " Fahrenheit value is : " << fahrenheit << endl;
    cout << " Thank you for using!" << endl;
    cout << " ---------------" << endl;

    system("PAUSE");
    return 0;
}