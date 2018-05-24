#include "Glider.hpp"
#include <iostream>

using namespace std;

Glider::Glider(){
  Forma();
  setCoordenada(10,9,'*');
  setCoordenada(10,10,'*');
  setCoordenada(10,11,'*');
  setCoordenada(9,11,'*');
  setCoordenada(8,10,'*');

}

Glider::Glider(int x, int y){
  Forma();
  setCoordenada(x,y,'*');
  setCoordenada(x,y+1,'*');
  setCoordenada(x,y+2,'*');
  setCoordenada(x-1,y+2,'*');
  setCoordenada(x-2,y+1,'*');
}
