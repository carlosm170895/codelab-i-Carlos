#include <iostream>   // Lets us use cout and cin for printing and typing
using namespace std;  // So we don't have to write std:: all the time

int main() {          // Program starts here
    string names[6] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};  
    // An array with 6 names in it

    string search;     // This will store the name the user types
    bool found = false; // This keeps track of whether we found Sam or not

    while (!found) {   // Keep asking until Sam is found
        cout << "Enter a name to search: ";  
        cin >> search;  // Read the user's input

        // Go through all the names in the array
        for (int i = 0; i < 6; i++) {
            // We only care if the user types "Sam"
            if (names[i] == "Sam" && search == "Sam") {
                found = true;  // Mark that we found Sam
            }
        }

        if (found) {  
            cout << "Sam was found!" << endl;  // If Sam is found, say so
        } else {
            cout << "User we are looking for is not found! Try again." << endl;
            // User typed something else, keep looping
        }
    }

    return 0; // End of the program
}
