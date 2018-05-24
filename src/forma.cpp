
#include <bits/stdc++.h>
#include "forma.hpp"
#include <unistd.h>
using namespace std;


Forma::Forma(){
  int a,b; //Leitores da matriz campo
  for(a=0;a<25;a++){
    for(b=0;b<60;b++){
      campo[a][b] = ' ';
    }
  }
}
char Forma::getCoordenada(int x, int y){ // Retorna célula escolhida
    return campo[x][y];
}

void Forma::setCoordenada(int x, int y, char Viv){ // Determina status da célula
    campo[x][y] = Viv;
}

int Forma::get_Num_Vizinhos(int x, int y){
    return num_vizinhos[x][y];
}
void Forma::set_Num_Vizinhos(){

    int cont=0, x, y;

    for(x=0;x<25;x++){

      for(y=0;y<60;y++){

        if(getCoordenada(x-1, y-1) == '*'){
          cont++;
        }
        if(getCoordenada(x, y-1) == '*'){
          cont++;
        }
        if(getCoordenada(x+1, y-1) == '*'){
          cont++;
        }
        if(getCoordenada(x-1, y) == '*'){
          cont++;
        }
        if(getCoordenada(x+1, y) == '*'){
          cont++;
        }
        if(getCoordenada(x-1, y+1) == '*'){
          cont++;
        }
        if(getCoordenada(x, y+1) == '*'){
          cont++;
        }
        if(getCoordenada(x+1, y+1) == '*'){
          cont++;
        }
        num_vizinhos[x][y] = cont;
        cont =0;
    }
  }
}

void Forma::Regras(){

    set_Num_Vizinhos();
    int linha,coluna;

    for(linha=0;linha<25;linha++){
      for(coluna=0;coluna<60;coluna++){
        if(getCoordenada(linha,coluna) == '*'){ // Célula está viva
          if(get_Num_Vizinhos(linha,coluna) <=1){ //Regra 1-Isolamento
              setCoordenada(linha,coluna,' ');
            }
          if(get_Num_Vizinhos(linha,coluna) >=4){ //Regra 2-Superpopulação
              setCoordenada(linha,coluna,' ');
            }
          }
          if(getCoordenada(linha,coluna) == ' ' && get_Num_Vizinhos(linha,coluna) == 3){ //Regra 3-Nascimento
              setCoordenada(linha,coluna,'*');
            }
          if(get_Num_Vizinhos(linha,coluna)=='*' && get_Num_Vizinhos(linha,coluna) ==3){// Regra 4-Inércia
              setCoordenada(linha,coluna,'*');
            }
      }
    }
}

void Forma::printar_Campo(){
    int linha,coluna,geracao;
    for(geracao=0;geracao<100;geracao++){
      system("clear");
      for(linha=0;linha<25;linha++){
        printf("|");
        for(coluna=0;coluna<60;coluna++){
        cout << getCoordenada(linha,coluna);
        }
        printf("|\n");
      }
      Regras();
      usleep(200000);
    }
}
