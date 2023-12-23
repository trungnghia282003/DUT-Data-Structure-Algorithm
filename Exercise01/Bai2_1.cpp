#include <iostream>

int main() {
	const int maxSize = 100;  // Xac dinh kich thuoc toi da cho stack
	int stack[maxSize];
	int top = -1;  // Khoi tao top cua stack

	int num;
	std::cout << "Nhap so tu nhien (n >= 0) hoac -1 de dung:\n";

	while (true) {
		std::cin >> num;

		if (num == -1) {
			break;  // Ket thuc vong lap neu nhap -1
		} else if (num >= 0 && top < maxSize - 1) {
			stack[++top] = num;  // Them so vao stack neu la so tu nhien va stack khong day
		} else if (top >= maxSize - 1) {
			std::cout << "Stack da day. Khong the them so tu nhien." << std::endl;
		} else {
			std::cout << "So phai la so tu nhien hoac -1." << std::endl;
		}
	}

	std::cout << "Stack vua tao: ";
	for (int i = 0; i <= top; i++) {
		std::cout << stack[i] << " ";  // In ra so tu dau den cuoi stack
	}

	return 0;
}

