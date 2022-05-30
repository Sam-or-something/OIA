#include <iostream>
#include <string>
using namespace std;

int a, b, c, d, dif;

int main(){
    cin >> a >> b >> c >> d;
    dif = (a+d) - (b+c);
    if (dif < 0){
        dif = -dif;
    }
    cout << dif << endl;
}