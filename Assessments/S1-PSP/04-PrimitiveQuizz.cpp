#include <iostream>   // Lets us print things and read input
using namespace std;  // Makes it easier so we don't have to type std:: everywhere

int main() {          // This is where the program begins
    string answer;    // A variable to store what the user types as an answer
    int score = 0;    // This will count how many questions the user gets right

    cout << "What is the capital of France? ";  // Ask the first question
    cin >> answer;                              // Read the user's answer
    if (answer == "Paris" || answer == "paris") { // Check if correct
        cout << "Correct!" << endl;             // Tell user they got it right
        score++;                                // Add 1 point to score
    } else {
        cout << "Wrong! The correct answer is Paris." << endl; // If wrong, tell them
    }

    cout << "What is the capital of Germany? ";  // Ask second question
    cin >> answer;
    if (answer == "Berlin" || answer == "berlin") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Berlin." << endl;
    }

    cout << "What is the capital of Italy? ";    // Third question
    cin >> answer;
    if (answer == "Rome" || answer == "rome") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Rome." << endl;
    }

    cout << "What is the capital of Spain? ";    // Fourth question
    cin >> answer;
    if (answer == "Madrid" || answer == "madrid") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Madrid." << endl;
    }

    cout << "What is the capital of Greece? ";   // Fifth question
    cin >> answer;
    if (answer == "Athens" || answer == "athens") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Athens." << endl;
    }

    cout << "You got " << score << " out of 5 correct!" << endl; // Show final score

    return 0;  // Program ends
}
