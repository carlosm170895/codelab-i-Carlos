#include <iostream>   // Lets us print things to the screen
using namespace std;  // So we don't have to type std:: every time

int main() {          // Program starts here

    // Count from 0 up to 50
    for (int i = 0; i <= 50; i++) {
        cout << i << " ";
    }
    cout << endl;  // Move to the next line


    // Count backwards from 50 down to 0
    for (int i = 50; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;


    // Count from 30 to 50
    for (int i = 30; i <= 50; i++) {
        cout << i << " ";
    }
    cout << endl;


    // Count from 50 down to 10, but skipping by 2 each time
    for (int i = 50; i >= 10; i -= 2) {
        cout << i << " ";
    }
    cout << endl;


    // Count from 100 to 200, jumping by 5
    for (int i = 100; i <= 200; i += 5) {
        cout << i << " ";
    }
    cout << endl;

    return 0;  // End of program
}
