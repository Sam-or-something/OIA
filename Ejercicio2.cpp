#include <iostream>
#include <string>
using namespace std;

string pa;
int pos;

int main(){
    cin >> pa;
    cin >> pos;
    pa[pos - 1] = 'x';
    cout << pa << endl;
}
