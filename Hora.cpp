#include <iostream>
#include <string>
using namespace std;

string minuto, m;
int hrs;
char punto;

int main(){
  cin >> hrs >> punto >> minuto;

  if(hrs >= 12){
    m = " PM";
    hrs = hrs % 12;
  }
  else{
    m = " AM";
  }

  if(hrs == 0){
    cout << 12 << punto << minuto << m << endl;
  } 
  else if(hrs < 10){
    cout << 0 << hrs << punto << minuto << m << endl;
  }
  else{
    cout << hrs << punto << minuto << m << endl;
  }
}