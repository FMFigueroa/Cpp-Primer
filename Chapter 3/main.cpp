//NameSpace using Declarations

/*
#include<iostream>

using std::cin;

int main() {

    int i;
    cin >> i; // ok: cin is a synonym for std::cin.
    std::cout << i; // error: no using declaration; we must use the full name.
    std::cout << i; // ok: explicitly use cout from namepsace std.

    return 0;
}
*/

/*
#include <iostream>


// using declarations for names from the standard library
using std::cin;
using std::cout; using std::endl;


int main()
{

int v1, v2;

cout << "Enter two numbers: " << endl;
cin >> v1 >> v2;
cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;

return 0;

}
*/

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
while (getline(cin, line))
cout << line << endl;
system("pause");
return 0;

}

