#include <iostream>

// Ham tinh  to hop C(n, k)
int calculateCombination(int n, int k) {
	if (k == 0 || k == n) return 1;
	return calculateCombination(n - 1, k - 1) + calculateCombination(n - 1, k);
}

// Ham xuat tam giac Pascal su dung to hop
void printPascalTriangleCombination(int n) {
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			std::cout << calculateCombination(i, j) << " ";
		}
		std::cout << std::endl;
	}
}

// Ham tinh tam giac Pascal su dung cong thuc de quy
void printPascalTriangleRecursion(int n) {
	int T[100][100]; // Mang luu tru cac gia tri cua tam giac Pascal
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				T[i][j] = 1;
			} else {
				T[i][j] = T[i - 1][j - 1] + T[i - 1][j];
			}
		}
	}

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			std::cout << T[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int main() {
	int n;
	std::cout << "Nhap so tu nhien N: ";
	std::cin >> n;

	if (n >= 0) {
		std::cout << "Tam giac Pascal su dung to hop:" << std::endl;
		printPascalTriangleCombination(n);

		std::cout << "Tam giac Pascal su dung cong thuc de quy:" << std::endl;
		printPascalTriangleRecursion(n);
	} else {
		std::cout << "Nhap so tu nhien N phai lon hon hoac bang 0." << std::endl;
	}

	return 0;
}

