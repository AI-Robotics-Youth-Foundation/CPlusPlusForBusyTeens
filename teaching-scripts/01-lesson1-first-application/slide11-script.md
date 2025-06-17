# Slide 11: Your First C++ Program - Teaching Script

## 📱 Slide Content

**Title:** Your First C++ Program

```cpp
// hello.cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello, world!" << endl;
  return 0;
}
```

- Save this as `hello.cpp`

## 🎤 Teacher Script (5 minutes)

### The Big Moment (1 minute)

**"Alright everyone, here it is - your first real C++ program! This might look a bit mysterious right now, but I promise it will make sense soon."**

**"This is called a 'Hello, World!' program, and it's basically the programming equivalent of saying your first word as a baby. Every programmer in the world has written this exact program at some point!"**

_[Display the code prominently on screen]_

**"Let's type this together. Open up your text editor and create a new file. We're going to type this exactly as shown - every character matters in programming!"**

### Code Walkthrough (2 minutes 30 seconds)

**"Let me break this down line by line:"**

**"First line: `// hello.cpp` - This is a comment. Comments are notes for humans that the computer ignores. The '//' tells C++ 'ignore everything after this on this line.'"**

**"Second line: `#include <iostream>` - This is like importing a toolbox. 'iostream' gives us the tools to talk to the user - to show messages and get input."**

**"Third line: `using namespace std;` - Don't worry too much about this for now. It's like telling C++ 'when I say cout, I mean the cout from the standard library.'"**

**"Fourth line: `int main() {` - This is where your program actually starts running. Every C++ program needs a main function - it's like the front door of your program."**

**"Fifth line: `cout << "Hello, world!" << endl;` - This is the magic! 'cout' means 'console output' - it displays text on the screen. The '<<' sends the text to cout, and 'endl' makes a new line."**

**"Sixth line: `return 0;` - This tells the computer 'the program finished successfully.' 0 means everything went okay."**

**"Last line: `}` - This closes the main function. Every opening brace '{' needs a closing brace '}'."**

### Typing Together (1 minute 30 seconds)

**"Now let's type this together. I'll go slowly, and call out any important details:"**

_[Type the program live, calling out each character]_

**"Remember - programming is VERY picky about spelling and punctuation. Every semicolon, every quotation mark, every bracket matters!"**

**"When you're done typing, save the file as 'hello.cpp' - the '.cpp' tells the computer this is a C++ program."**

_[Check that students are following along]_

## 🎯 Key Message

This simple program contains all the fundamental elements of C++ programming.

## 🚦 Transition

**"Great! Everyone should now have a hello.cpp file saved. Next, we need to transform this human-readable code into something the computer can actually run..."**

## 📝 Teacher Notes

- Type the code live - don't just show it on screen
- Go slowly and emphasize exact syntax
- Watch for common errors: missing semicolons, wrong quotes, case sensitivity
- Have the code ready to copy/paste for students who fall behind
- Celebrate when students successfully save their first program file

## 🤔 Anticipated Student Questions

- **Q:** "What if I make a typo?"
- **A:** "No problem! The compiler will tell us about mistakes. Making and fixing errors is how we learn!"

- **Q:** "Why are there so many weird symbols?"
- **A:** "I know it looks complex! Each symbol has a specific job. Don't worry about memorizing everything - focus on the pattern for now."

- **Q:** "Do I have to type the comment?"
- **A:** "Comments are optional but helpful! They help you remember what your code does."

## 🔧 Technical Requirements

- Have the code ready to display clearly
- Test typing the code live beforehand
- Prepare copy/paste backup for struggling students
- Make sure file extension is visible (.cpp)
- Have troubleshooting ready for common save/file issues
