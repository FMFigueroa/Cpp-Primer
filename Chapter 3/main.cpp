#include<iostream>

using namespace std;


int main() {

    int i;
    cin >> i; // ok: cin is a synonym for std::cin
    cout << i; // error: no using declaration; we must use the full name
    cout << i; // ok: explicitly use cout from namepsace std

    return 0;
}

