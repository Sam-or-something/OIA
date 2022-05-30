#include <iostream>
using namespace std;

int N, cant;

int main(){
    cin >> N;
    int lista[N];
    for(int i = 0; i < N; i++){
        cin >> lista[i];
    }

    for(int i = 0; i < N; i++){
        for(int i2 = 0; i2 < N; i2++){
            if(i != i2){
                for(int i3 = 0; i3 < N; i3++){
                    if(i2 != i3 && i != i3){
                        if(lista[i] + lista[i2] > lista[i3] && lista[i] + lista[i3] > lista[i2] && lista[i2] + lista[i3] > lista[i]){
                            cant++;
                        }
                    }
                }
            }
        }
    }

    cout << cant / 6 << endl;
}