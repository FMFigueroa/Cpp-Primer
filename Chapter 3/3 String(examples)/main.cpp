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


    //Ejemplo 3 (Recorriendo cada caracter de la cadena para cambiar caracteres):
    string txt("Hello World!!!");
    // convert s to uppercase
    for (auto &ref : txt) // for every char in s (note: c is a reference)
        ref = toupper(ref); // c is a reference, so the assignment changes the char in s
    cout << txt << endl;


    //Ejemplo 4 (Accediendo a un caracter especifico con el operador de subindice []):

    if (!str.empty()) // make sure there’s a character in s[0]
    str[0] = toupper(str[5]); // assign a new value to the first character in s
    cout << str << endl; // print the first character in str

    //Ejemplo 5 (Accediendo a un caracter especifico con el operador de subindice [] y ciclo for):
    string txt2("hello world!!!");
    // process characters in s until we run out of characters or we hit a whitespace
    for (decltype(txt2.size()) index = 0; index != txt2.size() && !isspace(txt2[index]); ++index)
        txt2[index] = toupper(txt2[index]); // capitalize the current character
    cout << txt2 << endl;


    //Ejemplo 6 (Usando el subindicie para un random acceso) 
    const string hexdigits = "0123456789ABCDEF"; // possible hex digits
    cout << "Enter a series of numbers between 0 and 15"<< "separated by spaces. Hit ENTER when finished: "<< endl;
    string result; // will hold the resulting hexify’d string
    string::size_type n; // hold numbers from the input
    while (cin >> n)
        if (n < hexdigits.size()) // ignore invalid input
            result += hexdigits[n]; // fetch the indicated hex digit
    cout << "Your hex number is: " << result << endl;



    getch();
    return 0;  
};