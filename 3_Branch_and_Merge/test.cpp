#include <iostream>
using namespace std;

// Function to add two numbers together

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    // Ask the user for input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Call the addition function
    int result = add(num1, num2);

    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is " << result << "." << endl;

    return 0;
}