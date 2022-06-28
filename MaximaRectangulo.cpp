#include <iostream>
#include <vector>
using namespace std;

int n, m, max;
vector<vector<int>> matriz;

int main(){
cin >> n >> m;

for(int i = 0; i < n; i++){
    vector<int> linea;
    for(int r = 0; r < m; r++){
        int nro;
        cin >> nro;
        linea.push_back(nro);
    }
    matriz.push_back(linea);
}

for(int i = 0; i < n; i++){
    for(int r = 0; r < m; r++){
        for(int i2 = 0; i2 < n; i2++){
            for(int r2 = 0; r2 < m; r2++){
                
            }
        }
    }    
}