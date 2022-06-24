#include <iostream>

//Que es un Puntero ?
/*  
    Un puntero es un objeto en la memoria, por lo que, 
    como cualquier objeto, tiene una dirección. Por lo tanto,
    podemos almacenar la dirección de un puntero en otro puntero.
*/

int main () 
{
/* 
    Definimos un puntero a un tipo escribiendo un declarador de la forma "*d",
    donde d es el nombre que se está definiendo. 
    El * debe repetirse para cada variable que apunta:
*/
    int *ip1, *ip2; // both ip1 and ip2 are pointers to int.
    double dp, *dp2; // dp2 is a pointer to double; dp is a double.
 

    /*
        Como las referencias no son objetos, no tienen direcciones, Por lo tanto, no podemos definir un puntero a una referencia.
    */

    double dval;
    double *pd = &dval; // ok: initializer is the address of a double
    double *pd2 = pd; // ok: initializer is a pointer to double

    //Errores Comunes:
    //int *pi = pd; // error: types of pi and pd differ.
    //pi = &dval; // error: assigning the address of a double to a pointer to int.


    //Valor del puntero (Adrress) Estados:
    /* 
        El valor (es decir, la dirección) almacenada en un puntero puede estar en uno de cuatro estados: 
    */
   //==============================================================================
   //================   Using a Pointer to Access an Object  ======================
   //==============================================================================
   //Taking the Address of an Object Direccionando a un objeto con un puntero:
    int ival = 42;
    int *p = &ival; // p holds the address of ival; p is a pointer to ival
    std::cout << *p << std::endl;// * yields the object to which p points; prints 42

    /* 
        Al desreferenciar un puntero, se obtiene el objeto al que apunta el puntero. Podemos asignar a ese objeto asignando al resultado de la desreferencia:
    */
   *p = 0; // * genera el objeto; asignamos un nuevo valor a ival a través de p
    std::cout << *p << ' ' << ival<< std::endl; // prints 0
    //Cuando asignamos a *p, estamos asignando al objeto al que apunta p.

    //Note:
    //Podemos desreferenciar solo un puntero válido que apunta a un objeto.

    //DESREFERENCIA:
    int x = 42;
    int &ref = x;    // & sigue un tipo y es parte de una declaración; r es una referencia de i.
    int *pnt;        // * sigue a un tipo y es parte de una declaración; p es un puntero.
    pnt = &x;        // & se usa en una expresión como la dirección de el operador.
    *pnt = x;        // * se utiliza en una expresión como operador de desreferencia.
    int &ref2 = *pnt;  // & es parte de la declaración; * es el operador de desreferencia.
    std::cout << ref << ' ' << pnt << ' ' << *pnt << ' ' << ref2 << std::endl;

    //==================================================================================//
    //Punteros Nulos:
    int *p1 = nullptr; // equivalent to int *p1 = 0; "Recomendado"
    int *p2 = 0; // directly initializes p2 from the literal constant 0
    // must #include cstdlib
    int *p3 = NULL; // equivalent to int *p3 = 0;


    // Es ilegal asignar una variable int a un puntero, incluso si el valor de la variable resulta ser 0.
    //int zero = 0;
    //pi = zero; // error: cannot assign an int to a pointer

    //==================================================================================//
    //Asignación y punteros
    int i = 42;
    int *pi = 0;      // pi is initialized but addresses no object
    int *pi2 = &i;    // pi2 initialized to hold the address of i
    int *pi3;         // if pi3 is defined inside a block, pi3 is uninitialized
    pi3 = pi2;        // pi3 and pi2 address the same object, e.g., i
    pi2 = 0;          // pi2 now addresses no object

    pi = &ival; // value in pi is changed; pi now points to ival
    *pi = 24; // value in ival is changed; pi is unchanged
    std::cout << ival << std::endl;

    //==================================================================================//
    //Otras operaciones de puntero
    /* 
        Siempre que el puntero tenga un valor válido, podemos usar un puntero en una condición. Sólo
        como cuando usamos un valor aritmético en una condición, si el puntero está 0, entonces la condición es falsa: 
    */
    int ival2 = 1024;
    int *pi10 = 0;        // pi is a valid, null pointer
    int *pi20 = &ival2;   // pi2 is a valid pointer that holds the address of ival
    if (pi10)             // pi has value 0, so condition evaluates as false
        // ...
        ;
    if (pi20) // pi2 points to ival, so it is not 0; the condition evaluates as true
        // ...
        ;
    //Cualquier puntero distinto de cero se evalúa como true.


    //==================================================================================//
    //void* Pointers
    /* 
        El tipo void* es un tipo de puntero especial que puede contener la dirección de cualquier objeto.
        Como cualquier otro puntero, un puntero void* contiene una dirección, pero el tipo de objeto en esa dirección es desconocida: 
    */
    double obj = 3.14, *ptx = &obj; 
    // ok: void* can hold the address value of any data pointer type
    void *pv = &obj;  // obj can be an object of any type           // pv can hold a pointer to any type.
    pv = ptx; // pv can hold a pointer to any type
    std::cout << *ptx << ' ' << pv << std::endl;

    //==================Exercises============================//
    int reg1 = 10, *pr = &reg1;
    std::cout << *pr << std::endl;
    int reg2 = 40;
    *pr = reg2;
    *pr = *pr * *pr;
    std::cout << reg2 << std::endl;

    //Comprender las declaraciones de tipos compuestos
    // i is an int; p is a pointer to int; r is a reference to int
    int s = 1024, *ps = &s, &rs = s;

    //Defining Multiple Variables:

    // Alcance de  * segun su posicion: 
    int* o; // legal but might be misleading

    int* pn, pm; // p1 is a pointer to int; p2 is an int

    //Definiendo  múltiples variables con puntero o tipo de referencia:

    //CASO 1
    int *pn1, *pm1; // both p1 and p2 are pointers to int
    //Este estilo enfatiza que la variable tiene el tipo compuesto indicado.

    //CASO 2
    int* pn2; // p1 is a pointer to int
    int* pm2; // p2 is a pointer to int
    //Este estilo enfatiza que la declaración define un tipo compuesto.


    //Pointers to Pointers
    /*  
        Un puntero es un objeto en la memoria, por lo que, 
        como cualquier objeto, tiene una dirección. Por lo tanto,
        podemos almacenar la dirección de un puntero en otro puntero.

        Indicamos cada nivel de puntero por su propio *. 
        Es decir, escribimos ** para un puntero a un puntero,
        *** para un puntero a un puntero a un puntero, y así sucesivamente:

    */
    int ivar = 1024;
    int *pnr = &ivar; // pi points to an int
    int **ppnr = &pnr; // ppi points to a pointer to an int

    //Example imprimiendo puntero de un puntuero

     std::cout << "The value of ival\n"
    << "direct value: " << ivar << "\n"
    << "indirect value: " << *pnr << "\n"
    << "doubly indirect value: " << **ppnr
    << std::endl;

    /*
        Este programa imprime el valor de ival de tres maneras diferentes: 
        primero, directamente; 
        después, a través del puntero a int en pi; 
        y, por último, eliminando la referencia de ppi dos veces 
        para llegar a el valor subyacente en ival.
    */


    //References to Pointers - Referencias a punteros  usando "*&":
    /* 
        Una referencia no es un objeto. Por lo tanto, 
        es posible que no tengamos un puntero a una referencia.
        Sin embargo, debido a que un puntero es un objeto, 
        podemos definir una referencia a un puntero: 
    */

    int q = 42;
    int *u; // u is a pointer to int
    int *&j = u; // j is a reference to the pointer u
    j = &q; // j refers to a pointer; assigning &q to j makes u point to q
    std::cout << *j << std::endl;
    *j = 0; // dereferencing j yields q, the object to which u points; changes q to 0
    std::cout << q << std::endl;
}


