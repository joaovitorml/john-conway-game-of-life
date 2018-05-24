#include "Block.hpp"
#include <iostream>

using namespace std;

Block::Block(){
    Forma();
    setCoordenada(15,25,'*');
    setCoordenada(14,25,'*');
    setCoordenada(15,24,'*');
    setCoordenada(14,24,'*');
}

Block::Block(int x, int y){
  Forma();
  setCoordenada(x,y,'*');
  setCoordenada(x,y+1,'*');
  setCoordenada(x+1,y,'*');
  setCoordenada(x+1,y+1,'*');
}
