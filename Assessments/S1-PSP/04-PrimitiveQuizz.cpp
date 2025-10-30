#include <iostream>
using namespace std;

int main() {
    string answer;
    int score = 0;

    cout << "What is the capital of France? ";
    cin >> answer;
    if (answer == "Paris" || answer == "paris") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Paris." << endl;
    }

    cout << "What is the capital of Germany? ";
    cin >> answer;
    if (answer == "Berlin" || answer == "berlin") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Berlin." << endl;
    }

    cout << "What is the capital of Italy? ";
    cin >> answer;
    if (answer == "Rome" || answer == "rome") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Rome." << endl;
    }

    cout << "What is the capital of Spain? ";
    cin >> answer;
    if (answer == "Madrid" || answer == "madrid") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Madrid." << endl;
    }

    cout << "What is the capital of Greece? ";
    cin >> answer;
    if (answer == "Athens" || answer == "athens") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Athens." << endl;
    }

    cout << "You got " << score << " out of 5 correct!" << endl;

    return 0;
}
 
