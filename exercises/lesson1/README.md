# Lesson 1 Exercises: Engineering Challenge

## 🔧 Gear Ratio Exercises

These exercises apply the concepts learned in Lesson 1 to solve real robotics engineering problems using gear ratios.

### 📁 Files Included:

- `exercise1_gear_ratio_solution.cpp` - Calculate gear ratios and understand speed/torque trade-offs
- `exercise2_output_rpm_solution.cpp` - Calculate final output RPM from motor speed and gears

## 🚀 How to Compile and Run

### For Mac/Linux:

```bash
# Exercise 1: Gear Ratio Calculator
clang++ exercise1_gear_ratio_solution.cpp -o gear_ratio
./gear_ratio

# Exercise 2: Output RPM Calculator
clang++ exercise2_output_rpm_solution.cpp -o output_rpm
./output_rpm
```

### For Windows:

```cmd
# Exercise 1: Gear Ratio Calculator
g++ exercise1_gear_ratio_solution.cpp -o gear_ratio.exe
gear_ratio.exe

# Exercise 2: Output RPM Calculator
g++ exercise2_output_rpm_solution.cpp -o output_rpm.exe
output_rpm.exe
```

## 🎯 Exercise 1: Calculate Gear Ratio

**What you'll learn:**

- User input with `cin`
- Function creation and usage
- Conditional logic with `if/else`
- Engineering applications of gear ratios

**Sample Run:**

```
⚙️ Gear Ratio Calculator ⚙️
Enter driving gear teeth: 12
Enter driven gear teeth: 36
Gear ratio: 3:1
Result: SLOWER speed, MORE torque
```

## 🎯 Exercise 2: Calculate Output RPM

**What you'll learn:**

- Multiple user inputs
- Function composition (using one function inside another)
- Real-world robotics calculations
- Formatted output

**Sample Run:**

```
🚀 Robot RPM Calculator 🚀
Enter motor input RPM: 1000
Enter driving gear teeth: 24
Enter driven gear teeth: 48

🔧 RESULTS 🔧
Input: 1000 RPM
Gear Ratio: 2:1
Output: 500 RPM
```

## 🤖 Engineering Context

**Gear Ratios in Robotics:**

- **High Ratio (>1):** Slower speed, more torque (good for lifting heavy objects)
- **Low Ratio (<1):** Faster speed, less torque (good for quick movements)
- **1:1 Ratio:** Same speed and torque (direct drive)

**Real Applications:**

- FRC/VEX competition robots
- Industrial manufacturing
- Automotive transmissions
- Drone motor systems

## 💡 Try These Test Cases:

| Input RPM | Driving Gear | Driven Gear | Expected Ratio | Expected Output |
| --------- | ------------ | ----------- | -------------- | --------------- |
| 100       | 12           | 24          | 2.0            | 50 RPM          |
| 200       | 24           | 12          | 0.5            | 400 RPM         |
| 600       | 36           | 36          | 1.0            | 600 RPM         |
| 1000      | 48           | 24          | 0.5            | 2000 RPM        |

Happy coding! 🎉
