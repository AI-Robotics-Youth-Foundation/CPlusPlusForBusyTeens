// PROJECT 1 BASIC SOLUTION: Robot Gear System Optimizer
#include <iostream>
#include <iomanip>
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

int main() {
  // Available options (use arrays!)
  int inputRPMs[] = {100, 200, 600};
  int gearSizes[] = {12, 24, 36, 48, 60, 72, 80};
  
  cout << "🤖 ROBOT GEAR SYSTEM ANALYSIS 🤖" << endl;
  cout << "=====================================" << endl;
  
  int combinationCount = 0;
  
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
        cout << "Input: " << inputRPM << " RPM | ";
        cout << "Driving: " << drivingGear << "T | ";
        cout << "Driven: " << drivenGear << "T | ";
        cout << "Ratio: " << fixed << setprecision(2) << ratio << " | ";
        cout << "Output: " << fixed << setprecision(1) << outputRPM << " RPM" << endl;
        
        combinationCount++;
      }
    }
  }
  
  cout << "\nANALYSIS COMPLETE: " << combinationCount << " combinations tested!" << endl;
  
  return 0;
} 