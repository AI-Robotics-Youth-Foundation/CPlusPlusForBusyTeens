// Lesson 4 Challenge 1 Solution: Project 1 Extension - Gear Data Structures
#include <iostream>
#include <iomanip>
using namespace std;

// Define the GearCombination struct
struct GearCombination {
  int inputRPM;
  int drivingGear;
  int drivenGear;
  double gearRatio;
  double outputRPM;
};

// Function to calculate gear ratio (from Lesson 1)
double calculateGearRatio(int drivingGear, int drivenGear) {
  return (double)drivenGear / drivingGear;
}

// Function to calculate output RPM (from Lesson 1)
double calculateOutputRPM(int inputRPM, int drivingGear, int drivenGear) {
  double gearRatio = calculateGearRatio(drivingGear, drivenGear);
  return inputRPM / gearRatio;
}

// Function to display a single combination
void displayCombination(GearCombination combo) {
  cout << "Input: " << setw(3) << combo.inputRPM << " RPM | ";
  cout << "Gears: " << setw(2) << combo.drivingGear << "T → " << setw(2) << combo.drivenGear << "T | ";
  cout << "Ratio: " << fixed << setprecision(2) << setw(5) << combo.gearRatio << " | ";
  cout << "Output: " << fixed << setprecision(1) << setw(6) << combo.outputRPM << " RPM" << endl;
}

// Function to find the fastest combination
GearCombination findFastest(GearCombination combos[], int size) {
  GearCombination fastest = combos[0];
  for (int i = 1; i < size; i++) {
    if (combos[i].outputRPM > fastest.outputRPM) {
      fastest = combos[i];
    }
  }
  return fastest;
}

// Function to find the slowest combination
GearCombination findSlowest(GearCombination combos[], int size) {
  GearCombination slowest = combos[0];
  for (int i = 1; i < size; i++) {
    if (combos[i].outputRPM < slowest.outputRPM) {
      slowest = combos[i];
    }
  }
  return slowest;
}

// Function to find combination closest to target RPM
GearCombination findClosestTo(GearCombination combos[], int size, double targetRPM) {
  GearCombination closest = combos[0];
  double smallestDifference = abs(combos[0].outputRPM - targetRPM);
  
  for (int i = 1; i < size; i++) {
    double difference = abs(combos[i].outputRPM - targetRPM);
    if (difference < smallestDifference) {
      smallestDifference = difference;
      closest = combos[i];
    }
  }
  return closest;
}

// Function to count combinations with whole number ratios
int countWholeNumberRatios(GearCombination combos[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    // Check if ratio is close to a whole number (account for floating point precision)
    double rounded = round(combos[i].gearRatio);
    if (abs(combos[i].gearRatio - rounded) < 0.001) {
      count++;
    }
  }
  return count;
}

int main() {
  // Available options
  int inputRPMs[] = {100, 200, 600};
  int gearSizes[] = {12, 24, 36, 48, 60, 72, 80};
  
  // Create array to store all combinations
  GearCombination allCombinations[147];
  int combinationIndex = 0;
  
  cout << "🤖 ROBOT GEAR SYSTEM ANALYSIS (STRUCT VERSION) 🤖" << endl;
  cout << "====================================================" << endl;
  
  // Generate all combinations and store in struct array
  for (int i = 0; i < 3; i++) {          // For each input RPM
    for (int j = 0; j < 7; j++) {        // For each driving gear
      for (int k = 0; k < 7; k++) {      // For each driven gear
        
        // Create a new combination
        GearCombination combo;
        combo.inputRPM = inputRPMs[i];
        combo.drivingGear = gearSizes[j];
        combo.drivenGear = gearSizes[k];
        combo.gearRatio = calculateGearRatio(combo.drivingGear, combo.drivenGear);
        combo.outputRPM = calculateOutputRPM(combo.inputRPM, combo.drivingGear, combo.drivenGear);
        
        // Store in array
        allCombinations[combinationIndex] = combo;
        combinationIndex++;
      }
    }
  }
  
  // Display first 10 combinations as sample
  cout << "📋 Sample Combinations (first 10):" << endl;
  cout << "------------------------------------" << endl;
  for (int i = 0; i < 10; i++) {
    displayCombination(allCombinations[i]);
  }
  cout << "... (and " << (147 - 10) << " more combinations)" << endl;
  
  // Analysis using struct data
  cout << "\n🏆 ENGINEERING ANALYSIS 🏆" << endl;
  cout << "============================" << endl;
  
  // Find fastest combination
  GearCombination fastest = findFastest(allCombinations, 147);
  cout << "⚡ FASTEST SETUP:" << endl;
  displayCombination(fastest);
  
  // Find slowest combination  
  GearCombination slowest = findSlowest(allCombinations, 147);
  cout << "\n🐌 SLOWEST SETUP:" << endl;
  displayCombination(slowest);
  
  // Find combination closest to 300 RPM
  GearCombination balanced = findClosestTo(allCombinations, 147, 300.0);
  cout << "\n⚖️ MOST BALANCED (closest to 300 RPM):" << endl;
  displayCombination(balanced);
  cout << "   Difference from 300 RPM: " << abs(balanced.outputRPM - 300.0) << " RPM" << endl;
  
  // Count perfect ratios
  int perfectRatios = countWholeNumberRatios(allCombinations, 147);
  cout << "\n🎯 PERFECT RATIOS: " << perfectRatios << " combinations have whole number ratios" << endl;
  
  // Show some examples of perfect ratios
  cout << "\n📊 Examples of Perfect Ratios:" << endl;
  cout << "-------------------------------" << endl;
  int shown = 0;
  for (int i = 0; i < 147 && shown < 5; i++) {
    double rounded = round(allCombinations[i].gearRatio);
    if (abs(allCombinations[i].gearRatio - rounded) < 0.001) {
      displayCombination(allCombinations[i]);
      shown++;
    }
  }
  
  // Summary statistics
  cout << "\n📈 SUMMARY STATISTICS:" << endl;
  cout << "======================" << endl;
  cout << "Total combinations analyzed: " << 147 << endl;
  cout << "Fastest output: " << fixed << setprecision(1) << fastest.outputRPM << " RPM" << endl;
  cout << "Slowest output: " << fixed << setprecision(1) << slowest.outputRPM << " RPM" << endl;
  cout << "Speed range: " << fixed << setprecision(1) << (fastest.outputRPM - slowest.outputRPM) << " RPM" << endl;
  cout << "Perfect ratios: " << perfectRatios << " (" << fixed << setprecision(1) 
       << (perfectRatios * 100.0 / 147) << "%)" << endl;
  
  cout << "\n🤖 Ready for robot competition! 🏁" << endl;
  
  return 0;
} 