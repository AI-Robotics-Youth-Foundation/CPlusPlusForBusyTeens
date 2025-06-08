#include <iostream>
using namespace std;

int main() {
    int coins, bonusCoins, players;
    cout << "How many coins did you collect in the Roblox game? ";
    cin >> coins;
    cout << "How many bonus coins did you earn? ";
    cin >> bonusCoins;

    // Calculate total coins
    int totalCoins = coins + bonusCoins;
    cout << "Your total coins: " << totalCoins << endl;

    // Bonus: Divide coins among players
    cout << "How many players are in the game? ";
    cin >> players;
    if (players > 0) {
        int coinsPerPlayer = totalCoins / players;
        int leftover = totalCoins % players;
        cout << "Each player gets: " << coinsPerPlayer << " coins" << endl;
        cout << "Coins left over: " << leftover << endl;
    } else {
        cout << "Number of players must be greater than 0." << endl;
    }

    return 0;
} 