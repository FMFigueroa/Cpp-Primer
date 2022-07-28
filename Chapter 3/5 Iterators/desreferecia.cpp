#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;
// Combinación de desreferencia y acceso de miembros

int main()
{
    // El () desreferencia el iterador y obtiene el objeto como tal y el * aplica al objeto obtenido
    //(*it).empty()
    vector<string> text{"Desreferencia con ()"};
    // print each line in text up to the first blank line
    for (auto it = text.cbegin(); it != text.cend() && !(*it).empty(); ++it)
        cout << *it << endl;

    // it->empty()
    vector<string> text2{"Desreferencia con Operador flecha"};
    // print each line in text up to the first blank line
    for (auto it1 = text2.cbegin(); it1 != text2.cend() && !it1->empty(); ++it1)
        cout << *it1 << endl;

    /*
    Vale la pena señalar que debido a que el ciclo lee pero no escribe en los elementos del texto,
    usamos cbegin y cend para controlar la iteración.

    //Note begin() and end() we use it to control the iteration, when we must read and write.
    //Note cbegin() and cend() we use it to control the iteration, when we only have to read.
    */

    getch();
    return 0;
}