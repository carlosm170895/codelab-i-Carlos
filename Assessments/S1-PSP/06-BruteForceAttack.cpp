#include <iostream>
using namespace std;

int main() {
    int p, tries = 0;

    while (tries < 5) {
        cout << "Password: ";
        cin >> p;

        if (p == 12345) {
            cout << "Welcome to the Secure Area\n";
            return 0;
        }

        tries++;
        cout << "Wrong. " << (5 - tries) << " left\n";
    }

    cout << "Too many failed attempts. Authorities alerted!\n";
}
 
