#include <iostream>

using namespace std;

int main()
{
    cout << "Ingrese una cadena" << endl;
    string cadena;
    getline(cin, cadena);

    int len = cadena.length();
    int a{0};

    for(int i = 0; i < len/2; i++)
    {
        if(cadena.at(a) == cadena.at(len-(a+1))){
            a++;
        }
        else{
            i = 20;
        }
    }

    if(i >= 20){
        cout << "No es un palindromo" << endl;
    }
    else{
        cout << "Es un palindromo" << endl;
    }


    return 0;
}
