#include <iostream>
#include <string>
using namespace std;

int h, m, sec, total, m2, sec2;

int main(){
    cin >> h >> m >> sec >> total;
    
    if (total % 60 != 0){
        sec2 = total % 60;
        sec += sec2;
        total -= sec2;
    }
    total /= 60;
    if (total % 60 != 0){
        m2 = total % 60;
        m += m2;
        total -= m2;
    }
    total /= 60;
    h += total;
    
    if(sec >= 60){
        sec -= 60;
        m ++;
    }
    if(m >= 60){
        m -= 60;
        h ++;
    }
    if(h >= 24){
        h = h % 24;
    }

    cout << h << " " << m << " " << sec << endl;
}