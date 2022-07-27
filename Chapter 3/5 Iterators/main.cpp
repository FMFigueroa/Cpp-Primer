#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main()
{
   //================  Miembros denominados begin y end  ====================
   // the compiler determines the type of b and e;
   // b denotes the first element and e denotes one past the last element in v
   vector<unsigned> v(10, 0);
   auto b = v.begin(),
        e = v.end(); // b and e have the same type

   // Operaciones de iterador
   string s("some string");
   if (s.begin() != s.end())
   {                       // make sure s is not empty
      auto it = s.begin(); // it denotes the first character in s
      *it = toupper(*it);  // make that character uppercase
   }
   cout << s << endl; // Some string

   // Mover iteradores de un elemento a otro
   for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
      *it = toupper(*it); // capitalize the current character
   cout << s << endl;     // SOME string

   getch();
   return 0;
}