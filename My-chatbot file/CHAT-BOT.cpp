// this code do some math work
#include<iostream>
#include<string>
using namespace std;

class Chatbot{
private:
    string greetings;
    string response1;
    string response2;
public:
    Chatbot(){
        greetings = "Walaikum Assalam I am fine ! How about you ?";
        response1 = "That's good!";
        response2 = "Yes, I can solve math problems. Please select an operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n.Choose any option:- ";
    }

    void respond(string input){
        if(input == "Assalam o Alaikum how are you" || input == "Assalam o Alaikum, how are you?"){
            cout<<greetings;
        } else if(input == "I am fine"){
            cout<<response1;
        } else if(input == "Can you solve math problems?"){
            cout<<response2;
            string operation;
            cin>>operation;
            if(operation == "1"){
                cout<<"Enter number 1: ";
                double num1; cin>>num1;
                cout<<"Enter number 2: ";
                double num2; cin>>num2;
                cout<<"The answer is: "<<num1+num2<<endl;
                cout<<response2;
            } else if(operation == "2"){
                cout<<"Enter number 1: ";
                double num1; cin>>num1;
                cout<<"Enter number 2: ";
                double num2; cin>>num2;
                cout<<"The answer is: "<<num1-num2<<endl;
                cout<<response2;
            } else if(operation == "3"){
                cout<<"Enter number 1: ";
                double num1; cin>>num1;
                cout<<"Enter number 2: ";
                double num2; cin>>num2;
                cout<<"The answer is: "<<num1*num2<<endl;
                cout<<response2;
            } else if(operation == "4"){
                cout<<endl;
				cout<<"Enter number 1: ";
                double num1; cin>>num1;
                cout<<"Enter number 2: ";
                double num2; cin>>num2;
				if(num2 != 0)
                    cout<<"The answer is: "<<num1/num2<<endl;
                else
                    cout<<"Error: Division by zero!"<<endl;
                cout<<response2;
            }
        } else{
            cout<<"I can't understand what you say!";
        }
    }
};

int main(){
    Chatbot chatbot;
    string input;

    while(true){
        cout<<"You: "; getline(cin, input);
        cout<<"Chatbot: "; chatbot.respond(input);
        cout<<endl;
    }

    return 0;
}
