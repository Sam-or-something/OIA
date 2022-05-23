#include <iostream>
#include <vector>
#include <string>
using namespace std;

string nombre;
int lado1, lado2, lado3;

int main(){
    cin >> nombre;
    if(nombre == "cuadrado"){
        cin >> lado1;
        cout << lado1 * lado1 << endl;
    }
    else if(nombre == "rectangulo"){
        cin >> lado1;
        cin >> lado2;
        cout << lado1 * lado2 << endl;
    }
    else if(nombre == "cubo")
    {
        cin >> lado1;
        cout << lado1 * lado1 * 6 << endl;
    }
    else if(nombre == "caja"){
        cin >> lado1;
        cin >> lado2;
        cin >> lado3;
        cout << lado1 * lado2 * 2 + lado1 * lado3 * 2 + lado3 * lado2 * 2;
    }
}
