#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int firstAngle;
    int secondAngle;
    int thirdAngle;

    // Three angles of the triangle makes up to 180 degrees on a flat surface.

    cout << " -----------------------------------" << endl;
    cout << " First angle of the triangle is : ";
    cin >> firstAngle;
    cout << " Second angle of the triangle is : ";
    cin >> secondAngle;
    thirdAngle = 180 - (firstAngle + secondAngle);
    cout << " Third angle of the triangle is : " << thirdAngle << endl;
    cout << " Thank you for using!" << endl;
    cout << " -----------------------------------" << endl;

    system("PAUSE");
    return 0;
}