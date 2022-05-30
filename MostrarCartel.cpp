#include <iostream>
#include <string>
using namespace std;

int cant;
string pal;

int main(){
    cin >> pal;
    cant = pal.length() + 2;
    for(int i = cant; i > 0;i --){
        cout << "*";
    }

    cout << endl << "*" << pal << "*" << endl;

    cant = pal.length() + 2;
    for(int i = cant; i > 0;i --){
        cout << "*";
    }
    cout << endl;
}