#include <iostream>
#include <fstream>

int main() {
    // Mo file InpSortRow.txt de doc
    std::ifstream inputFile("InpSortRow.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Khong the mo file InpSortRow.txt." << std::endl;
        return 1;
    }

    int M, N;
    inputFile >> M >> N; // Doc kich thuoc ma tran

    // Doc ma tran tu file va luu vao mang
    if (2 <= M && M <= 1000 && 2 <= N && N <= 1000) {
        int matrix[10][10]; // Chung ta gia su kich thuoc toi da là 10x10

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                inputFile >> matrix[i][j];
            }
        }

        inputFile.close();

        // Sap xep cac hang theo thu tu giam dan
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N - 1; j++) {
                for (int k = j + 1; k < N; k++) {
                    if (matrix[i][j] < matrix[i][k]) {
                        int temp = matrix[i][j];
                        matrix[i][j] = matrix[i][k];
                        matrix[i][k] = temp;
                    }
                }
            }
        }

        // Mo file OutSortRow.txt de ghi
        std::ofstream outputFile("OutSortRow.txt");

        if (!outputFile.is_open()) {
            std::cerr << "Khong the mo file OutSortRow.txt." << std::endl;
            return 1;
        }

        // Ghi ma tran da sap xep vao file OutSortRow.txt
        outputFile << M << " " << N << "\n";

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                outputFile << matrix[i][j] << " ";
            }
            outputFile << "\n";
        }

        outputFile.close();

        return 0;
    } else {
        std::cerr << "M va N khong nam trong khoang cho phep." << std::endl;
        return 1;
    }
}

