#include <iostream>
using namespace std;

int num, resp;

int main(){
  cin >> num;
    
  for(int i = num; i > 0; i--){
      if(i % 2 == 0){
          resp += i;
      }
      else{
          resp -= i;
      }
  }

  cout << resp << endl;
}