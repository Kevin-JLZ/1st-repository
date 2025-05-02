#include <iostream>

using namespace std;

void printMatrix(int** matrix, int height, int width) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << *(*(matrix+i)+j) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void fillMatrix(int** matrix, int height, int width) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cin >> *(*(matrix + i) + j);
        }
    }
    cout << endl;
}

int** createMatrix(int height, int width) {
    int** matrix = new int* [height];
    for (int i = 0; i < height; i++) {
        *(matrix+i) = new int[width];
    }
    return matrix;
}

void deleteMatrix(int** matrix, int height) {
    for (int i = 0; i < height; i++) {
        delete[] matrix[i]; 
    }
    delete[] matrix;
}

void productMatrix(int** C, int** A, int** B, int A_height, int B_width) {
    for (int i = 0; i < A_height; i++) {
        for (int j = 0; j < B_width; j++) {
            int temp = 0;
            for (int k = 0; k < A_height; k++) {
                temp += *(*(A + i) + k) * *(*(B + k) + j);
            }
            *(*(C + i) + j) = temp;
        }
    }
}

int main()
{
    int A_height{0};
    int A_width{0};
    cout << "Type the size of matrix A: " << endl;
    cout << "Height: ";
    cin >> A_height;
    cout << "Width: ";
    cin >> A_width;

    //Reservando espacio
    int** A = createMatrix(A_height, A_width);

    //Llenando valores
    fillMatrix(A, A_height, A_width);

    //Mostrar valores
    printMatrix(A, A_height, A_width);

    int B_height{ 0 };
    int B_width{ 0 };
    cout << "Type the size of matrix B: " << endl;
    cout << "Height: ";
    cin >> B_height;
    cout << "Width: ";
    cin >> B_width;

    //Reservando espacio
    int** B = createMatrix(B_height, B_width);

    //Llenando valores
    fillMatrix(B, B_height, B_width);

    //Mostrar valores
    printMatrix(B, B_height, B_width);


    //Creando nueva matriz
    int** C = createMatrix(A_height, B_width);
    
    //Multiplicando Matrices A y B
    cout << "The product of A and B is:   " << endl;
    productMatrix(C, A, B, A_height, B_width);

    printMatrix(C, A_height, B_width);


    //Liberando memoria
        deleteMatrix(A, A_height);
        deleteMatrix(B, B_height);
        deleteMatrix(C, A_height);

    return 0;
}
