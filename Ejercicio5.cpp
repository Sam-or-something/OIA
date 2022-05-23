#include <iostream>
#include <vector>
using namespace std;

int ano;

int main(){
    cin >> ano;
    if (ano % 100 == 0){
        if (ano % 4 == 0){
            cout << "SI" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else if (ano % 4 == 0){
        cout << "SI" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
