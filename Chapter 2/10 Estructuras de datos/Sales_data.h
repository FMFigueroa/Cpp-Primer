//Sales_data es una version de Sales_item
#include <iostream>
#include <string>


struct Sales_data {
std::string bookNo;
unsigned units_sold = 0;
double revenue = 0.0; //Ingresos

}; //El punto y coma es necesario porque podemos definir variables después del cuerpo de la clase.
//Example:
//Sales_data accum, trans, *salesptr;

//Uso de la clase Sales_data