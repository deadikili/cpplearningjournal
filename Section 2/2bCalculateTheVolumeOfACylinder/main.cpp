#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int radius;
    int height;
    float volCyl;

    cout << " ------------------------" << endl;
    cout << " Enter the radius : ";
    cin >> radius;

    cout << " Enter the height : ";
    cin >> height;

    volCyl = pow(radius, 2.0) * 3.14 * height;
    cout << " Volume of the cylinder is : ";
    cout << volCyl << endl;

    cout << " Thank you for using!" << endl;
    cout << " ------------------------" << endl;

    system("PAUSE");
    return 0;
}