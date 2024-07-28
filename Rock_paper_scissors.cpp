#include <iostream>
#include <string>
#include<ctime>

using namespace std;
string getComputerChoice() {
    int choice = rand() % 3; // Generates a random number between 0 and 2
    switch (choice) {
        case 0: return "rock";
        case 1: return "paper";
        case 2: return "scissors";
        default: return "rock"; // Default case should not happen
    }
}

string determineWinner(string userChoice, string computerChoice) {
    if (userChoice == computerChoice) {
        return "It's a tie!";
    } else if ((userChoice == "rock" && computerChoice == "scissors") ||
               (userChoice == "paper" && computerChoice == "rock") ||
               (userChoice == "scissors" && computerChoice == "paper")) {
        return "You win!";
    } else {
        return "You lose!";
    }
} 

int main() {
    string user;
    string use;

   while(true){

       int attempts = 5;
      cout<<endl<<"please read the instruction carefully "<<endl;
      cout<<"if you exit from game then enter 'exit' "<<endl;
    cout << "You have only 5 chances to enter the correct input (rock, paper, or scissors)" << endl;
              for (int n = 1; n <= attempts; ++n) {

                 
        cout <<endl << "Attempt " << n << ": Enter rock, paper, or scissors: ";
        cin >> user;
       
        if (user == "rock" || user == "paper" || user == "scissors") {
            cout << "Good job!" << endl;
             use = user; 

             cout<<"Now my turn "<<endl;
              string computerTurn = getComputerChoice();
                 cout<<computerTurn<<endl;
                string result = determineWinner(user,computerTurn);
                cout<<result;
            break; // Exit the loop when the input is valid
        } 
        else{
           
            if(user == "exit") return 0;
           else if (n < attempts) {
             cout << "Invalid input. ";
                cout << "Please try again.😞" << endl;
            } else {
                cout << "No more attempts left.😞" << endl;
                // return 0;
            }
         
        }



   }
   }
       return 0;
}

    // int attempts = 5;
    //   cout<<"please read the instruction carefully "<<endl;
    //   cout<<"if you exit from game then enter 0 "<<endl;
    // cout << "You have only 5 chances to enter the correct input (rock, paper, or scissors)" << endl;
    //           for (int n = 1; n <= attempts; ++n) {
    //     cout <<endl << "Attempt " << n << ": Enter rock, paper, or scissors: ";
    //     cin >> user;

    //     if (user == "rock" || user == "paper" || user == "scissors") {
    //         cout << "Good job!" << endl;
    //          use = user; 
    //         break; // Exit the loop when the input is valid
    //     } 
    //     else {
    //         cout << "Invalid input. ";
    //         if (n < attempts) {
    //             cout << "Please try again.😞" << endl;
    //         } else {
    //             cout << "No more attempts left.😞" << endl;
    //             // return 0;
    //         }
    //     }
    
      
    // cout<<"Now my turn "<<endl;
    // string computerTurn = getComputerChoice();
    //  cout<<computerTurn<<endl;
    // string result = determineWinner(user,computerTurn);
    //  cout<<result;
    

    //   } 

