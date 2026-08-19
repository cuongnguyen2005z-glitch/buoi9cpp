#include <iostream>
using namespace std;

int main() {
    int n, dao = 0, chuSo;

    cout << "Moi nhap n: ";
    cin >> n;

    int goc = n;

    while (n > 0) {
        chuSo = n % 10;
        dao = dao * 10 + chuSo;
        n /= 10;
    }

    if (dao == goc) {
        cout << "n la so doi xung" << endl;
    } else {
        cout << "n khong phai so doi xung" << endl;
    }

    return 0;
}
