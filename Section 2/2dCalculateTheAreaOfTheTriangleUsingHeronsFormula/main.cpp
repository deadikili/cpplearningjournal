#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int s;
    int area;


    cout << " ---------------------------" << endl;
    cout << " First side of the triangle is : ";
    cin >> a;

    cout << " Second side of the triangle is : ";
    cin >> b;

    cout << " Third side of the triangle is : ";
    cin >> c;

    s = (a + b + c) / 2;
    area = sqrt(s * (s-a) * (s-b) * (s-c));

    cout << " The area of the triangle is : " << area << endl;
    cout << " Thank you for using!" << endl;
    cout << " ---------------------------" << endl;


    system("PAUSE");
    return 0;
}