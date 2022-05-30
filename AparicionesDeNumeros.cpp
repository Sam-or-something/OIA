#include <iostream>
using namespace std;

int N, cant;

int main(){
    cin >> N;
    int sequencia[N];
    for(int i = 0; i < N; i++){
        cin >> sequencia[i];
    }
    for(int r = 1; r <= 10; r++){
        cant = 0;
        for(int i = 0; i < N; i++){
            if(sequencia[i] == r){
            cant++;
            }
        }
        cout << cant << endl;
    }
}