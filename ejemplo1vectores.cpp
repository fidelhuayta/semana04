#include <iostream>
#include <vector>

using namespace std;


int main()
{
    //crear vector
    vector <int> vec; // =  {1,4,5,3,10,200,21,11,66,67};
    
    //agregamos tamaño al vector con push_back
    vec.push_back(1);
    vec.push_back(4);
    vec.push_back(5);
    
    //tamaño del vector
    cout<<"el tamaño es:" <<vec.size() <<endl;
    
    //usando el operador []
    cout<<"usando el operador []" <<endl;
    for (int i= 0; i<vec.size(); i++)
    {
        cout<<vec[i] <<endl;
    }
    
    
     //usando el operador at
     cout<<"usando el operador at" <<endl;
    for (int i= 0; i<vec.size(); i++)
    {
        cout<<vec.at(i) <<endl;
    }
    
    //quitamos un elemento del vector
    vec.pop_back(); //permite quitar el ultimo lemento
    
    //tamaño del vector
    cout<<"el tamaño es:" <<vec.size() <<endl;
    
    for (auto i: vec)
    {
        cout<<i <<endl;
    }
    return 0;
}