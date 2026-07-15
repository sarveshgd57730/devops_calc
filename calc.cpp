
#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "=== Simple DevOps Calculator ===" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    // Process the selected operation
    if (operation == '+') {
        result = num1 + num2;
        cout << "\nResult: " << num1 << " + " << num2 << " = " << result << endl;
    } 
    else if (operation == '-') {
        result = num1 - num2;
        cout << "\nResult: " << num1 << " - " << num2 << " = " << result << endl;
    } 
    else if (operation == '*') {
        result = num1 * num2;
        cout << "\nResult: " << num1 << " * " << num2 << " = " << result << endl;
    } 
    else {
        cout << "\nError: Invalid operator! Please use '+', '-', or '*'." << endl;
    }

    return 0;
}
