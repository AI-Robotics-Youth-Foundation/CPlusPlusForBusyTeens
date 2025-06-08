/*
 * Lesson 4 - Challenge 2: Roblox Game Collection Manager
 * 
 * Create a digital library to track your favorite Roblox games!
 * This program demonstrates:
 * - Complex struct design with multiple data types
 * - Arrays of structs for collections
 * - Functions that work with structs
 * - Data analysis and filtering
 * - Real-world application of C++ concepts
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Define the RobloxGame struct
struct RobloxGame {
    string name;
    string genre;
    double rating;        // 1.0 to 5.0 stars
    int playtimeHours;
    bool isFavorite;
    string lastPlayed;    // Simple date string
};

// Function prototypes
void displayGame(const RobloxGame& game);
void displayCollection(const RobloxGame games[], int size);
RobloxGame findHighestRated(const RobloxGame games[], int size);
int calculateTotalPlaytime(const RobloxGame games[], int size);
double calculateAverageRating(const RobloxGame games[], int size);
void findGamesByGenre(const RobloxGame games[], int size, const string& targetGenre);
int countFavorites(const RobloxGame games[], int size);
void showGameStatistics(const RobloxGame games[], int size);

int main() {
    cout << "🎮 ROBLOX GAME COLLECTION MANAGER 🎮" << endl;
    cout << "====================================" << endl << endl;
    
    // Initialize a collection of popular Roblox games
    RobloxGame myCollection[10] = {
        {"Adopt Me!", "Pet Simulator", 4.2, 150, true, "2024-01-20"},
        {"Brookhaven RP", "Role Playing", 4.0, 89, false, "2024-01-18"},
        {"Tower of Hell", "Obby", 4.5, 67, true, "2024-01-22"},
        {"Blox Fruits", "Adventure", 4.3, 203, true, "2024-01-19"},
        {"Murder Mystery 2", "Mystery", 4.1, 45, false, "2024-01-15"},
        {"Jailbreak", "Action", 4.4, 134, true, "2024-01-21"},
        {"MeepCity", "Social", 3.8, 23, false, "2024-01-10"},
        {"Piggy", "Horror", 4.0, 78, false, "2024-01-17"},
        {"Arsenal", "Shooting", 4.2, 56, true, "2024-01-16"},
        {"Royale High", "Role Playing", 3.9, 112, false, "2024-01-14"}
    };
    
    int collectionSize = 10;
    
    // Display the full collection
    cout << "📚 MY GAME COLLECTION:" << endl;
    displayCollection(myCollection, collectionSize);
    
    cout << "\n" << string(50, '=') << endl;
    
    // Show comprehensive statistics
    showGameStatistics(myCollection, collectionSize);
    
    cout << "\n" << string(50, '=') << endl;
    
    // Find and display highest rated game
    RobloxGame topGame = findHighestRated(myCollection, collectionSize);
    cout << "\n🏆 HIGHEST RATED GAME:" << endl;
    displayGame(topGame);
    
    cout << "\n" << string(50, '=') << endl;
    
    // Show games by genre
    cout << "\n🎭 ROLE PLAYING GAMES IN COLLECTION:" << endl;
    findGamesByGenre(myCollection, collectionSize, "Role Playing");
    
    cout << "\n🏃 ADVENTURE GAMES IN COLLECTION:" << endl;
    findGamesByGenre(myCollection, collectionSize, "Adventure");
    
    cout << "\n" << string(50, '=') << endl;
    
    // Gaming insights
    cout << "\n📊 GAMING INSIGHTS:" << endl;
    int totalHours = calculateTotalPlaytime(myCollection, collectionSize);
    int favorites = countFavorites(myCollection, collectionSize);
    double avgRating = calculateAverageRating(myCollection, collectionSize);
    
    cout << "🕐 Total Gaming Time: " << totalHours << " hours" << endl;
    cout << "💖 Favorite Games: " << favorites << " out of " << collectionSize << endl;
    cout << "⭐ Average Rating: " << fixed << setprecision(1) << avgRating << "/5.0" << endl;
    
    if (totalHours > 200) {
        cout << "🎮 Status: HARDCORE GAMER! You've spent serious time in Roblox!" << endl;
    } else if (totalHours > 100) {
        cout << "🎮 Status: DEDICATED PLAYER! You know your favorites!" << endl;
    } else {
        cout << "🎮 Status: CASUAL GAMER! Room to explore more games!" << endl;
    }
    
    return 0;
}

// Display a single game's information
void displayGame(const RobloxGame& game) {
    cout << "🎯 " << game.name << " (" << game.genre << ")" << endl;
    cout << "   Rating: " << fixed << setprecision(1) << game.rating << "/5.0 ⭐" << endl;
    cout << "   Playtime: " << game.playtimeHours << " hours" << endl;
    cout << "   Favorite: " << (game.isFavorite ? "💖 YES" : "❌ No") << endl;
    cout << "   Last Played: " << game.lastPlayed << endl;
}

// Display the entire game collection
void displayCollection(const RobloxGame games[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "\n[" << (i + 1) << "] ";
        displayGame(games[i]);
    }
}

// Find the game with the highest rating
RobloxGame findHighestRated(const RobloxGame games[], int size) {
    RobloxGame highest = games[0];
    
    for (int i = 1; i < size; i++) {
        if (games[i].rating > highest.rating) {
            highest = games[i];
        }
    }
    
    return highest;
}

// Calculate total playtime across all games
int calculateTotalPlaytime(const RobloxGame games[], int size) {
    int totalHours = 0;
    
    for (int i = 0; i < size; i++) {
        totalHours += games[i].playtimeHours;
    }
    
    return totalHours;
}

// Calculate average rating of all games
double calculateAverageRating(const RobloxGame games[], int size) {
    double totalRating = 0.0;
    
    for (int i = 0; i < size; i++) {
        totalRating += games[i].rating;
    }
    
    return totalRating / size;
}

// Find and display games of a specific genre
void findGamesByGenre(const RobloxGame games[], int size, const string& targetGenre) {
    bool found = false;
    
    for (int i = 0; i < size; i++) {
        if (games[i].genre == targetGenre) {
            if (!found) {
                found = true;
            }
            cout << "• " << games[i].name << " (Rating: " << games[i].rating 
                 << ", Playtime: " << games[i].playtimeHours << "h)" << endl;
        }
    }
    
    if (!found) {
        cout << "No games found in the " << targetGenre << " genre." << endl;
    }
}

// Count how many games are marked as favorites
int countFavorites(const RobloxGame games[], int size) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (games[i].isFavorite) {
            count++;
        }
    }
    
    return count;
}

// Display comprehensive statistics about the game collection
void showGameStatistics(const RobloxGame games[], int size) {
    cout << "📈 COLLECTION STATISTICS:" << endl;
    
    // Find most played game
    RobloxGame mostPlayed = games[0];
    for (int i = 1; i < size; i++) {
        if (games[i].playtimeHours > mostPlayed.playtimeHours) {
            mostPlayed = games[i];
        }
    }
    
    // Count games by rating range
    int excellentGames = 0; // 4.0+
    int goodGames = 0;      // 3.0-3.9
    int okayGames = 0;      // Below 3.0
    
    for (int i = 0; i < size; i++) {
        if (games[i].rating >= 4.0) {
            excellentGames++;
        } else if (games[i].rating >= 3.0) {
            goodGames++;
        } else {
            okayGames++;
        }
    }
    
    cout << "🎮 Most Played: " << mostPlayed.name << " (" << mostPlayed.playtimeHours << " hours)" << endl;
    cout << "⭐ Excellent Games (4.0+): " << excellentGames << endl;
    cout << "👍 Good Games (3.0-3.9): " << goodGames << endl;
    cout << "😐 Okay Games (<3.0): " << okayGames << endl;
} 