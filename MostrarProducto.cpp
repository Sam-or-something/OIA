#include <iostream>
#include <string>
using namespace std;

int numA, numB, resp;

int main(){
    cin >> numA >> numB;
    resp = numA * numB;

    if(numA < 10){
        cout << "   " << numA << endl;
    }
    else{
        cout << "  " << numA << endl;
    }

    if(numB < 10){
        cout << "x  " << numB << endl;
    }
    else {
        cout << "x " << numB << endl;
    }
    
    cout << "----" << endl;

    if(resp < 10){
        cout << "   " << resp << endl;
    }
    else if(resp < 100){
        cout << "  " << resp << endl;
    }
    else if(resp < 1000){
        cout << " " << resp << endl;
    }
    else{
        cout << resp << endl;
    }
}