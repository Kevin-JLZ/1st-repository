#include <iostream>

using namespace std;

int main()
{
    /*
    Suma de 2 numeros tipo char, implementar un programa que solciite por teclado 2 caracteres
    los cuales seran numero tipo char, sino son numeros enviar un mensaje de error, posteriormete
    imprimir la suma de dichos numeros


    cout << "Ingrese el 1er numero" << endl;
    char a;
    cin >> a;

    char b;
    cin >> b;
    if( (a >= 48 && a <= 57)&&(b >= 48 && b <= 57)) {
       cout << "La suma de a + b es: " << endl;

       cout << a << " + " << b << " = " << (a - 48) + (b - 48) << endl;
       }
    else{
        cout << "Error" << endl;
    }

    */



    /*
    string name;
    int age;

    cout << "Type your name: " << endl;
    cin >> name;
    cout << "Type your age: " << endl;
    cin >> age;

    cout << "Hi, " << name << ". How is it going?" << endl;
    cout << "It seems you're " << age << endl;

    for(int i = 0, i < 10, i++){
        if(name[i] != '/0'){
            i++;
        }
        else
    }
    */

    /*
    string cadena = "Ciencia de la computacion";
    cout << cadena.at(0) << endl;
    cout << cadena.at(1) << endl;
    cout << cadena.at(2) << endl;
    cout << cadena.at(3) << endl;
    cout << cadena.at(4) << endl;
    cout << cadena.at(5) << endl;
    cout << cadena.at(6) << endl;
    cout << cadena.at(7) << endl;
    cout << cadena.at(8) << endl;
    cout << cadena.at(9) << endl;
    cout << cadena.at(10) << endl;
    cout << cadena.at(11) << endl;
    cout << cadena.at(12) << endl;
    cout << cadena.at(13) << endl;
    cout << cadena.at(14) << endl;
    cout << cadena.at(15) << endl;
    cout << cadena.at(16) << endl;
    cout << cadena.at(17) << endl;
    cout << cadena.at(18) << endl;
    cout << cadena.at(19) << endl;
    cout << cadena.at(20) << endl;
    cout << cadena.at(21) << endl;
    cout << cadena.at(22) << endl;
    cout << cadena.at(23) << endl;
    cout << cadena.at(24) << endl;
    cout << cadena.at(25) << endl;
    */

    string fullname;
    cout << "Type your full name, please: ";
    cin >> fullname;
    getline(cin, fullname);
    cout << endl;

    cout << "Your full name is: " << fullname << endl;


    return 0;
}
