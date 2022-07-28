#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main()
{
    // Types
    vector<int>::iterator it; // it can read and write vector<int> elements
    string::iterator it2;     // it2 can read and write characters in a string
    // Const
    vector<int>::const_iterator it3; // it3 can read but not write elements
    string::const_iterator it4;      // it4 can read but not write characters

    //=================================================================
    // iterator or const_iterator:
    vector<int> v;
    const vector<int> cv;
    auto it1 = v.begin();  // it1 has type vector<int>::iterator
    auto it2 = cv.begin(); // it2 has type vector<int>::const_iterator 
    //==================================================================
    // funciones llamadas cbegin y cend always return a const_iterator:
    auto it3 = v.cbegin(); // it3 has type vector<int>::const_iterator
    //==================================================================

    getch();
    return 0;
}