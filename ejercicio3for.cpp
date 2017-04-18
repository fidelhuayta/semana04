#include <iostream>
using namespace std;


int main()
{
   
   //creacion de variable
   int n = 0;
   
   //ingreso de dato
   cout<<"ingrese el numero de datos" <<endl;
   cin>> n;
   
   //variable de  total
   int total = 0;
   
   //for antiguo
       for (int i = 1; i<=n; i+=2)
       {
           total = total + i;
       }
         
    cout<<"la suma es:" <<total <<endl;
    return 0;
    
    
}