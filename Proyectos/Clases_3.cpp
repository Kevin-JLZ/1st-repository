#include <iostream>
#include "cPersona.h"
#include "cLista_Personas.h"
int main()
{
    cPersona p1("Kevin", "Larico", "Zea", 122, 'H', "31/10/2005");
    p1.Print();
    cPersona p2("Juan", "ASFA", "ANA", 12131, 'H', "12/04/1999");
    cPersona p3("Felipe", "LASA", "AMPM", 9813, 'H', "09/12/2015");
    cPersona arr[3];
    arr[0] = p1;
    arr[1] = p2;
    arr[2] = p3;
    cLista_Personas lista(arr, 3);
   
    lista.Print();
    
    return 0;
}

