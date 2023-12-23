#include <iostream>

using namespace std;

const int MAX_SIZE = 20;

int main() {
    int M, N;

    // a)
    cout << "Nhap M v� N (M, N <= 20): ";
    cin >> M >> N;

    if (M > MAX_SIZE || N > MAX_SIZE) {
        cout << "M v� N phai nho hon hoac bang 20." << endl;
        return 1; // K?t th�c chuong tr�nh v?i m� l?i
    }

    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE];

    cout << "Nhap ma tran A:" << endl;
 nnnnnnnnmnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> A[i][j];
        }
    }

    // b) D�ng m?ng t?m d? d?o c�c c?t trong ma tr?n A v� luu v�o ma tr?n B
    for (int j = 0; j < N; ++j) {
        int temp[MAX_SIZE];
        for (int i = 0; i < M; ++i) {
            temp[i] = A[i][j];
        }

        for (int i = 0; i < M; ++i) {
            B[i][j] = temp[M - 1 - i];
        }
    }

    // c) In ra ma tr?n B
    cout << "Ma tran B l�:" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0; // K?t th�c chuong tr�nh m� kh�ng c� l?i
}

