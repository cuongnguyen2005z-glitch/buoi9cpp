#include <iostream>
using namespace std;

int main() {
    long long n, dem = 0, max = 0, chuSo;
    cout << "Moi nhap n: ";
    cin >> n;
    while (n > 0){
        chuSo = n % 10;
        dem ++;
        if (chuSo > max){
            max = chuSo;
        }
        n = n / 10;
    }
    cout << "So chu so: " << dem << endl;
    cout << "Chu so lon nhat la: " << max << endl;
    return 0;
}