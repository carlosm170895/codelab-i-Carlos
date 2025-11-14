#include <iostream>   // Lets us use cout and cin for input and output
using namespace std;  // So we don’t have to type std:: all the time

int main() {          // The main function where the program starts
    int month;        // This will store the month number the user enters

    cout << "Enter a month number (1-12): ";  // Ask the user for a month
    cin >> month;                              // Read their response

    switch (month) {   // Check which month number the user typed
        case 1:
            cout << "January has 31 days." << endl;  // What month 1 means
            break;                                   // Stop here
        case 2:
            cout << "February has 28 or 29 days." << endl;
            break;
        case 3:
            cout << "March has 31 days." << endl;
            break;
        case 4:
            cout << "April has 30 days." << endl;
            break;
        case 5:
            cout << "May has 31 days." << endl;
            break;
        case 6:
            cout << "June has 30 days." << endl;
            break;
        case 7:
            cout << "July has 31 days." << endl;
            break;
        case 8:
            cout << "August has 31 days." << endl;
            break;
        case 9:
            cout << "September has 30 days." << endl;
            break;
        case 10:
            cout << "October has 31 days." << endl;
            break;
        case 11:
            cout << "November has 30 days." << endl;
            break;
        case 12:
            cout << "December has 31 days." << endl;
            break;
        default:
            cout << "That is not a valid month number!" << endl; // For numbers not 1–12
    }

    return 0;  // End of the program
}
