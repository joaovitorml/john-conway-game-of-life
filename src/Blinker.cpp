#include "Blinker.hpp"
#include <iostream>

using namespace std;

Blinker::Blinker(){
  Forma();
  setCoordenada(14,27,'*');
  setCoordenada(15,27,'*');
  setCoordenada(16,27,'*');
}

Blinker::Blinker(int x, int y){
  Forma();
  setCoordenada(x,y,'*');
  setCoordenada(x,y+1,'*');
  setCoordenada(x,y-1,'*');

}
