#include <iostream>

using namespace std;

int main()
{
    int numero{0};

    cout << "Ingrese un numero: ";
    cin >> numero;

    int divisor{1};
    int cont{0};


    while(divisor <= numero)
    {
        if(numero % divisor == 0){
            cout << numero << " es divisible por: " << divisor << endl;
            cont++;
        }
        divisor++;
    }

    switch(cont){
        case 0:
            cout << numero << " no es primo ni compuesto" << endl;
            break;
        case 1:
            cout << numero << " no es primo ni compuesto" << endl;
            break;
        case 2:
            cout << numero << " es primo" << endl;
            break;
        default:
            cout << numero << " no es primo" << endl;
    }

    return 0;
}
