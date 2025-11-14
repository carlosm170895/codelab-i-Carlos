#include <iostream>   // Lets us use things like cout to show messages on the screen
using namespace std;  // Makes it easier so we don't have to type std:: all the time

int main() {          // This is where the program starts running
    string name;      // A place to store the user's name
    string hometown;  // A place to store where the user is from
    int age;          // A place to store the user's age

    cout << "Enter your name:";      // Ask the user for their name
    cin >> name;                     // Save what the user typed into 'name'
    cout << "Enter your hometown:";  // Ask where the user is from
    cin >> hometown;                 // Save their hometown
    cout << "Enter your age:";       // Ask how old they are
    cin >> age;                      // Save the age

    // Show everything the user typed back to them
    cout << name << endl << hometown << endl << age << endl;

    return 0;        // Tells the program it finished successfully
}

