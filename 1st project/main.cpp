#include <iostream>
#include <array>
#include <vector>

using namespace std;


void imp_arr(int arr[], int size);
/*
int main()
{
    //Implemente un programa que invierta los elementos de un arreglo de enteros,

    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    imp_arr(arr, size);

    int ini = 0;
    int fin = size-1;

    while(ini < fin){
        int temp = arr[ini];
        arr[ini] = arr[fin];
        arr[fin] = temp;
        ini++;
        fin--;
    }

    imp_arr(arr, size);

    return 0;
}
*/

/*
void bubblesort(int arr[], int size)
{
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size-i-1; j ++){ //size-1 tambien funciona
            if(arr[j] > arr[j+1]){
                int max = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = max;
            }
        }
    }
}


int main()
{
    //Ordenar un array
    int arr[] = {5, 3, 2, 8, 7, 1, 4, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    imp_arr(arr, size);

    bubblesort(arr, size);

    imp_arr(arr, size);


    return 0;
}


void imp_arr(int arr[], int size)
{
    cout << "[";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
    return;
}

*/

void printArray(array<int, 5>)
{
    cout << "[";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
    return;
}
int main()
{
    array<int, 5> arra = {1, 2, 3, 4, 5};
    imp_arr(arra);

    return 0;
}



