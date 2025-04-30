#include <iostream>

using namespace std;

void printArray(int height, int width, int **matriz)
{
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            cout << *(*(matriz+j)+i) << " ";
        }
        cout << endl;
    }
}

int main()
{
    //Variables
    int A_height{0};
    int A_width{0};
    cout << "Type the size of matriz A: " << endl;
    cout << "Height: ";
    cin >> A_height;
    cout << "Width: ";
    cin >> A_width;
    int A[A_height][A_width];
    for(int i = 0; i < A_height; i++){
        for(int j = 0; j < A_width; j++){
            cin >> *(*(A+j)+i);
        }
    }
    for(int i = 0; i < A_height; i++){
        for(int j = 0; j < A_width; j++){
            cout << *(*(A+j)+i) << " ";
        }
        cout << endl;
    }
    printArray(A_height, A_width, A)




/*
    int B_height{0};
    int B_width{0};
    cout << "Type the size of matriz B: " << endl;
    cout << "Height: ";
    cin >> B_height;
    cout << "Width: ";
    cin >> B_width;
    int B[B_height][B_width];
    for(int i = 0; i < B_height; i++){
        for(int j = 0; j < B_width; j++){
            cin >> B[i][j];
        }
    }
*/

    return 0;
}
