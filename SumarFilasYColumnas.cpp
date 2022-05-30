#include <iostream>
#include <vector>
using namespace std;

int filas, columnas, sumaF, sumaC, num;
vector<vector<int>>lista;

int main(){
    cin >> filas >> columnas;
    for(int i = 0; i < filas; i++){
        for(int r = 0; r < columnas; r++){
            cin >> lista[i][r];
        }
    }
    
    for(int i = 0; i < filas; i++){
        sumaF = 0;
        for(int r = 0; r < columnas; r++){
            sumaF += lista[i][r];
        }
        if(i == filas -1){
            cout << sumaF << endl;
        }
        else{
            cout << sumaF << " ";
        }
    }

    for(int i = 0; i < columnas; i++)
    {
        sumaC = 0;
        for(int r = 0; r < filas; r++){
            sumaC += lista[r][i];
        }
        if(i == columnas -1){
            cout << sumaC << endl;
        }
        else{
            cout << sumaC << " ";
        }   
    }
}