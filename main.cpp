#include <iostream>
using namespace std;

int main() {

    int size;

    //create size for matrix 1 & 2
    cout << "Insert a number for the size of the quadratic matrix:" << endl;
    cin >> size;
    int mat1[size][size];
    int mat2[size][size];

    //create a empty matrix 1
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            mat1[i][j] = 0;
        }
    }

    //create a empty matrix 2
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            mat2[i][j] = 0;
        }
    }

    //input numbers matrix 1
    cout << "Insert numbers to the matrix 1 :" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> mat1[i][j];
        }
    }

    //input numbers matrix 2
    cout << "Insert numbers to the matrix 2 :" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> mat2[i][j];
        }
    }

    //output matrix 1
    cout << "This is matrix 1:" <<endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    //output matrix 2
    cout << "This is matrix 2:" <<endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }

    //create a matrix by adding matrix 1 & matrix 2
    int sumMat[size][size];
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            sumMat[i][j]=mat1[i][j] + mat2[i][j];
        }
    }

    cout << endl;

    //output the adding matrix
    cout << "This is sum matrix:" <<endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << sumMat[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    //create the multiplication matrix
    int multiMat[size][size];
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            multiMat[i][j]=mat1[i][j]*mat2[j][i];
        }
    }

    //output the multiplication matrix
    cout << "This is multiplied matrix:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << multiMat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
