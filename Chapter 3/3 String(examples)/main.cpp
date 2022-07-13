#include <iostream>
#include <string>
#include <cctype>
#include<conio.h>

/*
    for (declaration : expression)
        statement
*/

using namespace std;

int main(){


    //Ejemplo 1 (Recorriendo cada caracter de la cadena):
    string str("some string");

    for (auto c : str) // for every char in str
    cout << c << endl; // print the current character followed by a newline


    //Ejemplo 2 (Recorriendo cada caracter de la cadena y lo Comparamos):
    string s("Hello World!!!");

    // punct_cnt has the same type that s.size returns;
    decltype(s.size()) punct_cnt = 0;

    for (auto c : s) // for every char in s
        if (ispunct(c)) // if the character is punctuation
            ++punct_cnt; // increment the punctuation counter

    cout << punct_cnt << " punctuation characters in " << s << endl;


    getch();
    return 0;
};