#include <iostream>
#include <array>
#include <string>
#include <conio.h>

using namespace std;

/*
ARRAY:
una matriz es un contenedor de objetos sin nombre
de un solo tipo al que accedemos por posición.
los Arrays tienen un tamaño fijo, Si no sabe exactamente
 cuántos elementos necesita, use un vector.
 Las matrices son de tipo compuesto.
 Un declarador de matriz tiene la forma a[d]; donde a es el nombre de la matriz,
 d es la dimension que especifica el numero de elementos , debe ser mayor que cero.
 el numero de elementos es parte del tipo de la matriz, lo que significa que la dimensión
  debe ser una  expresión constante.
*/

int main()
{
  //================================================================================
  //             Definición e inicialización de arreglos incorporados
  //================================================================================
  unsigned cnt = 42;          // not a constant expression
  constexpr unsigned sz = 42; // constant expression
  int arr[10];                // array of ten ints
  int *parr[sz];              // array of 42 pointers to int
  string bad[cnt];            // error: cnt is not a constant expression
  // string strs[get_size()]; // ok if get_size is constexpr, error otherwise
  //================================================================================

  getch();
  return 0;
}