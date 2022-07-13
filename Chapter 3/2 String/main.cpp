//Diferentes manera de inicializar un String

/*

    #include <string>

    using std::string;

    int main () 
    {
        string s1; // default initialization; s1 is the empty string
        string s2 = s1; // s2 is a copy of s1
        string s3 = "hiya"; // s3 is a copy of the string literal
        string s4(10, ’c’); // s4 is cccccccccc
    }
    
*/
/*
#include <iostream>
#include <string>

using namespace std;

// Note: #include and using declarations must be added to compile this code
int main()
{

//example Hello World!  ==> s1 = Hello y s2 = world!
string s1, s2; // empty string
cin >> s1 >> s2; // read a whitespace-separated string into s
cout << s1 << " " << s2 << endl; // write s to the output

system("pause");
return 0;

}
*/

//Lectura de un número desconocido de cadenas

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //string word;
    //while (cin >> word)      // read until end-of-file.
    //cout << word << endl;    // write each word followed by a new line.

string line;
// read input a line at a time until end-of-file
while (getline(cin, line)){
    if (!line.empty()){
        cout << line << endl;
        system("pause");
    }else{
         //La cadena vacía
        cout<<"La cadena esta vacia"<<endl;
    }
}

return 0;

}

// Comparando cadenas (==, !=, <, <=, >, >=)
/*
    string str = "Hello";
    string phrase = "Hello World";
    string slang = "Hiya";

    Usando la regla 1, vemos que str es menor que phrase. 
    Aplicando la regla 2, vemos que slang es mayor que str y phrase.
*/

//- ====== Asignación de cadenas ====== -//
//En el caso de las cadenas, podemos asignar un objeto de cadena a otro:
//string st1(10, ’c’), st2; // st1 is cccccccccc; st2 is an empty string
//st1 = st2; // assignment: replace contents of st1 with a copy of st2
// both st1 and st2 are now the empty string

//- ===== Agregar dos cadenas ====== -//
/*
    string s1 = "hello, ", s2 = "world\n";
    string s3 = s1 + s2; // s3 is hello, world\n
    s1 += s2; // equivalent to s1 = s1 + s2
*/

//- ===== Adición de literales y cadenas =====//c
/*La biblioteca de cadenas nos permite convertir, 
literales de caracteres y literales de cadenas de caracteres en cadenas */
/*
    string s1 = "hello", s2 = "world"; // no punctuation in s1 or s2
    string s3 = s1 + ", " + s2 + ’\n’;
*/

/*
    Cuando mezclamos string y  literales (cadena de caracteres o  caracteres),
    al menos un operando para cada operador + debe ser de tipo string:
*/

/*
    string s4 = s1 + ", "; // ok: adding a string and a literal
    string s5 = ("hello" + ", "); // error: no string operand
    string s6 = s1 + ", " + "world"; // ok: each + has a string operand
    string s7 = ("hello" + ", ") + s2; // error: can’t add string literals
*/

/*
    //Note:
     Por razones históricas y por compatibilidad con C,
     los literales de cadena no son cadenas de biblioteca estándar.
     Es importante recordar que estos tipos difieren 
     cuando usa cadenas literales y cadenas de biblioteca.
*/