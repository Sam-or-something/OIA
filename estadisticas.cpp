#include <iostream>
using namespace std;

int N, maximo, minimo, suma;

int main(){
    cin >> N;

    int lista[N];

    for(int i = 0; i < N; i++){
        cin >> lista[i];
    }

    minimo = lista[1];
    
    for(int i = 0; i < N; i++){
        suma += lista[i];
        if(lista[i] > maximo){
            maximo = lista[i];
        }

        if(lista[i] < minimo){
            minimo = lista[i];
        }
    }

    cout << maximo << endl << minimo << endl << suma << endl;
}