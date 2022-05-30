#include <iostream>
using namespace std;

int a, b, c;
int orden[3], noOrden[3];

int main(){
    cin >> a >> b >> c;
    if(a<=b && a<=c){
        orden[0] = a;
        if(b<=c){
            orden[1] = b;
            orden[2] = c;
        }
        else{
            orden[1] = c;
            orden[2] = b;
        }
    }
    else if(b<=a && b<=c){
    orden[0] = b;
        if(a<=c){
            orden[1] = a;
            orden[2] = c;
        }
        else{
            orden[1] = c;
            orden[2] = a;
        }
    }
    else{
    orden[0] = c;
        if(a<=b){
            orden[1] = a;
            orden[2] = b;
        }
        else{
            orden[1] = b;
            orden[2] = a;
        }
    }
    cout << orden[0] << " " << orden[1] << " " << orden[2] << endl;
}