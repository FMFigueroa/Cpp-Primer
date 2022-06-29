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

    //Inicialización y Referencias a const

    //(Caso 1) - referencia const inicializada con un objeto const
    const int ci = 1024;
    const int &rci = ci; // ok: tanto la referencia como el objeto subyacente son constantes

    //(Caso 2) - referencia const inicializada con un objeto no-const
    int i = 42;
    const int &r1 = i; // we can bind a const int & to a plain int object
    const int &r2 = 24; // ok: r2 is a reference to const
    const int &r3 = r1 * 2; // ok: r3 is a reference to const

    //(Caso 3) - referencia no-const inicializada con un objeto const
    //no valid
    int r = 24;
    int &r4 = r * 2 ; // error: r4 is a plain, nonconst reference

    // (Caso 4) - Objeto Temporal
    double  dval = 3.14;
    const int temp = dval;
    const int &rdval = temp;

    //(Caso 5) - Modificando un Objeto no const a través  de una referencia (const y no-const)
    int x = 25;
    int &x1 = x ; // x1 bound to x
    const int &x2 = x ; // x2 also bound to x; but cannot be used to change x
    x1 = 0; // r1 is not const; x is now 0
    x2 = 0;  // error: r2 is a reference to const

    //===========================================================================//
    //========================== Punteros y const ===============================//
    //===========================================================================//
    /*
        Al igual que con las referencias, podemos definir punteros que apunten 
        a tipos constantes o no constantes.
        Al igual que una referencia a const, 
        un puntero a const no se puede usar para cambiar el objeto al que apunta el puntero. 
        Podemos almacenar la dirección de un objeto const solo en un puntero a const: 
    */


    //Caso puntero const referenciando Objeto const
    const double pi = 3.14; // pi is const; its value may not be changed
    double *ptr = &pi; // error: ptr is a plain pointer
    const double *cptr = &pi; // ok: cptr may point to a double that is const
    *cptr = 42; // error: cannot assign to *cptr


    //Caso puntero const referenciando con Objeto no-cont
    double dval = 3.14; // dval is a double; its value can be changed
    cptr = &dval; // ok: but can’t change dval through cptr

    // const Pointers (*const name_pointer)
    /*

    A diferencia de las referencias, los punteros son objetos. 
    Por lo tanto, como con cualquier otro tipo de objeto, 
    podemos tener un puntero que sea en sí mismo constante. 
    Como cualquier otro objeto const, un puntero const debe inicializarse y,
    una vez inicializado, su valor (es decir, la dirección que contiene) no puede cambiarse.
    Indicamos que el puntero es const poniendo la const después del *.
    Esta ubicación indica que es el puntero, no el apuntado
    tipo, que es const:

    */  
    int errNumb = 0;
    int *const curErr = &errNumb; // curErr will always point to errNumb
    //podemos usar este puntero para cambiar el valor al que apunta.

    // if the object to which curErr points (i.e., errNumb) is nonzero
    if (*curErr) {
        *curErr = 0; // ok: reset the value of the object to which curErr is bound
    }

    const double pi = 3.14159;
    const double *const pip = &pi; // pip is a const pointer to a const object
    //No podemos usar este puntero para cambiar el valor del objeto al que apunta, 
    //ni la direccion almacenada a la que apunta, en este caso el objeto pi .
    *pip = 2.72; // error: pip is a pointer to const


    //Top Level
    /*
        Tenga en cuenta que los tipos de puntero, a diferencia de la mayoría otros tipos,
        pueden tener constantes de nivel superior y de nivel bajo de forma independiente:
    */

    int i = 0;
    int *const p1 = &i; // we can’t change the value of p1; const is top-level
    const int ci = 42; // we cannot change ci; const is top-level
    const int *p2 = &ci; // we can change p2; const is low-level
    const int *const p3 = p2; // right-most const is top-level, left-most is not
    const int &r = ci; // const in reference types is always low-level

    // Podemos convertir un nonconst a const pero no al revés:
    int *p = p3; // error: p3 has a low-level const but p doesn’t
    p2 = p3; // ok: p2 has the same low-level const qualification as p3
    p2 = &i; // ok: we can convert int* to const int*
    int &r = ci; // error: can’t bind an ordinary int& to a const int object
    const int &r2 = i; // ok: can bind const int& to plain int

    //constexpr y expresiones constantes
    const int max_files = 20; // max_files is a constant expression
    const int limit = max_files + 1; // limit is a constant expression
    int staff_size = 27; // staff_size is not a constant expression
    const int sz = get_size(); // sz is not a constant expression

    //Variables constexpr
    constexpr int mf = 20; // 20 is a constant expression
    constexpr int limit = mf + 1; // mf + 1 is a constant expression
    constexpr int sz = size(); // ok only if size is a constexpr function
    //Podemos usar funciones constexpr en el inicializador de una variable constexpr.

    //Punteros y constexpr
    /*
        Es importante comprender que cuando definimos un puntero en una
        declaración constexpr, el especificador constexpr se aplica al puntero,
        no al tipo al que apunta el puntero:
    */
    const int *p = nullptr; // p is a pointer to a const int
    constexpr int *q = nullptr; // q is a const pointer to int

    /*
        A pesar de las apariencias, los tipos de p y q son bastante diferentes;
        p es un puntero a constante, mientras que q es un puntero constante.
        La diferencia es consecuencia del hecho de que constexpr impone 
        una const de nivel superior en los objetos que define.
        Como cualquier otro puntero constante, un puntero constexpr puede 
        apuntar a un tipo const o nonconst:
    */
   constexpr int *np = nullptr; // np is a constant pointer to int that is null
    int j = 0;
    constexpr int i = 42; // type of i is const int
    // i and j must be defined outside any function
    constexpr const int *p = &i; // p is a constant pointer to the const int i
    constexpr int *p1 = &j; // p1 is a constant pointer to the int j


}   


