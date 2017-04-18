#include <iostream>
using namespace std;


int main()
{
    //crear el arreglo
    int arreglo[10] = {1,4,5,3,10,200,21,11,66,67};
    //crear la variable max
    int max = arreglo[0];
    int min = arreglo[0];
    
    //recorriamos el arreglo
    for (auto i : arreglo)
    {
        //si la variable max es menor que i, max se convierte en i
        if (max < i)
        max = i;
    }
    //presentar el maximo
    cout<<"el maximo es:" <<max <<endl;
    
    //presentamos el minimo
    for (auto i : arreglo)
    {
        if (min>i)
        {
            min = i;
        }
    }
    
    //presentamos el minimo
    cout<<"el minimo es:" <<min <<endl;
    
    return 0;
    
    
}