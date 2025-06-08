# Lesson 4 Exercises: Objects & Structs

## 🏗️ Struct-Based Engineering Challenges

These exercises demonstrate how to use structs to organize and analyze complex data, building on the concepts from previous lessons.

### 📁 Files Included:

- `challenge1_gear_structs_solution.cpp` - Project 1 extension using structs for data management
- `challenge2_roblox_collection_solution.cpp` - Roblox game collection manager with advanced struct features

## 🚀 How to Compile and Run

### For Mac/Linux:

```bash
# Challenge 1: Gear Data Structures
clang++ challenge1_gear_structs_solution.cpp -o gear_structs
./gear_structs

# Challenge 2: Roblox Collection Manager
clang++ challenge2_roblox_collection_solution.cpp -o roblox_collection
./roblox_collection
```

### For Windows:

```cmd
# Challenge 1: Gear Data Structures
g++ challenge1_gear_structs_solution.cpp -o gear_structs.exe
gear_structs.exe

# Challenge 2: Roblox Collection Manager
g++ challenge2_roblox_collection_solution.cpp -o roblox_collection.exe
roblox_collection.exe
```

## 🎯 Challenge 1: Project 1 Extension - Gear Data Structures

**What you'll learn:**

- Creating custom struct types
- Arrays of structs for data storage
- Functions that work with structs
- Data analysis using structured information
- Professional engineering data management

**Key Features:**

- **GearCombination struct** stores all gear setup data
- **Array of 147 structs** replaces printing approach from Project 1
- **Analysis functions** find optimal configurations
- **Professional output** with engineering statistics

### **Sample Output:**

```
🤖 ROBOT GEAR SYSTEM ANALYSIS (STRUCT VERSION) 🤖
====================================================
📋 Sample Combinations (first 10):
------------------------------------
Input: 100 RPM | Gears: 12T → 12T | Ratio:  1.00 | Output:  100.0 RPM
Input: 100 RPM | Gears: 12T → 24T | Ratio:  2.00 | Output:   50.0 RPM
Input: 100 RPM | Gears: 12T → 36T | Ratio:  3.00 | Output:   33.3 RPM
Input: 100 RPM | Gears: 12T → 48T | Ratio:  4.00 | Output:   25.0 RPM
...
... (and 137 more combinations)

🏆 ENGINEERING ANALYSIS 🏆
============================
⚡ FASTEST SETUP:
Input: 600 RPM | Gears: 80T → 12T | Ratio:  0.15 | Output: 4000.0 RPM

🐌 SLOWEST SETUP:
Input: 100 RPM | Gears: 12T → 80T | Ratio:  6.67 | Output:   15.0 RPM

⚖️ MOST BALANCED (closest to 300 RPM):
Input: 200 RPM | Gears: 48T → 36T | Ratio:  0.75 | Output:  266.7 RPM
   Difference from 300 RPM: 33.3 RPM

🎯 PERFECT RATIOS: 49 combinations have whole number ratios

📊 Examples of Perfect Ratios:
-------------------------------
Input: 100 RPM | Gears: 12T → 12T | Ratio:  1.00 | Output:  100.0 RPM
Input: 100 RPM | Gears: 12T → 24T | Ratio:  2.00 | Output:   50.0 RPM
Input: 100 RPM | Gears: 12T → 36T | Ratio:  3.00 | Output:   33.3 RPM
Input: 100 RPM | Gears: 12T → 48T | Ratio:  4.00 | Output:   25.0 RPM
Input: 100 RPM | Gears: 12T → 60T | Ratio:  5.00 | Output:   20.0 RPM

📈 SUMMARY STATISTICS:
======================
Total combinations analyzed: 147
Fastest output: 4000.0 RPM
Slowest output: 15.0 RPM
Speed range: 3985.0 RPM
Perfect ratios: 49 (33.3%)

🤖 Ready for robot competition! 🏁
```

## 🤖 Engineering Concepts Demonstrated

**Struct Design:**

```cpp
struct GearCombination {
  int inputRPM;      // Motor speed input
  int drivingGear;   // First gear tooth count
  int drivenGear;    // Second gear tooth count
  double gearRatio;  // Calculated speed ratio
  double outputRPM;  // Final speed output
};
```

**Key Functions:**

- `displayCombination()` - Professional data presentation
- `findFastest()` - Analysis for speed optimization
- `findSlowest()` - Analysis for torque optimization
- `findClosestTo()` - Target-based optimization
- `countWholeNumberRatios()` - Perfect ratio analysis

## 🎓 Learning Objectives Achieved

1. **Data Organization:** Structs group related information logically
2. **Professional Analysis:** Multiple analysis functions demonstrate real engineering workflows
3. **Code Reusability:** Functions work with any GearCombination data
4. **Scalability:** Easy to add new analysis without changing core data structure
5. **Engineering Mindset:** Focus on optimization and statistical analysis

## 💡 Extension Ideas

Try these enhancements to deepen your understanding:

1. **Add more analysis functions:**

   - Find combinations with specific gear ratios
   - Calculate average output RPM for each input speed
   - Group combinations by speed ranges

