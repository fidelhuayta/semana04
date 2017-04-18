#include <iostream>
using namespace std;


int main()
{
  int arreglo[10] = {1,4,5,3,10,200,21,11,66,67};
  
  
  //variable de totales
  int total = 0;
  
  //bucle para sumar  
    for (auto i : arreglo) {
     total = total + i;   
    }
    
    //muestro el total
    cout<<"el total es:" <<total <<endl;
    
    return 0;
    
    
}