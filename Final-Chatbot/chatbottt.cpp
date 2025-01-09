#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

class Chatbot {
private:
    string greetings;
    string response1;
    string response2;
    string response3;
    string weather;

public:
    // Constructor to initialize chatbot responses
    Chatbot() {
        greetings = "Walaikum Assalam! I am fine! How about you?";
        response1 = "That's good!";
        response2 = "Yes, I can solve math problems. Please select an operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Square\n6. Square Root\nChoose any option: ";
        response3 = "Here's your motivational quote: ";
        weather = "The current weather is sunny with a temperature of 75°F.";
    }

    // Function to respond to different inputs
    void respond(string input) {
        if (input == "Assalam o Alaikum how are you" || input == "Assalam o Alaikum, how are you?") {
            cout << greetings;
        } else if (input == "I am fine") {
            cout << response1;
        } else if (input == "Can you solve math problems?") {
            cout << response2;
            string operation;
            cin >> operation;
            handleMathOperation(operation);
        } 
        // Bazan's code for motivational quotes and weather report
        else if (input == "What's the weather like?") {
            cout << weather;
        } else if (input == "Motivate me") {
            giveMotivationalQuote();
        } 
        // Zain's code for joke telling
        else if (input == "Tell me a joke") {
            tellJoke();
        }
        // Zaini's code for Rock-Paper-Scissors game
        else if (input == "Play Rock-Paper-Scissors") {
            playRockPaperScissors();
        } else {
            cout << "I can't understand what you say!";
        }
    }

    // Abdullah Ahzam's code for math operations
    void handleMathOperation(const string& operation) {
        if (operation == "1") {
            double num1, num2;
            cout << "Enter number 1: ";
            cin >> num1;
            cout << "Enter number 2: ";
            cin >> num2;
            cout << "The answer is: " << num1 + num2 << endl;
        } else if (operation == "2") {
            double num1, num2;
            cout << "Enter number 1: ";
            cin >> num1;
            cout << "Enter number 2: ";
            cin >> num2;
            cout << "The answer is: " << num1 - num2 << endl;
        } else if (operation == "3") {
            double num1, num2;
            cout << "Enter number 1: ";
            cin >> num1;
            cout << "Enter number 2: ";
            cin >> num2;
            cout << "The answer is: " << num1 * num2 << endl;
        } else if (operation == "4") {
            double num1, num2;
            cout << "Enter number 1: ";
            cin >> num1;
            cout << "Enter number 2: ";
            cin >> num2;
            if (num2 != 0)
                cout << "The answer is: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
        } else if (operation == "5") {
            double num;
            cout << "Enter a number: ";
            cin >> num;
            cout << "The square of " << num << " is: " << num * num << endl;
        } else if (operation == "6") {
            double num;
            cout << "Enter a number: ";
            cin >> num;
            if (num < 0) {
                cout << "Error: Cannot calculate the square root of a negative number!" << endl;
            } else {
                cout << "The square root of " << num << " is: " << sqrt(num) << endl;
            }
        } else {
            cout << "Invalid option! Please choose a valid operation." << endl;
        }
        cout << response2; // Prompt for the next operation
    }

    // Bazan's function for motivational quotes
    void giveMotivationalQuote() {
        string quotes[] = {"Believe in yourself!", "Keep pushing forward!", "You are capable of amazing things!", "Every day is a second chance."};
        srand(time(0));
        int randomIndex = rand() % 4;
        cout << response3 << quotes[randomIndex];
    }

    // Zain's function for telling jokes
    void tellJoke() {
        string jokes[] = {
            "Why did the programmer quit his job? Because he didn't get arrays!",
            "Why did the computer go to the doctor? It had a virus!",
            "What do computers snack on? Microchips!",
            "Why was the JavaScript developer sad? Because he didn’t know how to ‘null’ his feelings."
        };
        srand(time(0));
        int randomIndex = rand() % 4;
        cout << jokes[randomIndex];
    }

    // Zaini's function for Rock-Paper-Scissors game
    void playRockPaperScissors() {
        string options[] = {"Rock", "Paper", "Scissors"};
        srand(time(0));
        int botChoice = rand() % 3;
        cout << "Choose Rock, Paper, or Scissors: ";
        string userChoice;
        cin >> userChoice;

        cout << "Chatbot chose: " << options[botChoice] << endl;

        if (userChoice == options[botChoice]) {
            cout << "It's a tie!" << endl;
        } else if ((userChoice == "Rock" && options[botChoice] == "Scissors") ||
                   (userChoice == "Paper" && options[botChoice] == "Rock") ||
                   (userChoice == "Scissors" && options[botChoice] == "Paper")) {
            cout << "You win!" << endl;
        } else {
            cout << "Chatbot wins!" << endl;
        }
    }
};

int main() {
    Chatbot chatbot;
    string input;
    while (true) {
        cout << "You: ";
        getline(cin, input);
        cout << "Chatbot: ";
        chatbot.respond(input);
        cout << endl;
    }
    return 0;
}

