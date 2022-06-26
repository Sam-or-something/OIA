#include <iostream>
#include <vector>
using namespace std;

int filas, columnas, suma, num;
vector<vector<int>>lista;

int main(){
    cin >> filas >> columnas;
    for(int i = 0; i < filas; i++){
        vector<int> linia;
        for(int r = 0; r < columnas; r++){
            int nro;
            cin >> nro;
            linia.push_back(nro);
        }
        lista.push_back(linia);
    }
    
    for(auto linia : lista){
        suma = 0;
        for(auto nro : linia){
            suma += nro;
        }
        cout << suma << " ";
    }
    
    cout << endl;

    for(int i = 0; i < columnas; i ++)
    {
        suma = 0;
        for(auto linia : lista){
            suma += linia[i];
        }
        cout << suma << " ";
    }
}