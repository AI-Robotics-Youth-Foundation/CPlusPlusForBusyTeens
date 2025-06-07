# Lesson 1: Welcome to C++ Programming!

## 👋 What is Programming?

Programming is how we tell computers what to do! Just like you give instructions to a friend in a game, you give instructions to a computer using a programming language.

- **In games like Roblox:** You might tell a character to move, score points, or create new rules for a game world.
- **In C++:** You can make robots move, create games, or build powerful apps!

## 📝 What is a Program?

A **program** is a set of instructions you give to a computer to make it do something.

- Think of a program like a **recipe**: it tells the computer step-by-step what to do, just like a recipe tells you how to bake a cake.
- Or imagine giving a robot a list of moves to complete an obstacle course—each move is an instruction in your program.
- In games, a program might keep score, move characters, or check if you've won.

When you write a program in C++, you're creating your own set of instructions for the computer to follow!

## 💡 What is C++?

C++ is a popular programming language used for:

- Video games (like Minecraft, Fortnite, and many more)
- Robotics (VEX, Arduino, and more)
- Apps and software (even parts of Windows and MacOS!)

**Why learn C++?**

- It's fast and powerful
- It's used in real-world tech and games
- It teaches you how computers really work

## 🛠️ Setting Up Your Coding Space

We'll use **Visual Studio Code (VS Code)**, a free and popular code editor.

### 1. Download and Install VS Code

- Go to [https://code.visualstudio.com/](https://code.visualstudio.com/)
- Click **Download** for your computer (Windows, Mac, or Linux)
- Open the installer and follow the steps

### 2. Install the C++ Extension

- Open VS Code
- Click the **Extensions** icon (on the left sidebar)
- Search for **C++**
- Click **Install** on the one by Microsoft

### 3. Install a C++ Compiler

- **Windows:** Download [MinGW](https://www.mingw-w64.org/) or [MSYS2](https://www.msys2.org/)
- **Mac:** Install Xcode Command Line Tools (open Terminal and type: `xcode-select --install`)
- **Linux:** Use your package manager (e.g., `sudo apt install g++`)

### 4. Test Your Setup

- Open VS Code
- Create a new file called `hello.cpp`
- Copy and paste this code:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, world!" << endl;
    return 0;
}
```

- Save the file
- Open the terminal in VS Code (View > Terminal)
- Type: `g++ hello.cpp -o hello` and press Enter
- Then type: `./hello` (or `hello.exe` on Windows)
- You should see: `Hello, world!`

**Congratulations!** You just wrote and ran your first C++ program!

---

## 🏁 What's Next?

In the next lesson, you'll learn how to use variables to store information, just like you do when tracking a player's score in a game or a robot's speed!

---

**Tip:** If you get stuck, ask for help! Coding is all about learning together.
