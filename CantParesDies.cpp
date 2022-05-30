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
        for(int r = 0; r < N; r++){
            if(r != i && (lista[r] + lista[i]) % 10 == 0){
                cant++;
            }
        }
    }
    cant /= 2;
    cout << cant << endl;
}