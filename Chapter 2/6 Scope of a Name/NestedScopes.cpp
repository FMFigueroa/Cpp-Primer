#include <iostream>


// Ámbitos anidados or  Nested Scope

// Program for illustration purposes only: It is bad style for a function
// to use a global variable and also define a local variable with the same name
int reused = 42; // reused has global scope
int main()
{
    int unique = 0; // unique has block scope
    // output #1: uses global reused; prints 42 0
    std::cout << reused << " " << unique << std::endl;
    int reused = 0; // new, local object named reused hides global reused
    // output #2: uses local reused; prints 0 0
    std::cout << reused << " " << unique << std::endl; 
    // output #3: explicitly requests the global reused with uses the scope operator :: ; prints 42 0
    std::cout << ::reused << " " << unique << std::endl;
    return 0;
}
//Casi siempre es una mala idea definir una variable local con el mismo
//nombre de una variable global que la función usa o podría usar.

