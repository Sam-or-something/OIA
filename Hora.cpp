#include <iostream>
#include <string>
using namespace std;

string hora, minuto;
int hrs;

int main(){
  cin >> hora;
  hrs = (hora[0] - '0') * 10 + (hora[1] - '0');
  minuto = hora.substr(hora.find(":") + 1, hora.length());
  if(hrs > 12){
    cout << hrs - 12 << ":" << minuto << " PM";
  }
  else if(hrs == 12){
    cout << hrs << ":" << minuto << " PM";
  }
  else if(hrs == 0){
    cout << hrs + 12 << ":" << minuto << " AM";
  }
  else if(hrs < 10){
    cout << "0" << hrs << ":" << minuto << " AM";
  }
  else{
    cout << hrs << ":" << minuto << " AM";
  }
}