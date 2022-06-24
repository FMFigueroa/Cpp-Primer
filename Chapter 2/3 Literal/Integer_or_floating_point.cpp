#include <iostream>
//Literal

//example of literal Integer by base:
int decimal = 20;          //decimal 
unsigned int octal = 024;   //octal
long hexa = 0x14;          //hexadecimal
int bynary = 0b10100;      //binary

//==============================================
//=====   Integer Literal Types   ======:
//==============================================

// decimal (by default signed):
int,
long, 
long long,

// octal & hexadecimal:
int,
unsigned int,
long,
unsigned long,
long long,
unsigned long long,

//Note: There are no literals of type short.
//==============================================

/* Although integer literals may be stored in signed types, 
   technically speaking, the value of a decimal literal is
   never a negative number. 
   The minus sign is an operator that negates the value of 
   its (literal) operand.
*/

//==============================================
//=====  Floating-Point Literal Types   ======:
//==============================================

//By default, floating-point literals have type double.

/* Floating-point literals include either a decimal point 
   or an exponent specified using scientific notation 
*/

3.14159 
3.14159E0 
0. 
0e0 
.001


//================================================
//==== Character and Character String Literals ====
//================================================

'a' //single quotes character literal
"Hello world!" // double quotation marks is a string literal

/*  
    Note:
    The type of a string literal is array of constant chars,
    The compiler appends a null character (’\0’) to every string literal,
    the actual size of a string literal is one more than its apparent size.
*/

// Multiline string literal
int main () 
{
/*
    Two string literals that appear adjacent to one another and that are separated
    only by spaces, tabs, or newlines are concatenated into a single literal. We use this
    form of literal when we need to write a literal that would otherwise be too large to
    fit comfortably on a single line:
*/
    std::cout <<  "a really, really long string literal "
                  "that spans two lines" << std::endl;

    std::cout << '\n'; // prints a newline
    std::cout << "\tHi!\n"; // prints a tab followd by "Hi!" and a newline
    return 0;
}

// Escape Sequences

int EscapeSequences()
{
    std::cout << "Hello\tWorld!\n";    // horizontal tab \t
    std::cout << "Hello\nWorld!\n";    // newline \n 
    std::cout << "Hello\bWorld!\n";    // backspace \b
    std::cout << "Hello\rWorld!\n";    // carriage return \r
    std::cout << "Hello\aWorld!\n";    // alert(bell) \a
    std::cout << "Hello\fWorld!\n";    // formfeed \f
    std::cout << "Hello\vWorld!\n";    // vertical tab \v
    std::cout << "Hello\?World!\n";    // question mark \? 
    std::cout << "Hello\World!\n";     // 
    std::cout << "Hello\x7FWorld!\n";  // 
    std::cout << "Hello\xFFWorld!\n";  // 
    std::cout << "Hello\xFFFWorld!\n"; // 

}

// Generalized Escape Sequence  (\x)

\xHH // hexadecimal one or two digits
\x771 // octal 3 digits

//the Latin-1 character set
\7 (bell)      \12 (newline)    \40 (blank)
\0 (null)      \115 (’M’)        \x4d (’M’)

/* 
    Al igual que con una secuencia de escape definida por el lenguaje,
    usamos estas secuencias de escape como lo haríamos con cualquier otro carácter:
    
 */
std::cout << "Hi \x4dO\115!\n"; // prints Hi MOM! followed by a newline.
std::cout << ’\115’ << ’\n’; // prints M followed by a newline.


// ==== Specifying the Type of a Literal ====
//We can independently specify the signedness and size of an literal
L'a' // wide character literal, type is wchar_t
u8"hi!" // utf-8 string literal (utf-8 encodes a Unicode character in 8 bits)
42ULL // unsigned integer literal, type is unsigned long long
1E-3F // single-precision floating-point literal, type is float
3.14159L // extended-precision floating-point literal, type is long double

//=====  Specifying the Type of a Literal  =======

//==== Character and Character String Literals ====
//Prefix             Meaning                Type
//  u           Unicode 16 character        chart16_t
//  U           Unicode 32 character        chart32_t
//  L             wide character            wchar_t
//  u8       utf-8 (string literals only)    char8_t

// ====  Integer Literals ====== Floating-Point Literals  =====
//     Suffix    Minimum Type           Suffix      Type
//     u or U    unsigned               f or F      float
//     l or L    long                   l or L      long double
//     ll or LL  long long              ll or LL    long long
//==============================================================


// ====  Boolean and Pointer Literals ====

//The words true and false are literals of type bool:
bool test = false;

// ==== pointer literal ====
nullptr // pointer literal, type is pointer to void
// The word nullptr is a pointer literal, We’ll have more to say about pointers and nullptr later.