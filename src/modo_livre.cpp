#include <iostream>
#include "modo_livre.hpp"

using namespace std;

modo_livre::modo_livre(){
  Forma();
  int x,y;
  cout << "Digite as coordenadas: ";
  cin >> x >> y;
  while(1){
    cout << "Digite as coordenadas(Digite 0 para começar): ";
    cin >> x;
    if(x==0){
      break;
    }
    cin >> y;
    if(y==0){
      break;;
    }
    setCoordenada(x,y,'*');
  }
}
