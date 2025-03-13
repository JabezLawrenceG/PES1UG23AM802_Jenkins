#include <iostream>
using namespace std;

int main() {
    cout << "Hello, Jenkins!" << endl;

    // Sample functionality for build and test
    int a = 5, b = 10;
    cout << "Sum of " << a << " and " << b << " is " << (a + b) << endl;

    // Return success status for Jenkins pipeline
    return 0;
}
