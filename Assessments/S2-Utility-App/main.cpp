
#include <iostream>
using namespace std;

int main() {
    double money = 0.0;
    string code;

    cout << "Welcome to the Simple Vending Machine!\n";
    cout << "Menu:\n";
    cout << "A1 - Cola (£1.50)\n";
    cout << "A2 - Water (£1.00)\n";
    cout << "A3 - Crisps (£1.20)\n";

    cout << "\nInsert money (£): ";
    cin >> money;

    cout << "Enter item code (A1, A2, A3): ";
    cin >> code;

    double price = 0.0;
    string item;

    if (code == "A1") { item = "Cola"; price = 1.50; }
    else if (code == "A2") { item = "Water"; price = 1.00; }
    else if (code == "A3") { item = "Crisps"; price = 1.20; }
    else {
        cout << "Invalid code.\n";
        return 0;
    }

    if (money < price) {
        cout << "Not enough money. Please add more.\n";
    } else {
        double change = money - price;
        cout << "Dispensing " << item << "...\n";
        cout << "Your change is £" << change << "\n";
        cout << "Thank you!\n";
    }

    return 0;
}
