#include <iostream>
#include <cmath> // for abs and fmod
#include <limits> // for numeric_limits
using namespace std;

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Division by zero!" << endl;
        return numeric_limits<float>::quiet_NaN(); 
    }
}

float modulo(float a, float b) {
    if (b != 0)
        return fmod(a, b); // Use fmod for floating point modulo
    else {
        cout << "Error: Modulo by zero!" << endl;
        // Return Not-a-Number..............................
        return numeric_limits<float>::quiet_NaN(); 
    }
}

int main() {
    float input1, input2;
    char oper;

    while (true) {
        cout << "Enter operator (+, -, *, /, %, q to quit): ";
        cin >> oper;

        if (oper == 'q') {
            cout << "Exiting the program." << endl;
            break; // Exit the loop
        }

        // Check if the operator is valid before asking for the values
        if (oper == '+' || oper == '-' || oper == '*' || oper == '/' || oper == '%') {
            cout << "Enter the first value: ";
            cin >> input1;
            cout << "Enter the second value: ";
            cin >> input2;

            float result;
            switch (oper) {
                case '+':
                    result = add(input1, input2);
                    break;
                case '-':
                    result = sub(input1, input2);
                    break;
                case '*':
                    result = multiply(input1, input2);
                    break;
                case '/':
                    result = divide(input1, input2);
                    break;
                case '%':
                    result = modulo(input1, input2);
                    break;
            }
            cout << "Result: " << result << endl;
        } else {
            cout << "Invalid operator!" << endl;
        }
    }

    return 0;
}
