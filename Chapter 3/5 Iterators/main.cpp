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

   string s("some string");
   if (s.begin() != s.end())
   {                       // make sure s is not empty
      auto it = s.begin(); // it denotes the first character in s
      *it = toupper(*it);  // make that character uppercase
   }
   cout << s << endl; // Some string
   getch();
   return 0;
}