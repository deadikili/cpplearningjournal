#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

// Because of unclear reasons the area calculation always turns out to be wrong.

int main()
{
    float sideA, sideB, degreesC, radC, area;

    cout << " -----------------------" << endl;
    cout << " Length of the side A is : ";
    cin >> sideA;
    cout << " Length of the side B is : ";
    cin >> sideB;
    cout << " The angle between the given sides is : ";
    cin >> degreesC;
    radC = (degreesC * 3)/180;
    area = (sideA * sideB * sin(radC)) * 1/2;
    cout << " The area of the triangle is : " << area << endl;
    cout << " Radiant of C is : " << radC << endl;
    cout << " Thank you for using! " << endl;
    cout << " -----------------------" << endl;

    system("PAUSE");
    return 0;
}