#include <iostream>
#include <string>
using namespace std;

string pal;

int main(){

    for(int i = pal.length() - 1; i >= 0; i--){
        cout << pal[i];
    }
    cout << endl;
}