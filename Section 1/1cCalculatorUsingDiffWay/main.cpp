#include <iostream>
#include <Windows.h>
using namespace std;
float add(float firstParam, float secondParam) {
    float result = firstParam + secondParam;
    return result;
}
float sub(float firstParam, float secondParam) {
    float result = firstParam - secondParam;
    return result;
}
float division(float firstParam, float secondParam){
    float result = firstParam / secondParam;
    return result;
}
float mult(float firstParam, float secondParam){
    float result = firstParam * secondParam;
    return result;
}
void countdown()
{
    cout << "Terminating in : 5" << endl;
    Sleep(1000);
    cout << "Terminating in : 4" << endl;
    Sleep(1000);
    cout << "Terminating in : 3" << endl;
    Sleep(1000);
    cout << "Terminating in : 2" << endl;
    Sleep(1000);
    cout << "Terminating in : 1" << endl;
    Sleep(1000);
    cout << "-------------------------------" << endl;
}
int main() {
    float num1, num2;
    char op;
    cout << "---------- Main Menu ----------" << endl;
    Sleep(1000);
    cout << "Enter the operator that you want to use, and then enter the two numbers." <<endl;
    Sleep(1000);
    cout << "The most efficient way of using this software is by the numpad of your keyboard." << endl;
    Sleep(1000);
    cout << "PS: 'x' to terminate the program, '+' for addition, '-' for subtraction, '/' for divison, '*' for multiplication." << endl;
    Sleep(1000);
    while(op != 'x')
    {
        cout << "Enter the operator : ";
        cin >> op;
        if(op == 'x'){
            Sleep(1000);
            cout << "Thank you so much for using my calculator!" << endl;
            Sleep(1000);
            cout << "-------------------------------" << endl;
            countdown();
            return 0;
        }
        else if(op == '+' || '-'|| '*'|| '/'){
            cout << "Enter two numbers : ";
            cin >> num1 >> num2;
            if(op == '+'){
                cout << "The answer is : " << add(num1, num2) << endl;
                cout << "-------------------------------" << endl;
            }
            else if(op == '-'){
                cout << "The answer is : " << sub(num1, num2) << endl;
                cout << "-------------------------------" << endl;
            }
            else if(op == '*'){
                cout << "The answer is : " << mult(num1, num2) << endl;
                cout << "-------------------------------" << endl;
            }
            else if(op == '/'){
                cout << "The answer is : " << division(num1, num2) << endl;
                cout << "-------------------------------" << endl;
            }
        else{
                cout << "ERROR! UNAVAILABLE OPERATOR." << endl;
                cout << "-------------------------------" << endl;
            }
        }
    }
}
