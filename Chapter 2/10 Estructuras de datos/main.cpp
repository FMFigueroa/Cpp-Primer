//En C++ definimos nuestros propios tipos de datos definiendo una clase.
// Los tipos de biblioteca string, istream y ostream están todos definidos como clases.

//Sales_data es una version de Sales_item
#include <iostream>


struct Sales_data {
std::string bookNo;
unsigned units_sold = 0;
double revenue = 0.0;
}; //El punto y coma es necesario porque podemos definir variables después del cuerpo de la clase.
//Example:
Sales_data accum, trans, *salesptr;

