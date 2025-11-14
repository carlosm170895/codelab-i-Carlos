#include <iostream>   // Lets us use cout and cin
using namespace std;  // So we don’t have to write std:: all the time

// This function checks if a number is even or odd
string checkEven(int num) {
    if (num % 2 == 0) {                 // If the number divides by 2 with no leftover
        return "The provided number is even";  
    } else {                            // Otherwise it's odd
        return "The provided number is odd";
    }
}

int main() {          // The program starts here
    int number;       // This will store the number the user types

    cout << "Enter a number: ";  // Ask the user for a number
    cin >> number;               // Save the number

    string message = checkEven(number);  // Call the function and get the message
    cout << message << endl;             // Print the result

    return 0;   // End of program
}

