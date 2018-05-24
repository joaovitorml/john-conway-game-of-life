#ifndef FORMA_HPP
#define FORMA_HPP


#include <string>
using namespace std;

class Forma{
private:
  char campo[25][60];
  int num_vizinhos[25][60];

public:

  Forma();

  char getCoordenada(int x, int y);
  void setCoordenada(int x, int y, char Viv);

  int get_Num_Vizinhos(int x, int y);
  void set_Num_Vizinhos();

  void Regras();
  void printar_Campo();
};

#endif
