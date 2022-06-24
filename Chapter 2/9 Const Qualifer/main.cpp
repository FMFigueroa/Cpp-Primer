#include <iostream>

int main () 
{
    //Modos de Inicializacion de una Constante:
    /*  
        const int i = get_size(); // ok: initialized at run time
        const int j = 42; // ok: initialized at compile time
        const int k; // error: k is uninitialized const 
    */

    //Initialization and const
    /*
        int i = 42;
        const int ci = i; // ok: the value in i is copied into ci
        int j = ci; // ok: the value in ci is copied into j

        Aunque ci es un int constante, el valor en ci es un int. 
        La constante de ci solo importa para las operaciones que pueden cambiar ci.
        Cuando copiamos ci para inicializar j, no nos importa que ci sea una constante.
        Copiar un objeto no cambia ese objeto. Una vez realizada la copia, 
        el nuevo objeto ya no tiene acceso al objeto original.
    */

   //Definiendo el acance de una Const en otro archivo con "extern":

   /*
        // file_1.cc defines and initializes a const that is accessible to other files
            extern const int bufSize = fcn(); //define e inicializa bufSize.
        // file_1.h
        extern const int bufSize; // same bufSize as defined in file_1.cc
   */

    //Referencias a const
   /*
        const int ci = 1024;
        const int &r1 = ci; // ok: tanto la referencia como el objeto subyacente son constantes
        r1 = 42; // error: r1 es una referencia a const
        int &r2 = ci; // error: referencia no constante a un objeto constante
   */

}