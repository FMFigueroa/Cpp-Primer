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

    //Uso adecuado de llaves o parentesis con type int:
    vector<int> v9(10); // v9 has ten elements with value 0.
    vector<int> v10{10}; // v10 has one element with value 10.
    vector<int> v11(10, 1); // v11 has ten elements with value 1.
    vector<int> v12{10, 1}; // v12 has two elements with values 10 and 1.

    //Uso adecuado de llaves o parentesis con type string:
    vector<string> v13{"hi"}; // list initialization: v13 has one element
    //vector<string> v14("hi"); error: can’t construct a vector from a string literal
    vector<string> v15{10}; // v15 has ten default-initialized elements
    vector<string> v16{10, "hi"}; // v16 has ten elements with value "hi"


    getch();
    return 0;
}