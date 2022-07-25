#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int dividend, divisor, quotient, remainder;
    
    cout << " Computer for the quotient and the reminder." << endl;
    cout << " -------------------------------------------" << endl;
    cout << " Enter the dividend : ";
    cin >> dividend;
    cout << " Enter the divisor : ";
    cin >> divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout << " The quotient is : " << quotient << endl;
    cout << " The remainder is : " << remainder << endl;
    cout << " Thank you for using! " << endl;
    cout << " -------------------------------------------" << endl;

    system("PAUSE");
    return 0;
}