#include <iostream>
using namespace std;

int main() {
    int obbies;
    cout << "How many obstacles (obbies) did you complete in the Roblox game? ";
    cin >> obbies;

    if (obbies >= 50) {
        cout << "Rank: Legend" << endl;
    } else if (obbies >= 30) {
        cout << "Rank: Pro" << endl;
    } else if (obbies >= 15) {
        cout << "Rank: Gamer" << endl;
    } else if (obbies >= 5) {
        cout << "Rank: Rookie" << endl;
    } else {
        cout << "Rank: Noob" << endl;
    }
    return 0;
}
