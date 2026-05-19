#include <iostream>
#include <random>
using namespace std;

int main() {
    string choice;
    bool isChoiceValid = false;
    while (isChoiceValid == false){
        cout << "What's your pick (rock, paper, scissors)? ";
        cin >> choice;
        if(choice == "rock" || choice == "paper" || choice == "scissors"){
            isChoiceValid = true;
        } else {
            cout << "Please enter a valid choice." << endl;
        }
    }

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 2);
    int computer_choice = dis(gen);
    
    string computer_choice_str;
    if(computer_choice == 0){
        computer_choice_str = "rock";
    } else if(computer_choice == 1){
        computer_choice_str = "paper";
    } else {
        computer_choice_str = "scissors";
    }

    cout << "Computer's choice: " << computer_choice_str << endl;

    if(choice == computer_choice_str){
        cout << "It's a tie!" << endl;
    } else if((choice == "rock" && computer_choice_str == "scissors") ||
              (choice == "paper" && computer_choice_str == "rock") ||
              (choice == "scissors" && computer_choice_str == "paper")){
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
}