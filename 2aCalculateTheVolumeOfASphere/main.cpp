#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int radius;
    float volSphere;

    cout << "\n\n Calculate the volume of a sphere : \n";
    cout << "----------------------------------------\n";
    cout << " Input the radius of a sphere: : ";
    cin >> radius;
    volSphere = (4*3.141592653589793238462643383279502884197169399*pow(radius, 3.0))/3;
    cout << " The volume of the sphere is : " << volSphere << endl;
    cout << endl;

    return 0;
}