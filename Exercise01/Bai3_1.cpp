#include <iostream>

const int maxSize = 10;  // Xac dinh kich thuoc toi da cho ma tran

int main() {
	int M, N;
	std::cout << "Nhap M va N (M, N <= 10): ";
	std::cin >> M >> N;

	if (M > 0 && M <= 10 && N > 0 && N <= 10) {
		int A[10][10];
		int B[10][10];

		std::cout << "Nhap ma tran A (" << M << "x" << N << "):" << std::endl;

		// Nhap ma tran A
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				std::cin >> A[i][j];
			}
		}

		// Sao chep du lieu tu ma tran A sang ma tran B theo thu tu nguoc lai
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				B[i][j] = A[M - i - 1][N - j - 1];
			}
		}

		std::cout << "Ma tran B la:" << std::endl;

		// Xuat ma tran B
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				std::cout << B[i][j] << " ";
			}
			std::cout << std::endl;
		}
	} else {
		std::cout << "M va N phai la so nguyen duong va khong lon hon 10." << std::endl;
	}

	return 0;
}

