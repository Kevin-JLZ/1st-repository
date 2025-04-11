#include <iostream>

using namespace std;


bool eval_prim(int n)
{
    int contador{0};
    for(int i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            contador++;
        }
    }
    if(contador == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool eval_mult(int numero, int primo)
{
    if(numero%primo == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int numero{0};
    cout << "Ingrese un numero: "; cin >> numero;

    for(int primo = 0; primo < 20; )
    {
        if(eval_prim(primo))
        {
            if(eval_mult(numero, primo))
            {
                cout << numero << " es multiplo de: " << primo << endl;
            }
        }
        primo++;
    }



    return 0;
}
