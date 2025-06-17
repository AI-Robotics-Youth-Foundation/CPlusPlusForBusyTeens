# C++ Teaching Troubleshooting Guide

## 🚨 Most Common Student Issues

### 1. Compilation Errors

#### Missing Semicolons

**Student says:** "It says 'expected ;' but I don't know where!"
**Solution:**

- Look at the line number in the error message
- Check the line before the error line - that's usually where the semicolon is missing
- Remind students: "Every statement in C++ ends with a semicolon, like periods in English"

#### Missing Brackets

**Student says:** "It says 'expected }' but I have brackets!"
**Solution:**

- Count opening { and closing } brackets - they must match
- Use indentation to visually line up brackets
- Show students how good editors highlight matching brackets

#### Case Sensitivity Issues

**Student says:** "I typed cout but it doesn't work!"
**Solution:**

- Check for uppercase letters: `Cout`, `COUT`, `CoUt` are all wrong
- C++ is case-sensitive - `cout` must be exactly lowercase
- Compare their code character-by-character with working example

#### Wrong Quote Types

**Student says:** "My string won't compile!"
**Solution:**

- Check for "smart quotes" from phones/Word: " " instead of " "
- Must use straight quotes: `"Hello"` not `"Hello"`
- Have students retype quotes manually rather than copy-paste

### 2. Runtime Issues

#### Program Doesn't Print Anything

**Student says:** "My program runs but nothing happens!"
**Solutions:**

- Check if they forgot `cout` statements
- Make sure they're running the correct compiled program
- Verify they're looking at the right terminal window
- Add `cin.get()` at end to pause program before it closes

#### Program Closes Immediately

**Student says:** "The window just flashes and disappears!"
**Solutions:**

- Add `cin.get()` before `return 0;` to pause program
- Run from Terminal instead of double-clicking
- Show students how console programs work differently than apps

### 3. Logic Errors

#### Infinite Loops

**Student says:** "My program is stuck and won't stop!"
**Solution:**

- Press Ctrl+C (or Cmd+C on Mac) to stop the program
- Check loop conditions - make sure they can become false
- Verify loop variables are actually changing inside the loop
- Add debug prints to see what's happening: `cout << "i = " << i << endl;`

#### Wrong Comparison Operators

**Student says:** "My if statement isn't working!"
**Solutions:**

- Check for assignment (`=`) vs comparison (`==`)
- Common mistake: `if (x = 5)` instead of `if (x == 5)`
- Explain: "One = assigns, two == compares"

### 4. Input/Output Problems

#### cin Doesn't Wait for Input

**Student says:** "It skipped my cin!"
**Solution:**

- Add `cin.ignore();` before `getline()` calls
- Explain buffer clearing concept simply
- Show difference between `cin >>` and `getline()`

#### Numbers and Text Don't Mix

**Student says:** "After entering a number, my text input is skipped!"
**Solution:**

```cpp
int age;
string name;
cout << "Enter age: ";
cin >> age;
cin.ignore(); // Clear the newline left in buffer
cout << "Enter name: ";
getline(cin, name);
```

### 5. File and Path Issues

#### Can't Find Source File

**Student says:** "It says 'file not found' but the file is there!"
**Solutions:**

- Use `ls` (Mac/Linux) or `dir` (Windows) to list files
- Check file extension - must be `.cpp`
- Navigate to correct directory with `cd`
- Check for hidden file extensions in Windows

#### Permission Denied

**Student says:** "It says 'permission denied' when I try to run!"
**Solution:**

- Make file executable: `chmod +x programname`
- Check if antivirus is blocking the program
- Try running with `./` prefix: `./hello`

## 🎯 Quick Debugging Strategy

### The "Rubber Duck" Method

1. **Read the error message out loud** - often students skip this step
2. **Find the line number** - errors point to specific locations
3. **Compare with working example** - side-by-side comparison
4. **Check the basics** - semicolons, brackets, spelling
5. **Simplify** - comment out code until something works, then add back

### Teaching Debugging Mindset

- **"Errors are normal!"** - Even professionals get them constantly
- **"The computer is trying to help"** - Error messages are clues, not punishments
- **"Start simple"** - Get something basic working first
- **"One change at a time"** - Don't fix multiple things simultaneously

## 🔧 Prevention Strategies

### Before Class

- Test all example code on classroom computers
- Have backup computers for students with persistent issues
- Prepare copy-paste versions of all code examples
- Set up online compiler backup (replit.com)

### During Class

- Type code live so students see the process
- Emphasize careful typing - "slow and accurate beats fast and wrong"
- Walk around and check student screens regularly
- Encourage peer helping - "explain it to your neighbor"

### Setup Best Practices

- Use consistent file locations (Desktop folder for all programs)
- Create shared folder with working examples
- Have students save frequently
- Keep programs short and focused

## 🎓 Advanced Issues

### For Faster Students

- Provide extension challenges
- Introduce debugging tools (basic gdb usage)
- Show different IDEs and their debugging features
- Assign research projects on C++ features

### For Struggling Students

- Pair with successful students for peer tutoring
- Provide simplified versions of exercises
- Focus on understanding over completion
- Offer one-on-one help during lab time

## 📞 When to Ask for Help

### Red Flags - Call Teacher Immediately

- Student is frustrated to the point of giving up
- Repeated compilation errors that don't make sense
- Hardware/software issues beyond basic troubleshooting
- Student fell significantly behind the class

### Green Lights - Encourage Self-Solving

- Simple syntax errors with clear error messages
- Logic errors in working programs
- Students helping each other successfully
- Minor variations from expected output

Remember: The goal is building confidence and problem-solving skills, not perfect code!
