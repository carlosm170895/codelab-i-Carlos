#include <iostream>   // Lets us use cout and cin
using namespace std;  // So we don't have to write std:: every time

int main() {          // Program starts here
    int p, tries = 0; // p will be the password the user types, tries counts attempts

    while (tries < 5) {                 // Loop as long as we still have tries left
        cout << "Password: ";           // Ask the user to type a password
        cin >> p;                       // Read what they typed

        if (p == 12345) {               // Check if the password is correct
            cout << "Welcome to the Secure Area\n";  // Success message
            return 0;                   // End the program since user got in
        }

        tries++;                        // Add 1 to the number of tries
        cout << "Wrong. " << (5 - tries) << " left\n"; // Tell user how many tries remain
    }

    // If the loop ends, it means the user failed too many times
    cout << "Too many failed attempts. Authorities alerted!\n";
}
