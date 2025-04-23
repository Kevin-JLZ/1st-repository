#include <iostream>

using namespace std;



void printArray(int *ptr, int size)
{
    int i = 0;
    while(i < size)
    {
        cout << *ptr << " ";
        i++;
        ptr++;
    }

}
/**
int main()
{
    ///Punteros

    int arreglo[] = {10, 1, 5, 8, 6, 18};
    int size = sizeof(arreglo)/sizeof(arreglo[0]);
    int *ptr = arreglo;

    printArray(arreglo, size);  ///(&arreglo[0], size)  or (ptr, size)


    return 0;
}
*/

void reverseArray(int *ini, int *fin)
{
    while(ini < fin)
    {
        int temp = *ini;
        *ini = *fin;
        *fin = temp;
        ini++;
        fin--;
    }
}

int main()
{
    ///Punteros

    int arreglo[] = {10, 1, 5, 8, 6, 18};
    int size = sizeof(arreglo)/sizeof(arreglo[0]);
    int *ptr = arreglo;

    /* sin puteros
    for(int i = 0; i < size/2; i++)
    {
        int temp = arreglo[i];
        arreglo[i] = arreglo[size-(i+1)];
        arreglo[size-(i+1)] = temp;
    }
    */

    reverseArray(arreglo, &arreglo[size-1]);

    printArray(arreglo, size);  ///(&arreglo[0], size)  or (ptr, size)


    return 0;
}
