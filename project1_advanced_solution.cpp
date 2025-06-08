// PROJECT 1 ADVANCED SOLUTION: Robot Gear System Optimizer (With Bonus Challenges)
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function to calculate gear ratio
double calculateGearRatio(int drivingGear, int drivenGear) {
  return (double)drivenGear / drivingGear;
}

// Function to calculate output RPM
double calculateOutputRPM(int inputRPM, int drivingGear, int drivenGear) {
  double gearRatio = calculateGearRatio(drivingGear, drivenGear);
  return inputRPM / gearRatio;
}

// Function to check if a ratio is a whole number
bool isWholeNumber(double ratio) {
  return fabs(ratio - round(ratio)) < 0.001;  // Account for floating point precision
}

int main() {
  // Available options (use arrays!)
  int inputRPMs[] = {100, 200, 600};
  int gearSizes[] = {12, 24, 36, 48, 60, 72, 80};
  
  cout << "🤖 ROBOT GEAR SYSTEM ANALYSIS 🤖" << endl;
  cout << "=====================================" << endl;
  
  // Variables for bonus challenges
  int combinationCount = 0;
  double maxOutputRPM = 0;
  int bestSpeedConfig[3] = {0, 0, 0};  // inputRPM, driving, driven
  
  double closestTo300 = 999999;
  int balancedConfig[3] = {0, 0, 0};
  
  int wholeNumberCount = 0;
  int oneToOneCount = 0;
  
  // Use nested loops to test all combinations
  for (int i = 0; i < 3; i++) {  // For each input RPM
    int inputRPM = inputRPMs[i];
    
    for (int j = 0; j < 7; j++) {  // For each driving gear
      int drivingGear = gearSizes[j];
      
      for (int k = 0; k < 7; k++) {  // For each driven gear
        int drivenGear = gearSizes[k];
        
        // Calculate ratio and output RPM
        double ratio = calculateGearRatio(drivingGear, drivenGear);
        double outputRPM = calculateOutputRPM(inputRPM, drivingGear, drivenGear);
        
        // Display the results
        cout << "Input: " << setw(3) << inputRPM << " RPM | ";
        cout << "Driving: " << setw(2) << drivingGear << "T | ";
        cout << "Driven: " << setw(2) << drivenGear << "T | ";
        cout << "Ratio: " << fixed << setprecision(2) << setw(5) << ratio << " | ";
        cout << "Output: " << fixed << setprecision(1) << setw(6) << outputRPM << " RPM";
        
        // Check for bonus achievements
        bool hasBonus = false;
        
        // 🏆 Speed Demon Challenge
        if (outputRPM > maxOutputRPM) {
          maxOutputRPM = outputRPM;
          bestSpeedConfig[0] = inputRPM;
          bestSpeedConfig[1] = drivingGear;
          bestSpeedConfig[2] = drivenGear;
          cout << " ⚡ FASTEST!";
          hasBonus = true;
        }
        
        // 🏆 Balanced Bot Challenge  
        if (fabs(outputRPM - 300) < fabs(closestTo300 - 300)) {
          closestTo300 = outputRPM;
          balancedConfig[0] = inputRPM;
          balancedConfig[1] = drivingGear;
          balancedConfig[2] = drivenGear;
          cout << " ⚖️ BALANCED!";
          hasBonus = true;
        }
        
        // 🏆 Perfect Ratios Challenge
        if (isWholeNumber(ratio)) {
          wholeNumberCount++;
          cout << " 🎯 PERFECT!";
          hasBonus = true;
        }
        
        // 🏆 Efficiency Expert Challenge
        if (fabs(ratio - 1.0) < 0.001) {
          oneToOneCount++;
          cout << " 🔧 1:1!";
          hasBonus = true;
        }
        
        cout << endl;
        combinationCount++;
      }
    }
  }
  
  // Summary Report
  cout << "\n🏆 BONUS CHALLENGE RESULTS 🏆" << endl;
  cout << "=====================================" << endl;
  cout << "⚡ Speed Demon (Fastest Setup):" << endl;
  cout << "   " << bestSpeedConfig[0] << " RPM → " << bestSpeedConfig[1] 
       << "T → " << bestSpeedConfig[2] << "T = " << maxOutputRPM << " RPM" << endl;
  
  cout << "⚖️ Balanced Bot (Closest to 300 RPM):" << endl;
  cout << "   " << balancedConfig[0] << " RPM → " << balancedConfig[1] 
       << "T → " << balancedConfig[2] << "T = " << closestTo300 << " RPM" << endl;
  
  cout << "🎯 Perfect Ratios (Whole Numbers): " << wholeNumberCount << " setups" << endl;
  cout << "🔧 Efficiency Expert (1:1 Ratios): " << oneToOneCount << " setups" << endl;
  
  cout << "\nANALYSIS COMPLETE: " << combinationCount << " combinations tested!" << endl;
  cout << "🤖 Ready for robot competition! 🏁" << endl;
  
  return 0;
} 