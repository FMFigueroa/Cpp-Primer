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

    // Tratando con types
    /*
        A medida que nuestros programas se vuelven más complicados,
        veremos que los tipos que usamos también se vuelven más complicados.
        Los alias de tipo nos permiten simplificar las definiciones de tipo complicadas,
        haciendo que esos tipos sean más fáciles de usar. 
    */
    //Type Aliases with typedef:
    typedef double wages; // wages is a synonym for double
    typedef wages base, *p; // base is a synonym for double, p for double*
    
    //Nuevo standart
    using SI = Sales_item; // SI is a synonym for Sales_item

    //Un alias de tipo es un nombre de tipo que puede aparecer dondequiera:
    wages hourly, weekly; // same as double hourly, weekly;
    SI item; // same as Sales_item item

    //Pointers, const, and Type Aliases
    typedef char *pstring;
    const pstring cstr = 0; // cstr is a constant pointer to char
    const pstring *ps; // ps is a pointer to a constant pointer to char
    // es incorrecto interpretar una declaración que usa un alias de tipo
    //  y reemplazarlo conceptualmente el alias con su tipo correspondiente:
    const char *cstr = 0; // wrong interpretation of const pstring cstr
    /*
        En este caso, const char es el tipo base. Esta reescritura declara 
        cstr como un puntero a un char constante en lugar de un puntero constante a char.
    */

    //El especificador de tipo automático
    // auto le dice al compilador que deduzca el tipo del inicializador
    //por el tipo de las variables involucrdas en la inicializacion de la variable item.
    //en este caso val1 y val2 el compilador induce el tipo por estas variables, por
    //ello es se debe inicializar la variable cuando la definimos de tipo auto.
    auto item = val1 + val2; // item initialized to the result of val1 + val2

    //para hacer multiples declaraciones con auto debe haber consistencia entre los tipos
    auto i = 0, *p = &i; // ok: i is int and p is a pointer to int
    auto sz = 0, pi = 3.14; // error: inconsistent types for sz and pi

    //Tipos Compuestos, const, and auto
    /*
    El tipo que el compilador infiere para auto no siempre es exactamente 
    el mismo que el tipo del inicializador.
    En particular, cuando usamos una referencia como inicializador, 
    el inicializador es el objeto correspondiente. 
    El compilador usa el tipo de ese objeto para la deducción del tipo de auto:
    */

    int i = 0, &r = i;
    auto a = r; // a is an int (r is an alias for i, which has type int)

    /*
    En segundo lugar, auto normalmente ignora las constantes de nivel superior.
    Como es habitual en las inicializaciones, las constantes de bajo nivel,
     como cuando un inicializador es un puntero a constante, se mantienen:
    */
    const int ci = i, &cr = ci;
    auto b = ci; // b is an int (top-level const in ci is dropped)
    auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
    auto d = &i; // d is an int* (& of an int object is int*)
    auto e = &ci; // e is const int* (& of a const object is low-level const)

    //Si queremos que el tipo deducido tenga una constante de nivel superior,
    // debemos decirlo explícitamente:
    const auto f = ci; // deduced type of ci is int; f has type const int

    //También podemos especificar que queremos una referencia al tipo deducido automáticamente.
    // Las reglas de inicialización normales aún se aplican:
    auto &g = ci; // g is a const int& that is bound to ci
    auto &h = 42; // error: we can’t bind a plain reference to a literal
    const auto &j = 42; // ok: we can bind a const reference to a literal

    //tipos autodeducidos:
    auto k = ci, &l = i; // k is int; l is int&
    auto &m = ci, *p = &ci; // m is a const int&; p is a pointer to const int
    // error: type deduced from i is int; type deduced from &ci is const int
    auto &n = i, *p2 = &ci;

    //El especificador de tipo decltype
    /*
    A veces queremos definir una variable con un tipo 
    que el compilador deduce de una expresión pero 
    no queremos usar esa expresión para inicializar la variable.
    decltype devuelve el tipo de su operando. 
    El compilador analiza la expresión para determinar su tipo 
    pero no evalúa la expresión,  le da a sum el mismo tipo 
    que el tipo que devolvería si llamaramos a f.:
    */
   decltype(f()) sum = x; // sum has whatever type f returns

   //diferencia entre auto y decltype:
   //decltype devuelve el tipo de esa variable, 
   //incluidas las constantes de nivel superior y las referencias:

    const int ci = 0, &cj = ci;
    decltype(ci) x = 0; // x has type const int
    decltype(cj) y = x; // y has type const int& and is bound to x
    decltype(cj) z; // error: z is a reference and must be initialized

    //decltype y referencias
    //decltype devuelve un tipo de referencia para expresiones 
    //que producen objetos que pueden estar en el lado izquierdo de la asignación:

    // decltype of an expression can be a reference type
    int i = 42, *p = &i, &r = i;
    decltype(r + 0) b; // ok: addition yields an int; b is an (uninitialized) int
    decltype(*p) c; // error: c is int& and must be initialized

    // decltype of a parenthesized variable is always a reference
    decltype((i)) d; // error: d is int& and must be initialized
    decltype(i) e; // ok: e is an (uninitialized) int
}

// fin


