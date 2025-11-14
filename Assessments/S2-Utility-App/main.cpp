#include <iostream>   // Lets us use cout and cin
using namespace std;  // So we don’t have to type std:: all the time

int main() {          // Program starts here
    double money = 0.0;  // Stores the amount of money the user puts in
    string code;         // Stores the item code the user chooses

    cout << "Welcome to the Simple Vending Machine!\n";
    cout << "Menu:\n";
    cout << "A1 - Cola (£1.50)\n";
    cout << "A2 - Water (£1.00)\n";
    cout << "A3 - Crisps (£1.20)\n";

    cout << "\nInsert money (£): ";  // Ask the user to add money
    cin >> money;                    // Store how much they entered

    cout << "Enter item code (A1, A2, A3): ";  // Ask for the item code
    cin >> code;                               // Store their choice

    double price = 0.0;  // Will hold the price of the chosen item
    string item;         // Will hold the name of the item

    // Check which item the user picked
    if (code == "A1") { item = "Cola"; price = 1.50; }
    else if (code == "A2") { item = "Water"; price = 1.00; }
    else if (code == "A3") { item = "Crisps"; price = 1.20; }
    else {                           // If the code isn't valid
        cout << "Invalid code.\n";
        return 0;                    // Stop the program
    }

    // Check if the user put enough money
    if (money < price) {
        cout << "Not enough money. Please add more.\n";
    } else {
        double change = money - price;      // Calculate change
        cout << "Dispensing " << item << "...\n";  // Give the item
        cout << "Your change is £" << change << "\n";  // Show change
        cout << "Thank you!\n";            // End message
    }

    return 0;  // Program done
}
