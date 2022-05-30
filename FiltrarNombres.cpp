#include <iostream>
#include <string>
using namespace std;

int N;
string pal;

int main(){
    cin >> N;
    string lista[N];

    for(int i = 0; i < N; i++){
        cin >> lista[i];
    }

    for(int i = 0; i < N; i++){
        pal = lista[i];
        for(int r = 0; r < pal.length(); r++){
            pal[r] = tolower(pal[r]);
        }
        if(pal[0] == pal[pal.length()-1]){
            cout << pal << endl;
        }
    }
}