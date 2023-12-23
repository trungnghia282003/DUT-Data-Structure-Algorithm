#include <iostream>

int fibonacci_recursive(int n) {
	if (n <= 0) return 0;
	else if (n == 1) return 1;
	else return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int main() {
	int n;
	std::cout << "Nhap so nguyen N: ";
	std::cin >> n;

	if (n > 0) {
		int result = fibonacci_recursive(n);
		std::cout << "So Fibonacci thu " << n << " la: " << result << std::endl;
	} else {
		std::cout << "Nhap so nguyen phai lon hon 0." << std::endl;
	}

	return 0;
}

