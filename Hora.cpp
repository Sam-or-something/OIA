#include <iostream>
#include <string>
using namespace std;

string hora;
int hrs;
int minuto;

int main(){
  cin >> hora;
  hrs = ((int)hora[0] - '0') * 10 + ((int)hora[1] - '0');
  minuto = ((int)hora[3] - '0') * 10 + ((int)hora[4] - '0');
  if(hrs > 12){
    cout << hrs - 12 << ":" << minuto << " PM";
  }
  else{
    cout << hrs << ":" << minuto << " AM";
  }
}