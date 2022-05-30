#include <iostream>
#include <string>
using namespace std;

int N, cantVeces, cant, longitud;
string nmbComun, nmbLargo;

int main(){
    cin >> N;
    string lista[N];
    for(int i = 0; i < N; i++){
        cin >> lista[i];
    }

    for(int i = 0; i < N; i++){
        cant = 0;
        for(int r = 0; r < N; r++){
            if(lista[i] == lista[r]){
                cant++;
            }
        }
        if(lista[i].length() > longitud){
            longitud = lista[i].length();
            nmbLargo = lista[i];
        }
        if(cant > cantVeces){
            cantVeces = cant;
            nmbComun = lista[i];
        }
    }
    cout << nmbLargo << endl << nmbComun << endl;
}