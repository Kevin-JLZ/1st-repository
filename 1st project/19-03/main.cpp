#include <iostream>

using namespace std;

int main()
{
   /*
    short num3 = 32767;
    int num4 = 10;
    long num5 = 10;
    long long num6 = 10;

    cout << "El tamaño de la variable tipo short es : " << sizeof(num3) << endl;
    cout << "El tamaño de la variable tipo int es : " << sizeof(num4) << endl;
    cout << "El tamaño de la variable tipo long es : " << sizeof(num5) << endl;
    cout << "El tamaño de la variable tipo long es : " << sizeof(num6) << endl;

    num3 += 1;
    cout << num3 << endl;
    num3 += 1;
    cout << num3 << endl;
    num3 += 1;
    cout << num3 << endl;
    num3 += 1;
    cout << num3 << endl;
    */

    char val = 'A';
    int valNum = static_cast<int>(val);
    cout << val << " su valor numerico es: " << valNum << endl;

    int num = 66;
    char letra = static_cast<char>(num);
    cout << letra << endl;
    return 0;
}
