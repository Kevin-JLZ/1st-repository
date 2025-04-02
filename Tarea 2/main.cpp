#include <iostream>

using namespace std;

int main()
{

    cout << "ingrese una cadena de caracteres: " << endl;
    string cadena;
    getline(cin, cadena);

    cout << "Ingrese la palabra que desee encontrar en la cadena: " << endl;
    char caracter;
    cin >> caracter;

    int len = cadena.length();
    int i{0};

    int contador{0};

    while(i < len)
    {
        if(cadena.at(i) == caracter){
            contador++;
        }
        i++;
    }

    if(contador > 0){
        cout << "El caracter se encontro: " << contador << endl;
    }
    else{
        cout << "No se encontro el caracter en la cadena" << endl;
    }

    return 0;
}
