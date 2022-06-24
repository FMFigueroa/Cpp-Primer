#include <iostream>


//Scope of a Name
int main()
{
    int sum = 0; //sum is a local variable
    // sum values from 1 through 10 inclusive
    for (int val = 1; val <= 10; ++val)
    {
         sum += val; // equivalent to sum = sum + val
    }
       
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}

/*
    Este programa define tres nombres (main, sum y val) y utiliza el namespace std, junto con dos nombres de este namespace cout y endl.
    El nombre main se define fuera de las llaves. El nombre main, como la mayoría de nombres definidos fuera de una función—tiene alcance global. Una vez declarados, los nombres en el alcance global son accesibles a lo largo del programa. El nombre sum se define dentro del alcance del bloque que es el cuerpo de la función main. es accesible desde su punto de declaración a lo largo del resto de la función main pero no fuera de ella. La variable sum tiene ámbito de bloque. El nombre val se define en el alcance de la sentencia for. Se puede usar en esa declaración, pero no en ninguna otra parte de main.

*/

/*
    CONSEJO: DEFINE LAS VARIABLES DONDE LAS UTILIZAS POR PRIMERA VEZ
    Por lo general, es una buena idea definir un objeto cerca del punto en el que el objeto se encuentra por primera vez usado.
    Si lo hace, mejora la legibilidad al facilitar la búsqueda de la definición de la variable. 
    Más importante aún, a menudo es más fácil dar a la variable un valor inicial útil cuando la variable se define cerca de donde se usa por primera vez.
*/