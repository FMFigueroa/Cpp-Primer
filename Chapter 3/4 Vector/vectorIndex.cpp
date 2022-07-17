#include <iostream>
#include <string>
#include <vector>
#include<conio.h>

/*
================================================================================
// count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100
================================================================================
*/


using namespace std;

int main() {

    vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
    unsigned grade;

    cout<<"Ingresa calificaciones:"<<endl;
    while (cin >> grade) { // read the grades
        if(grade <= 100){// handle only valid grades
             ++scores[grade/10]; // increment the counter for the current cluster
        }
    }

    cout<<"el resultado almacenado es: [";
    for(int i=0; i<11; i++){
        cout<<scores[i];
    }
    cout<<"]"<<endl;


   getch();
   return 0;
}