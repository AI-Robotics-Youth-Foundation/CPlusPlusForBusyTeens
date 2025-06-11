/*
 * PROJECT 1: Robot Gear System Optimizer - BASIC SOLUTION
 * 
 * This program analyzes all possible gear combinations for a robot drivetrain.
 * It demonstrates the use of arrays, nested loops, and functions to solve
 * real engineering problems.
 * 
 * Engineering Requirements:
 * - 3 different motor speeds (100, 200, 600 RPM)
 * - 7 available gear sizes (12, 24, 36, 48, 60, 72, 80 teeth)
 * - Each gear can be either driving or driven
 * - Total combinations: 3 × 7 × 7 = 147 setups
 */

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes (from Lesson 1)
double calculateGearRatio(int drivingGear, int drivenGear);
double calculateOutputRPM(int inputRPM, int drivingGear, int drivenGear);

int main() {
    cout << "🤖 ROBOT GEAR SYSTEM OPTIMIZER 🤖" << endl;
    cout << "====================================" << endl;
    cout << "Engineering Analysis: All Possible Combinations" << endl << endl;
    
    // Available components (using arrays from Lesson 3)
    int inputRPMs[] = {100, 200, 600};
    int gearSizes[] = {12, 24, 36, 48, 60, 72, 80};
    
    int rpmCount = 3;
    int gearCount = 7;
    int combinationNumber = 1;
    
    cout << "📊 COMPLETE GEAR ANALYSIS:" << endl;
    cout << "Input RPM | Driving Gear | Driven Gear | Gear Ratio | Output RPM" << endl;
    cout << "----------|--------------|-------------|------------|----------" << endl;
    
    // Nested loops to test all combinations
    for (int r = 0; r < rpmCount; r++) {
        for (int d = 0; d < gearCount; d++) {
            for (int n = 0; n < gearCount; n++) {
                int inputRPM = inputRPMs[r];
                int drivingGear = gearSizes[d];
                int drivenGear = gearSizes[n];
                
                // Calculate using functions from Lesson 1
                double gearRatio = calculateGearRatio(drivingGear, drivenGear);
                double outputRPM = calculateOutputRPM(inputRPM, drivingGear, drivenGear);
                
                // Display results in formatted table
                cout << setw(9) << inputRPM << " | ";
                cout << setw(12) << drivingGear << "T | ";
                cout << setw(11) << drivenGear << "T | ";
                cout << setw(10) << fixed << setprecision(2) << gearRatio << " | ";
                cout << setw(10) << setprecision(1) << outputRPM << endl;
                
                combinationNumber++;
            }
        }
    }
    
    cout << "\n🎯 ANALYSIS COMPLETE!" << endl;
    cout << "Total combinations tested: " << (combinationNumber - 1) << endl;
    cout << "Ready for robot competition! 🏁" << endl;
    
    return 0;
}

// Calculate gear ratio (from Lesson 1)
double calculateGearRatio(int drivingGear, int drivenGear) {
    return (double)drivenGear / drivingGear;
}

// Calculate output RPM (from Lesson 1)
double calculateOutputRPM(int inputRPM, int drivingGear, int drivenGear) {
    double gearRatio = calculateGearRatio(drivingGear, drivenGear);
    return inputRPM / gearRatio;
}