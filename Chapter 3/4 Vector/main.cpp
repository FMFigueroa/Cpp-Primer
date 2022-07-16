#include <iostream>
#include <string>
#include <vector>
#include<conio.h>


using namespace std;
using std::vector;

int main() {

    //===========Definiciones de types para vectores:
    //type incorporado:
    vector<int> ivec; // ivec holds objects of type int

    //type perteneciente a una clase:
    //vector<Sales_item> Sales_vec; // holds Sales_items

    //type de un vector existente:
    vector<vector<string>> file; // vector whose elements are vectors  

    //============Declarando un vector a traves de otro vector:
    vector<int> ivec2(ivec); // copy elements of ivec into ivec2.
    //ERROR entre types:
    //vector<string> svec(ivec2); error: svec holds strings, not ints.

    //======= Inicializacion de Vectores Vacios
    vector<int> v1; //v1 is empty | vector that holds objects of type T. Default initialization.
    vector<int> v2(v1); //v2 has a copy of each element in v1.
    vector<int> v3 = v2; //v3 is a copy of the elements in v2.

    //======== Inicializacion de Vectores con valores
    vector<string> v4(3, "name"); //v4 has n elements with value val.
    vector<int> v5(4); //v5 has n copies of a value-initialized object.
    vector<int> v6{1,2,3,4,5}; // v6 has as many elements as there are initializers;
    vector<int> v7 = {1,2,3,4,5}; //Equivalent to V6.
    
    //======== Inicializacion de Vectores con tamaño especifico
    vector<int> ivec3(10); // ten elements, each initialized to 0
    vector<string> svec4(10); // ten elements, each an empty string
    //vector<int> v8 = 10; // error: must use direct initialization to supply a size
    





    getch();
    return 0;
}