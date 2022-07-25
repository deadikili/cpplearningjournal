#include <iostream>
using namespace std;


int main()
{
    char op;
    float num1, num2;

    cout << "Enter operator: +, -, *, /, e: ";
    cin >> op;
    if (op == 'e')
    {
        cout << "Thank you for using the calculator. ";
        return 0;
    }

    else
    {
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    }

    switch(op)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            cout << "Error! Operator is not correct.";
            break;
    }

    return 0;
}