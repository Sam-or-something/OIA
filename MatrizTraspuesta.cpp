#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<vector<int>> lista;

int main(){
    cin >> N >> M;

    for(int i = 0; i < N; i ++){
        vector<int> linia;
        for(int i = 0; i < M; i++){
            int nro;
            cin >> nro;
            linia.push_back(nro);
        }
        lista.push_back(linia);
    }

    for(int i = 0; i < M; i ++){
        for(auto linia: lista){
            cout << linia[i] << " ";
        }
        cout << endl;
    }
}