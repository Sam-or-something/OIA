#include <iostream>
using namespace std;

int N, suma;

int main(){
    cin >> N;
    
    for(int i = 2; i <= N; i++){
        suma = 1;
        for(int r = 2; r < i; r++){
            if(i % r == 0){
                suma += r;
              }
        }
        if(suma == i){
            cout << suma << endl;
        }
    }
}