#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int age;
    string fullName;

    cout << "Please type your name and age: " << endl;

    getline(cin,fullName);
    cin >> age;

    cout << "Hello " << fullName << ", you are " << age << " years old." << endl;

    return 0;
}