#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int length;
    int width;
    int area;
    int perimeter;


    cout << " -------------------------" << endl;
    cout << " Length of the rectangle : ";
    cin >> length;
    cout << " Width of the rectangle : ";
    cin >> width;

    area = length * width;
    perimeter = (2 * length) + (2 * width);

    cout << " The area of the rectangle is : " << area << endl;
    cout << " The perimeter of the rectangle is : " << perimeter << endl;
    
    cout << " Thank you for using!" << endl;
    cout << " -------------------------" << endl;


    system("PAUSE");
    return 0;
}