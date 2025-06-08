#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  string favoriteGame;
  int age;

  cout << "What is your name? ";
  cin >> name;
  cout << "How old are you? ";
  cin >> age;
  cout << "What is your favorite Roblox game? ";
  cin >> favoriteGame;

  cout << "Hello, " << name << "! You are " << age << " years old and your favorite Roblox game is " << favoriteGame << "." << endl;
}