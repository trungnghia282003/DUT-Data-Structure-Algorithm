#include <iostream>

int main() {
	const int maxSize = 100;  // Xac dinh kich thuoc toi da cho stack
	int stack[maxSize];
	int* top = stack;  // Khoi tao con tro top cua stack

	int num;
	top = stack;  // Gan con tro top vao dau mang stack
	std::cout << "Nhap so tu nhien (n >= 0) hoac -1 de dung:\n";

	while (true) {
		std::cin >> num;

		if (num == -1) {
			break;  // Ket thu vong lap neu nhap -1
		} else if (num >= 0 && top < stack + maxSize) {
			*top = num;  // Them so vao stack neu la so tu nhien va stack khong day
			top++;  // Di chuyen con tro top len tren
		} else if (top >= stack + maxSize) {
			std::cout << "Stack da day. Khong the them so tu nhien." << std::endl;
		} else {
			std::cout << "So phai la so tu nhien hoac -1." << std::endl;
		}
	}

	std::cout << "Stack vua tao: ";
	for (int* p = stack; p < top; p++) {
		std::cout << *p << " ";  // In ra so tu dau den top cua stack
	}

	return 0;
}

