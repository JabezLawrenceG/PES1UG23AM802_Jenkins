#include <iostream>
using namespace std;

// Function to demonstrate a simple calculation
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    cout << "Welcome to Jenkins CI/CD Pipeline Demo!" << endl;
    cout << "The sum of " << num1 << " and " << num2 << " is: " << add(num1, num2) << endl;

    return 0;
}
