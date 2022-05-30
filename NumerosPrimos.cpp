#include <iostream>
using namespace std;

int N, primo;

int main(){
    cin >> N;

    for(int i = 2; i <= N; i++){
        primo = 0;
        for(int r = 1; r < i; r++){
            if(i % r == 0){
                primo++;
            }
        }
        if(primo < 2){
            cout << i << endl;
        }
    }
}