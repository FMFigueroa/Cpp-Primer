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
