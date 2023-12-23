#include <iostream>
#include <fstream>

int main() {
    // Mo file InpMax.txt de doc
    std::ifstream inputFile("InpMax.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Khong the mo file InpMax.txt." << std::endl;
        return 1;
    }

    int N;
    inputFile >> N; // Doc so luong phan tu

    int maxPositive = 0;
    int maxNegative = 0;
    bool hasPositive = false;
    bool hasNegative = false;

    for (int i = 0; i < N; i++) {
        int num;
        inputFile >> num;

        if (num > 0) {
            if (!hasPositive || num > maxPositive) {
                maxPositive = num;
                hasPositive = true;
            }
        } else if (num < 0) {
            if (!hasNegative || num < maxNegative) {
                maxNegative = num;
                hasNegative = true;
            }
        }
    }

    inputFile.close();

    // Mo file OutMax.txt de ghi
    std::ofstream outputFile("OutMax.txt");

    if (!outputFile.is_open()) {
        std::cerr << "Khong the mo file OutMax.txt." << std::endl;
        return 1;
    }

    // Ghi ket qua vao file OutMax.txt
    outputFile << maxNegative << " " << maxPositive << std::endl;

    outputFile.close();

    return 0;
}

