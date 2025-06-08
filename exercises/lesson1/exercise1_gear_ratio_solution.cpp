// Lesson 1 Exercise 1 Solution: Calculate Gear Ratio
#include <iostream>
using namespace std;

// Function to calculate gear ratio
double calculateGearRatio(int drivingGear, int drivenGear) {
  return (double)drivenGear / drivingGear;
}

int main() {
  int driving, driven;
  
  cout << "⚙️ Gear Ratio Calculator ⚙️" << endl;
  cout << "Enter driving gear teeth: ";
  cin >> driving;
  cout << "Enter driven gear teeth: ";
  cin >> driven;
  
  double ratio = calculateGearRatio(driving, driven);
  cout << "Gear ratio: " << ratio << ":1" << endl;
  
  if (ratio > 1) {
    cout << "Result: SLOWER speed, MORE torque" << endl;
  } else if (ratio < 1) {
    cout << "Result: FASTER speed, LESS torque" << endl;
  } else {
    cout << "Result: SAME speed, SAME torque" << endl;
  }
  
  return 0;
} 