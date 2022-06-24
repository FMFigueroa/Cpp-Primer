#include <iostream>

// Para hacer un Referecnia a objeto existente lo 
//hacemos con "&" seguido del nombre de la referncia.

int main()
{
    int ival = 1024;
    int &refVal = ival; // refVal refers to (is another name for) ival
    //int &refVal2; // error: a reference must be initialized.
    //========================================================================//
    //Debido a que las referencias no son objetos, no podemos definir una referencia a una referencia.
    //int &refVal2 = &refVal;
    //error:initial value of reference to non-const must be an lvalue reference.

/* 
    Después de que se ha definido una referencia, todas las operaciones 
    en esa referencia son realmente operaciones en el objeto al que está
    vinculada la referencia:
*/
    //Una referencia es un alias no son un Objeto.
    refVal = 2; // assigns 2 to the object to which refVal refers, i.e., to ival
    int ii = refVal; // same as ii = ival
    std::cout << ii << " " << ival << std::endl;

    //Ejemplos de Definiciones de referencia:
    int i = 1024, i2 = 2048; // i and i2 are both integer Objects
    int &r = i, r2 = i2; // r is a reference bound to i; r2 is an int
    int i3 = 512, &ri = i3; // i3 is an int; ri is a reference bound to i3
    int &r3 = i3, &r4 = i2; // both r3 and r4 are references
    std::cout << r << " " << r2 << " " << ri << " " << r3 << " " << r4 << std::endl;


    //================== EXERCISES SECTION ==========================
    /*
        Exercise 2.15: ¿Cuáles de las siguientes definiciones, si las hay, no son válidas? Por qué?
        (a) int ival = 1.01; (b) int &rval1 = 1.01;
        (c) int &rval2 = ival; (d) int &rval3;
        Exercise 2.16:¿Cuáles, si alguna, de las siguientes asignaciones no son válidas? Si ellas son válidaa, explique lo que hacen. 
        int i = 0, &r1 = i; double d = 0, &r2 = d;
        (a) r2 = 3.14159; (b) r2 = r1;
        (c) i = r2; (d) r1 = d;
        Exercise 2.17: ¿Qué imprime el siguiente código?
        int a, &ra = a;
        a = 5; ra = 10;
        std::cout << a << " " << ra<< std::endl;
    */
        int a, &ra = a;
        a = 5; ra = 10;
        std::cout << a << " " << ra<< std::endl;

}