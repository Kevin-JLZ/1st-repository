#include <iostream>

using namespace std;

int main()
{

    cout << "ingrese una cadena de caracteres: " << endl;
    string cadena;
    getline(cin, cadena);

    cout << "Ingrese la palabra que desee encontrar en la cadena: " << endl;
    string palabra;
    cin >> palabra;

    int len = cadena.length();
    int len_palabra = palabra.length();
    cout << len << " y " << len_palabra << endl;

    int a{0};

    int contador{0};

    for(int i = 0; i < len; i++)
    {
        if(cadena.at(i) == palabra.at(0)){
                while(int j = 0; j < len_palabra; j++)
                {
                    if(cadena.at(i+j) == palabra.at(j)){
                        a++;
                        if(a == len_palabra){
                            contador++;
                        }
                    }
                }
                //cout << "j = " << j << endl;
                j = 0;
                a = 0;
                //cout << "comprobacion: " << i << endl;
        }
    }

    if(contador == 1){
        cout << "La palabra se encontro: " << contador << " vez" << endl;
    }
    else if(contador >= 1){
        cout << "La palabra se encontro: " << contador << " veces" << endl;
    }
    else{
        cout << "No se encontro el caracter en la cadena" << endl;
    }

    return 0;
}

