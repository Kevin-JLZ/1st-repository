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
    if(primo%numero == 0)
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
    cout << "Ingrese un numero: " << endl;
    cin >> numero;

    for(int primo = 0; primo < 20; )
    {
        bool comp_prim = eval_prim(primo);
        if(comp_prim == true)
        {
            bool comp_mult = eval_mult(numero, primo);
            if(comp_mult == true)
            {
                cout << numero << " es multiplo de: " << primo << endl;
            }
            primo++;
        }
    }



    return 0;
}
