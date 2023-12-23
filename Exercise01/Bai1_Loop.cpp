#include <iostream>

int fibonacci_iterative(int n) {
    if (n <= 0) return 0;
    else if (n == 1) return 1;
    int a = 0, b = 1;
    for (int i = 2; i <= n; ++i) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    int n;
    std::cout << "Nhap so nguyen N: ";
    std::cin >> n;

    if (n > 0) {
        int result = fibonacci_iterative(n);
        std::cout << "So Fibonacci thu " << n << " la: " << result << std::endl;
    } else {
        std::cout << "Nhap so nguyen N phai lon hon 0." << std::endl;
    }

    return 0;
}

