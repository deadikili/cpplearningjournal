#include <iostream>

int addNumbers(int firstParam, int secondParam)
{
    int result = firstParam + secondParam;
    return result;
}

int main()
{
    int firstNumber {13};
    int secondNumber {7};

    std::cout << "First number: " << firstNumber << std::endl;
    std::cout << "Second number: " << secondNumber << std::endl;
    
    int sum = firstNumber + secondNumber;
    std::cout << "Sum: " << sum << std::endl;

    sum = addNumbers(25,7);
    std::cout << "Sum: " << sum << std::endl;

    sum = addNumbers(30,54);
    std::cout << "Sum: " << sum << std::endl;

    std::cout << "Sum: " << addNumbers(3,42) << std::endl;

    return 0;
}