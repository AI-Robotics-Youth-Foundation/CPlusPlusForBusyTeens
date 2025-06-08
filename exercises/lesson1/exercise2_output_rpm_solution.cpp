// Lesson 1 Exercise 2 Solution: Calculate Output RPM
#include <iostream>
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
  int inputRPM, driving, driven;
  
  cout << "🚀 Robot RPM Calculator 🚀" << endl;
  cout << "Enter motor input RPM: ";
  cin >> inputRPM;
  cout << "Enter driving gear teeth: ";
  cin >> driving;
  cout << "Enter driven gear teeth: ";
  cin >> driven;
  
  double gearRatio = calculateGearRatio(driving, driven);
  double outputRPM = calculateOutputRPM(inputRPM, driving, driven);
  
  cout << "\n🔧 RESULTS 🔧" << endl;
  cout << "Input: " << inputRPM << " RPM" << endl;
  cout << "Gear Ratio: " << gearRatio << ":1" << endl;
  cout << "Output: " << outputRPM << " RPM" << endl;
  
  return 0;
} 