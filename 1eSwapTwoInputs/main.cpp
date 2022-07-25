#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int firstNumber, secondNumber, depot;

    cout << "Enter a number: ";
    cin >> firstNumber;
    cout << "Enter another number: ";
    cin >> secondNumber;

    depot = firstNumber;
    firstNumber = secondNumber;
    secondNumber = depot;

    cout << "After swapping the 1st number is: " << firstNumber << endl;
    cout << "After swapping the 2nd number is: " << secondNumber << endl;

    return 0;
}