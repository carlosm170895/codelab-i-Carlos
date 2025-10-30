#include <iostream>
using namespace std;

int main() {
    string names[6] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    string search;
    bool found = false;

    while (!found) {
        cout << "Enter a name to search: ";
        cin >> search;

        for (int i = 0; i < 6; i++) {
            if (names[i] == "Sam" && search == "Sam") {
                found = true;
            }
        }

        if (found) {
            cout << "Sam was found!" << endl;
        } else {
            cout << "User we are looking for is not found! Try again." << endl;
        }
    }

    return 0;
}
 



