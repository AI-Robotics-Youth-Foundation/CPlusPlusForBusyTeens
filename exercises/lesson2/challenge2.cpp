#include <iostream>
using namespace std;

int main() {
    // Count up from 1 to 10
    cout << "Counting up from 1 to 10:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Count down from 10 to 1
    cout << "Counting down from 10 to 1:" << endl;
    for (int i = 10; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
