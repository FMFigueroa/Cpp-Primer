#include <iostream>

//Signed
//Automatically Signed Type:

/*
int
short
long
long long

//Unsigned
unsigned int // The type unsigned int may be abbreviated as unsigned.
unsigned short
unsigned long
unsigned long long

*/

//==========================================================================
//When we assign one arithmetic type to another:
/* bool b = 42; // b is true
int i = b; // i has value 1
i = 3.14; // i has value 3
double pi = i; // pi has value 3.0
unsigned char c = -1; // assuming 8-bit chars, c has value 255
signed char c2 = 256; // assuming 8-bit chars, the value of c2 is undefined..out-of-range value */
//==========================================================================

int main () {
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;
    std::cout << sizeof(unsigned) << std::endl;
    std::cout << sizeof(signed) << std::endl; 
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(char) << std::endl;
    return 0;

}