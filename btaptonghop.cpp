//---------Mức cơ bản-------
// Bài 3:
// Nhập số nguyên dương N. In ra tất cả các số chính phương (1, 4, 9, 16, 25, ...) không vượt quá N.
// Các số in trên cùng 1 dòng, cách nhau bởi dấu cách.

// Cách 1:
//  #include <iostream>
//  using namespace std;

// int main(){
//     long n;
//     cout << "Moi nhap n: ";
//     cin >> n;
//     for (long i = 1; i*i <= n; i++){
//         long soChinhPhuong = i * i;
//         cout << soChinhPhuong << " " << endl;
//     }
//     return 0;
// }

// Cách 2:
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     long n;
//     cout << "Moi nhap n: ";
//     cin >> n;

//     long can = sqrt(n);

//     for (long i = 1; i <= can; i++){
//         cout << i * i << " " << endl;
//     }

//     return 0;
// }

//----------Mức trung bình-----------
// Bài 4:
// Nhập số nguyên dương n và 1 chữ số k (từ 0 đến 9).
// Dùng vòng lặp while đếm xem chữ số k xuất hiện bao nhiêu lần trong n, in ra kết quả.

// #include <iostream>
// using namespace std;

// int main() {
//     long n;
//     int k, dem = 0;

//     cout << "Nhap n: ";
//     cin >> n;
//     cout << "Nhap k (0-9): ";
//     cin >> k;
//     while (n > 0) {
//         int chuSo = n % 10;
//         if (chuSo == k) {
//             dem++;
//         }
//         n = n / 10;
//     }
//     cout << "So lan xuat hien cua " << k << " la: " << dem;
//     return 0;
// }

// Bài 6:Nhập số nguyên dương n. Số hoàn hảo là số bằng tổng các ước của nó (không kể chính nó).
// Tính tổng các ước của n rồi in ra kết luận n có phải số hoàn hảo hay không.
// #include <iostream>
// using namespace std;

// int main() {
//     long n;
//     long tong = 0;

//     cout << "Moi nhap n: ";
//     cin >> n;

//     for (long i = 1; i < n; i++) {
//         if (n % i == 0) {
//             tong = tong + i;
//         }
//     }
//     if (tong == n) {
//         cout << n << " la so hoan hao";
//     }
//     else {
//         cout << n << " khong phai la so hoan hao";
//     }
//     return 0;
// }

//--------Mức nâng cao-------------
// Bài 7:Nhập số nguyên dương n. Lặp lại quy tắc sau cho đến khi n = 1:
// nếu n chẵn thì gán n = n / 2, nếu n lẻ thì gán n = 3 * n + 1.
// Đếm và in ra số bước đã thực hiện.
#include <iostream>
using namespace std;

int main()
{
    int n, dem = 0;
    cout << "Moi nhap n: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "n khong phai so nguyen duong" << endl;
    }
    else
    {
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                n = 3 * n + 1;
            }

            dem++;
        }
        cout << "So buoc = " << dem << endl;
    }
    return 0;
}