2. **Add user interaction:**

   - Let users specify target RPM and find best matches
   - Allow filtering by gear ratio ranges
   - Interactive gear recommendation system

3. **Enhanced output:**
   - Sort combinations by different criteria
   - Export data to CSV format for spreadsheet analysis
   - Create histogram of speed distributions

Happy engineering! 🎉

## 🎮 Challenge 2: Roblox Game Collection Manager

Create a digital library to track and analyze your favorite Roblox games using advanced struct features!

**Mission:**

- Design a comprehensive `RobloxGame` struct with multiple data types
- Build a collection of 10 popular Roblox games with realistic data
- Implement functions to manage, search, and analyze your collection
- Discover gaming patterns and generate personalized insights

**Key Features:**

- **Complete Game Profiles:** Name, genre, rating, playtime, favorite status, last played date
- **Collection Display:** Professional formatting with emojis and clear organization
- **Statistical Analysis:** Total playtime, average ratings, favorite counts
- **Genre Filtering:** Find games by specific categories (Adventure, Role Playing, etc.)
- **Gaming Insights:** Personalized status based on your gaming habits
- **Advanced Analytics:** Most played games, rating categorization, comprehensive statistics

### **Sample Output:**

```
🎮 ROBLOX GAME COLLECTION MANAGER 🎮
====================================

📚 MY GAME COLLECTION:

[1] 🎯 Adopt Me! (Pet Simulator)
   Rating: 4.2/5.0 ⭐
   Playtime: 150 hours
   Favorite: 💖 YES
   Last Played: 2024-01-20

[2] 🎯 Brookhaven RP (Role Playing)
   Rating: 4.0/5.0 ⭐
   Playtime: 89 hours
   Favorite: ❌ No
   Last Played: 2024-01-18

... (8 more games)

==================================================

📈 COLLECTION STATISTICS:
🎮 Most Played: Blox Fruits (203 hours)
⭐ Excellent Games (4.0+): 7
👍 Good Games (3.0-3.9): 3
😐 Okay Games (<3.0): 0

==================================================

🏆 HIGHEST RATED GAME:
🎯 Tower of Hell (Obby)
   Rating: 4.5/5.0 ⭐
   Playtime: 67 hours
   Favorite: 💖 YES
   Last Played: 2024-01-22

==================================================

🎭 ROLE PLAYING GAMES IN COLLECTION:
• Brookhaven RP (Rating: 4.0, Playtime: 89h)
• Royale High (Rating: 3.9, Playtime: 112h)

🏃 ADVENTURE GAMES IN COLLECTION:
• Blox Fruits (Rating: 4.3, Playtime: 203h)

==================================================

📊 GAMING INSIGHTS:
🕐 Total Gaming Time: 957 hours
💖 Favorite Games: 5 out of 10
⭐ Average Rating: 4.1/5.0
🎮 Status: HARDCORE GAMER! You've spent serious time in Roblox!
```

**Learning Objectives:**

1. **Complex Struct Design:** Multiple data types working together (string, double, int, bool)
2. **Real-World Data Management:** Practical application like media libraries or game databases
3. **Advanced Function Design:** Functions that analyze, filter, and process struct arrays
4. **String Operations:** Genre comparison and text-based filtering
5. **Statistical Computing:** Averages, totals, categorization, and trend analysis
6. **User Experience:** Professional formatting and meaningful insights

**Struct Architecture:**

```cpp
struct RobloxGame {
    string name;           // Game title
    string genre;          // Category/type of game
    double rating;         // 1.0 to 5.0 star rating
    int playtimeHours;     // Hours spent playing
    bool isFavorite;       // Personal favorite status
    string lastPlayed;     // Date last played
};
```

**Key Functions Demonstrated:**

- `displayGame()` - Individual game presentation
- `displayCollection()` - Full collection display
- `findHighestRated()` - Best game identification
- `calculateTotalPlaytime()` - Time investment analysis
- `calculateAverageRating()` - Quality assessment
- `findGamesByGenre()` - Category-based filtering
- `countFavorites()` - Preference analysis
- `showGameStatistics()` - Comprehensive data insights

## 🎓 Advanced Programming Concepts

**Function Parameters:**

- `const RobloxGame& game` - Reference parameters for efficiency
- Array parameters with size for safe processing
- String parameters for flexible filtering

**Data Analysis Patterns:**

- Find maximum/minimum values in arrays
- Calculate averages and totals
- Count items meeting specific criteria
- Filter and display subsets of data
- Multi-condition analysis and categorization

**Real-World Applications:**

- Digital media libraries (Netflix, Spotify, Steam)
- E-commerce recommendation systems
- Personal data tracking applications
- Entertainment analytics platforms
- Gaming achievement systems

## 💡 Extension Challenges

**Try these enhancements:**

1. **Interactive Features:**

   - Add new games to collection
   - Update ratings and playtime
   - Mark/unmark favorites
   - Search games by name

2. **Advanced Analytics:**

   - Monthly playtime trends
   - Genre preference analysis
   - Friend comparison features
   - Achievement tracking

3. **Data Management:**
   - Save/load collection from file
   - Sort games by different criteria
   - Export to different formats
   - Backup and restore functionality

Happy gaming and coding! 🎮
