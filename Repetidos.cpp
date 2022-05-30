#include <iostream>
using namespace std;

int lista[100], num, rep;

int main (){
    for(int i = 0; i < 100 ; i++){
        cin >> num;
        if(num == 0){
            i += 100;
        }

        lista[i] = num;
    }

    for(int i = 0; i < 100; i++){
        if(lista[i] == 0){
            i += 100;
        }
        for(int r = 0; r < 100; r++){
            if(lista[r] == 0 || r == i){
                r += 100;
            }
            else if(lista[r] == lista[i]){
                rep += 1;
                cout << "Hay repetidos" << endl;
                r += 100;
                i += 100;
            }
        }
    }
    if(rep == 0){
        cout << "No hay repetidos" << endl;
    }
}