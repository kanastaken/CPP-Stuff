#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(0));
    
    int money = 100;
    int bet, guess, dice;
    char playAgain;
    
    cout << "---- Dice Gambling Game ----" << endl;
    cout << "Guess the dice roll (1-6) to win 5x your bet." << endl;
    cout << "Starting money: $" << money << endl;
    
    do {
        
        if (money <= 0) {
            cout << "You're broke! Game over." << endl;
            break;
        }
    
    cout << "Current money: $" << money << endl;
    
    do {
        cout << "Enter your bet (1-" << money << "): $";
        cin >> bet;
        
        if (bet < 1 || bet > money) {
            cout << "Invalid bet! Bet must be between $1 and $" << money << endl;
        }
    } while (bet < 1 || bet > money);
    
    do {
        cout << "Guess the dice roll (1-6): ";
        cin >> guess;
        
        if (guess < 1 || guess > 6) {
            cout << "Iinvalid guess! Must be between 1-6." << endl;
        }
    } while (guess < 1 || guess > 6);
    
    dice = (rand() % 6) + 1;
    cout << endl << "Rolling dice..." << endl;
    cout << "Dice rolled: " << dice << endl;
    
    if (guess == dice) {
        int winnings = bet * 5;
        money += winnings;
        cout << "Winner! You won $" << winnings << endl;
    } else {
        money -= bet;
        cout << "Sorry, you lost: $" << money << endl;
    }
    
    cout << "Money remaining: $" << money << endl;
    
    if (money > 0) {
        cout << "Play again? (y/n): ";
        cin >> playAgain;
        cout << endl;
    }
} while ((playAgain == 'y' || playAgain == 'Y') && money > 0);

if (money > 100) {
    cout << "Congratulations, you made a profit of $" << (money - 100) << endl;
} else if (money == 100) {
    cout << "You broke even, not too bad." << endl;
} else if (money > 0) {
    cout << "You lost some money but still have $" << money << " left" << endl;
}

cout << "Thanks for playing!" << endl;

return 0;

} 