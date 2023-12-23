#include <iostream>
using namespace std;
// Ham kiem tra xem mot so co phai la so nguyen to hay khong
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;

    // Nhap vao 2 so nguyen duong a va b
    std::cout << "Nhap 2 so a va b: ";
    std::cin >> a >> b;

    // Dam bao a < b va a >= 2
    if (a >= 2 && a < b) {
        int sum = 0;
        for (int i = a; i < b; i++) {
            if (!isPrime(i)) {
                sum += i;
            }
        }

        // Xuat tong cac hop so trong khoang (a,b)
        std::cout << "Tong cac hop so trong (" << a << "," << b << ") la: " << sum << std::endl;
    } else {
        std::cout << "Nhap sai. Yeu cau a >= 2 va a < b." << std::endl;
    }

    return 0;
}

