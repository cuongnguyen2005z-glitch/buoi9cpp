#include <iostream>
using namespace std;

int main() {
    int secretNumber = 50;
    int guess;
    int luot = 0;

    do {
        cout << "Moi ban doan so (1-100): ";
        cin >> guess;

        luot++;

        if (guess == secretNumber) {
            cout << "Ban da doan dung!" << endl;
        }
        else if (guess > secretNumber) {
            cout << "So bi mat nho hon!" << endl;
        }
        else {
            cout << "So bi mat lon hon!" << endl;
        }

    } while ((guess != secretNumber) && (luot < 7));

    if (guess == secretNumber) {
        cout << "Ban thang!" << endl;
        cout << "So bi mat la: " << secretNumber << endl;
    }
    else {
        cout << "Ban thua!" << endl;
        cout << "So bi mat la: " << secretNumber << endl;
    }

    return 0;
}