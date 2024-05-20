#include <iostream>
using namespace std;

// Inline function to find multiplication of two numbers
inline int multiply(int a, int b) {
    return a * b;
}

// Inline function to find cubic value of a number
inline int cube(int num) {
    return num * num * num;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Find and display multiplication of two numbers
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << endl;

    // Find and display cubic value of each number
    cout << "Cubic value of " << num1 << " is: " << cube(num1) << endl;
    cout << "Cubic value of " << num2 << " is: " << cube(num2) << endl;

    return 0;
}
