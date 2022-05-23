#include <iostream>
#include <vector>
#include <string>
using namespace std;

string pa1, pa2;

int main(){
    cin >> pa1;
    cin >> pa2;
    if (pa1 < pa2){
        cout << "LA PRIMERA" << endl;
    }
    else if (pa1 > pa2){
        cout << "LA SEGUNDA" << endl;
    }
    else{
        cout << "IGUALES" << endl;
    }
}
