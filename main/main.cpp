#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void displayGreeting() {
    std::cout << "Welcome to My Node-Inspired C++ App!" << std::endl;
}

void runTests() {
    std::cout << "Running tests...\n";
    // Sample test logic
    if (2 + 2 == 4) {
        std::cout << "Test Passed: Basic Arithmetic" << std::endl;
    } else {
        std::cerr << "Test Failed: Basic Arithmetic" << std::endl;
        exit(1); // Fails the pipeline if the test fails
    }
}

void deployApp() {
    std::cout << "Deploying the application..." << std::endl;
    std::cout << "Application deployed successfully!" << std::endl;
}

int main(int argc, char* argv[]) {
    srand(static_cast<unsigned int>(time(nullptr)));
    
    displayGreeting();

    if (argc > 1) {
        std::string command = argv[1];

        if (command == "build") {
            std::cout << "Building the application..." << std::endl;
        } else if (command == "test") {
            runTests();
        } else if (command == "deploy") {
            deployApp();
        } else {
            std::cerr << "Unknown command: " << command << std::endl;
            return 1; // Fail the pipeline if command is unknown
        }
    } else {
        std::cerr << "No command provided. Use 'build', 'test', or 'deploy'." << std::endl;
        return 1;
    }

    return 0; // Success
}
