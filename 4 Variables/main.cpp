#include <iostream>

#include "Sales_item.h" //import Sales_item class


int sum = 0, value, units_sold = 0; 
// sum, value, and units_sold have type int.
//sum and units_sold have initial value 0.

Sales_item item; // item has type Sales_item, pertaining to the Sales_item class. 


/// string is a library type, representing a variable-length sequence of characters
std::string book("0-201-78345-X"); // book initialized from string literal

// =========== Initialization of Variables ======================

double price = 109.99, discount = price * 0.16;

//Difrentes manera de inicializar una variable aunque sea un tipo de dato primitivo, su valor cero tiene diferentes propiedades.
int units_sold = 0; // units_sold has initial value 0.
int units_sold = {0}; // initial value of a List.
int units_sold{0}; // 
int units_sold(0);


/*
Note:
  Cuando se usa con variables de tipo incorporado, esta forma de inicialización tiene una
 propiedad importante: el compilador no nos permitirá enumerar las variables de inicialización
 escritas si el inicializador puede conducir a la pérdida de información:
 */
//Exameple:
long double ld = 3.1415926536;
int  a{ld}, b = {ld};  // error: narrowing conversion required
int  c(ld), d = ld;    // ok: but value will be truncated


//Variable Declarations and Definitions (separate compilation):

// extern: external variable
extern int i; // declares but does not define i, is defined in other file.
int j; // declares and defines j.
int k = 0; // declaration, initialization and definition.


// ===== Verificación de Tipos:  =====
/* C ++ es un lenguaje de tipo estático, 
lo que significa que los tipos se verifican 
en el tiempo de  compilación. */