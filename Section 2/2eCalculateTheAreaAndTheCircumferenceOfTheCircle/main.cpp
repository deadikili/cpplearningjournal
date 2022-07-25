#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int radius;
    float area;
    float circum;

    cout << " ----------------------" << endl;
    cout << " Radius of the circle is : ";
    cin >> radius;
    area = 3.14 * pow(radius, 2.0);
    circum = 2 * 3.14 * radius;
    cout << " Area of the circle is : " << area << endl;
    cout << " Circumference of the circle is : " << circum << endl;
    cout << " Thank you for using!" << endl;
    cout << " ----------------------" << endl;

    system("PAUSE");
    return 0;
}