#include <iostream>
#include <string>
#include <vector>
#include<conio.h>


using namespace std;
using std::vector;

int main() {
    
    //==== Numero de lementos determinados en tiempo de ejecucion:
    /* vector<int> v2; // empty vector
    for (int i = 0; i != 100; ++i){
        v2.push_back(i); // append sequential integers to v2
    // at end of loop v2 has 100 elements, values 0 ... 99
    }; */
    

    //==== Numero de lementos indeterminados en tiempo de ejecucion:
    // read words from the standard input and store them as elements in a vector
    /* string word;
    vector<string> text; // empty vector
    while (cin >> word) {
        text.push_back(word); // append word to text
    } */


    //======== int ===================
/*     int num = 0;
    int cnt = 0;
    vector<int> Vec;

    cout<<"introduzca un numero:"<<endl;
    cout<<"presione 0 para imprimir el vector"<<endl;
    while(1){
        cin >> num;
        Vec.push_back(num);
        cnt++;
        if(num == 0)
        break;
    }
    
    cout<<endl;
    cout<<"El vector es = [";
    for(int i=0; i<cnt; i++){
        cout<<Vec[i]<<",";
    }
    cout<<"]"<<endl; */


    //======== string ================
    string word;
    int cnt = 0;
    vector<string> text;

    cout<<"introduzca una palabra:"<<endl;
    cout<<"escriba exit para imprimir el vector"<<endl;
    while(1){
        cin >> word;
        text.push_back(word);
        cnt++;
        if(word == "exit"){
            cnt--;
            break;
        }    
    }
    
    cout<<endl;
    cout<<"El vector es = [";
    for(int i=0; i<cnt; i++){
        cout<<text[i]<<",";
    }
    cout<<"]"<<endl;
        
    getch();
    return 0;
}