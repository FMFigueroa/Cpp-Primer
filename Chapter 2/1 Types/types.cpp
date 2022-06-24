#include <iostream>

/*
 Primitive Arithmetic types
*/

/*
bool            //boolean NA
char            //character 8 bits
wchar_t          //wide character 16 bits
char16_t         //Unicode character 16 bits
char32_t         //Unicode character 32 bits
short            //short integer 16 bits
int              //integer 16 bits
long             //long integer 32 bits
long long        //long integer 64 bits
float            //single-precision floating-point 7 significant digits (32bits)
double           //double-precision floating-point 15 significant digits (64bits)
long double       //extended-precision floating-point between 15 and 18 digits significant or 33 for 128bit (96 or 128 bits)
*/

int main()
{
    std::cout << sizeof(float) << std::endl;       //4 bytes
    std::cout << sizeof(double) << std::endl;      //double is 8 bytes
    std::cout << sizeof(long double) << std::endl; // some compilers print 16
    return 0;
}