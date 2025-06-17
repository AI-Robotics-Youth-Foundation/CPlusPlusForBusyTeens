# Slide 12: Compile and Run - Teaching Script

## 📱 Slide Content

**Title:** Compile and Run

- In Terminal, go to the folder with `hello.cpp`
- Type: `clang++ hello.cpp -o hello`
- Run it: `./hello`
- You should see: **Hello, world!**

## 🎤 Teacher Script (7 minutes)

### The Magic Moment Setup (1 minute)

**"Okay everyone, this is THE moment! We're about to take your code and bring it to life. This is when you officially become a programmer!"**

**"Right now, your hello.cpp file is just text that humans can read. But computers don't understand text - they need machine code. The compiler is going to translate your code into computer language."**

**"It's like having a script for a play written in English, but your actors only speak Spanish. You need a translator!"**

### Terminal Navigation (2 minutes)

**"First, we need to open Terminal and navigate to where your hello.cpp file is saved."**

_[Demonstrate on screen]_

**"Open Terminal - on Mac, you can press Cmd+Space and type 'Terminal', or find it in Applications > Utilities."**

**"Now we need to navigate to the folder where you saved hello.cpp. If you saved it on your Desktop, type: `cd Desktop`"**

**"The 'cd' command means 'change directory' - it's like opening a folder. You can type `ls` to see what files are in the current folder."**

_[Wait for students to catch up]_

**"Can everyone see their hello.cpp file when you type `ls`? If not, raise your hand and I'll help you find it!"**

### The Compilation Step (2 minutes)

**"Now for the magic! Type exactly this: `clang++ hello.cpp -o hello`"**

_[Type it slowly and clearly]_

**"Let me break this down: 'clang++' is our compiler. 'hello.cpp' is our source code file. The '-o hello' part says 'create an output file called hello'."**

**"Press Enter and... hopefully you don't see any error messages! If everything worked, you should just see a new command prompt appear. No news is good news in programming!"**

_[Check with students - help with any compilation errors]_

**"If you got an error message, don't panic! Raise your hand and we'll debug it together. Error messages are the computer trying to help you!"**

### Running the Program (1 minute 30 seconds)

**"Now comes the best part - running your program! Type: `./hello`"**

**"The './' tells the computer 'run the program called hello in this folder'."**

**"Press Enter and..."**

_[Dramatic pause]_

**"You should see 'Hello, world!' appear on your screen! If you see that, congratulations - you just wrote and executed your first C++ program!"**

### Celebration & Troubleshooting (30 seconds)

**"Everyone who sees 'Hello, world!' on their screen, give yourself a round of applause! You're officially a programmer now!"**

**"If you didn't get the right output, no worries - let's fix it together. Programming is all about solving problems!"**

## 🎯 Key Message

You just transformed human-readable code into a working computer program - that's real programming!

## 🚦 Transition

**"Amazing! Now that we've got our first program working, let's understand a bit more about what we just did..."**

## 📝 Teacher Notes

- This is a high-stress moment for students - be very supportive
- Go slowly with Terminal commands - many students haven't used command line before
- Have common error solutions ready
- Celebrate successes enthusiastically
- Be prepared to help with file path issues
- Have backup online compiler ready for students with persistent issues

## 🤔 Anticipated Student Questions

- **Q:** "What if I get an error message?"
- **A:** "Perfect! Error messages are learning opportunities. Read it out loud and we'll figure it out together."

- **Q:** "Why do I need to use Terminal? Can't I just double-click the file?"
- **A:** "Great question! The compiled program is designed to run in Terminal. Later we'll learn to make programs with graphical interfaces."

- **Q:** "What does the -o hello part do?"
- **A:** "It tells the compiler what to name your executable program. Without it, you'd get a generic name like 'a.out'."

## 🔧 Technical Requirements

- Test the compilation process on classroom computers beforehand
- Have common error messages and solutions ready
- Know how to navigate to Desktop/Documents in Terminal
- Prepare alternative file locations if students saved elsewhere
- Have backup copy/paste commands ready
- Know how to use online compilers as fallback

## 🚨 Common Issues & Solutions

- **File not found:** Check file location with `ls`, use `cd` to navigate
- **Permission denied:** Use `chmod +x hello` to make file executable
- **Compiler not found:** Check if clang++ is installed, try g++ instead
- **Compilation errors:** Usually syntax errors - check brackets, semicolons, quotes
