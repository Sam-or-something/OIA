#include <iostream>
using namespace std;

int N, num, cant, cantTotal;

int main(){
    cin >> N;
    int lista[N];

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
        if(cant > cantTotal){
            cantTotal = cant;
            num = lista[i];
        }
    }
    cout << num << " " << cantTotal << endl;
}