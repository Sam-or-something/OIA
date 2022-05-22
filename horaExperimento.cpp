#include <iostream>
#include <string>
using namespace std;

int h, m, s, total, hf, mf, sf;

int main(){
    cin >> h >> m >> s >> total;

    if (total % 60 != 0){
        for(int i = total; i % 60 != 0; i--){
            total - 1;
            s++;
        }
      if(s >= 60){
        s-=60;
        m+=1;
      }
    }
    total /= 60;
    if (total % 60 != 0){
        for(int i = total; i % 60 != 0; i--){
            total - 1;
            m++;
        }
      if(m >= 60){
        m-=60;
        h+=1;
      }
    }
    h += total / 60;
    if(h > 24){
        h -= 24;
    }
    cout << h << " " << m << " " << s << endl;
}