#include <iostream>

const int maxSize = 10;  // Xac dinh kich thuoc toi da cho ma tran

// Ham kiem tra xem mot phan tu (i, j) co thuoc vung lien thong khong
bool isPartOfConnectedComponent(int M, int N, int A[maxSize][maxSize], int visited[maxSize][maxSize], int i, int j) {
	return (i >= 0 && i < M && j >= 0 && j < N && A[i][j] == 1 && visited[i][j] == 0);
}

// Ham dem so vung lien thong trong ma tran
int countConnectedComponents(int M, int N, int A[maxSize][maxSize]) {
	int visited[maxSize][maxSize] = {0};
	int count = 0;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (A[i][j] == 1 && visited[i][j] == 0) {
				count++;  // Tim thay mot vung lien thong moi
				visited[i][j] = 1;  // Danh dau o nay da xem xet

				// Duyett qua cac o lien thong cung vung bang de quy
				int stackX[maxSize * maxSize];
				int stackY[maxSize * maxSize];
				int top = 0;

				stackX[top] = i;
				stackY[top] = j;

				while (top >= 0) {
					int x = stackX[top];
					int y = stackY[top];
					top--;

					// Kiem tra cac o ke canh
					static int row[] = { -1, 1, 0, 0 };
					static int col[] = { 0, 0, -1, 1 };

					for (int k = 0; k < 4; k++) {
						int newX = x + row[k];
						int newY = y + col[k];

						if (isPartOfConnectedComponent(M, N, A, visited, newX, newY)) {
							visited[newX][newY] = 1;  // Danh dau o ke canh da duoc xem xet
							top++;
							stackX[top] = newX;
							stackY[top] = newY;
						}
					}
				}
			}
		}
	}

	return count;
}

int main() {
	int M, N;
	std::cout << "Nhap M va N (M, N <= 10): ";
	std::cin >> M >> N;

	if (M > 0 && M <= 10 && N > 0 && N <= 10) {
		int A[maxSize][maxSize];

		std::cout << "Nhap ma tran A (" << M << "x" << N << "):" << std::endl;

		// Nh?p ma tr?n A
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				std::cin >> A[i][j];
			}
		}

		int connectedComponents = countConnectedComponents(M, N, A);

		std::cout << "So vung lien thong la: " << connectedComponents << std::endl;
	} else {
		std::cout << "M và N phai la so nguyen duong va khong lon hon 10." << std::endl;
	}

	return 0;
}

