#include <iostream>
using namespace std;

class Matrix2D {
    int mat[2][2];

public:
    void getData() {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> mat[i][j];
    }

    void showData() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }

    friend Matrix2D operator*(Matrix2D x, Matrix2D y);
};

Matrix2D operator*(Matrix2D x, Matrix2D y) {
    Matrix2D res;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            res.mat[i][j] = 0;
            for (int k = 0; k < 2; k++)
                res.mat[i][j] += x.mat[i][k] * y.mat[k][j];
        }
    }
    return res;
}

int main() {
    Matrix2D m1, m2, m3;

    m1.getData();
    m2.getData();

    m3 = m1 * m2;

    cout << "Result Matrix:" << endl;
    m3.showData();

    cout << "daivik 1024150089" << endl;

    return 0;
}
