#include <iostream>
using namespace std;

int main() {
    int a, b, du;

    cout << "Moi nhap a: ";
    cin >> a;

    cout << "Moi nhap b: ";
    cin >> b;

    while (b > 0) {
        du = a % b;
        a = b;
        b = du;
    }

    cout << "UCLN = " << a << endl;

    return 0;
}