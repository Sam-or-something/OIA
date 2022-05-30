#include <iostream>
using namespace std;

int N, cant, primo, num;

int main(){
    cin >> N;
    int lista[N];
    
    for(int i = 0; i < N; i++){
        cin >> lista[i];
    }

    for(int i = 0; i < N; i++){
        for(int r = 0; r < N; r++){
          primo = 0;
            num = lista[i] + lista[r];
            for(int s = 1; s < num; s++){
                if(num % s == 0){
                    primo++;
                }
            }
            if(primo < 2){
                cant++;
            }
        }
    }
    cout << endl << cant / 2 << endl;
}