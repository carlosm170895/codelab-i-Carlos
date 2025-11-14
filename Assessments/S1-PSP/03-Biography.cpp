#include <iostream>   // Provides input/output functionality
using namespace std;  // Allows use of standard library names without std::

int main() {          // Program entry point
    string name;      // Variable to store the user's name
    string hometown;  // Variable to store the user's hometown
    int age;          // Variable to store the user's age

    cout << "Enter your name:";      // Prompt user for their name
    cin >> name;                     // Read name from input
    cout << "Enter your hometown:";  // Prompt user for hometown
    cin >> hometown;                 // Read hometown from input
    cout << "Enter your age:";       // Prompt user for age
    cin >> age;                      // Read age from input

    // Output the collected information
    cout << name << endl << hometown << endl << age << endl;

    return 0;        // End of program
}

