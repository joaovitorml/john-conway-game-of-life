#include <iostream>
#include <stdlib.h>
#include "forma.hpp"
#include "Blinker.hpp"
#include "Glider.hpp"
#include "Gun.hpp"
#include "Block.hpp"
#include "modo_livre.hpp"

using namespace std;


int main(int argc, char ** argv){
    int opcao,escolha,x,y;
    system("clear");
    cout << "\t\t\t\t------------------------------" << endl;
    cout << "\t\t\t\t| JOHN CONWAY'S GAME OF LIFE |" << endl;
    cout << "\t\t\t\t------------------------------" << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t\tINSTRUÇÕES" << endl;
    cout << endl;
    cout << endl;
    cout << "No menu inicial, existem 6 opções. As opções 1, 2, 3 e 4 te levarão a um submenu da forma que você escolheu. Escolha a opção 5" << endl;
    cout << "para abrir o Modo Livre, onde você pode criar suas próprias células. Por último, escolha 6 se quiser sair do código." << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t\tREGRAS ACERCA DAS INTERAÇÕES" << endl;
    cout << endl;
    cout << endl;
    cout << "1- Qualquer célula viva com menos de dois vizinhos vivos morre de solidão." << endl;
    cout << "2- Qualquer célula viva com mais de três vizinhos vivos morre de superpopulação." << endl;
    cout << "3- Qualquer célula morta com exatamente três vizinhos vivos se torna uma célula viva." << endl;
    cout << "4- Qualquer célula viva com dois ou três vizinhos vivos continua no mesmo estado para a próxima geração." << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t\tMENU PRINCIPAL" << endl;
    cout << endl;
    cout << endl;
    cout << "1- Block" << endl;
    cout << "2- Blinker" << endl;
    cout << "3- Glider" << endl;
    cout << "4- Gun" << endl;
    cout << "5- Modo livre" << endl;
    cout << "6- Sair" << endl;
    cout << endl;
    cout << "Escolha uma opcao: ";
    cin >> opcao;
    while(opcao <1 || opcao >6){
      cout << "Por favor, escolha uma opcao valida (1 a 6): ";
      cin >> opcao;
    }
    if(opcao == 1){
      system("clear");
      cout << "BLOCK" << endl;
      cout << endl;
      cout << "1- Automático (pos 14,24)" << endl;
      cout << "2- Manual" << endl;
      cout << endl;
      cout << "Escolha uma opcao: ";
      cin >> escolha;
      while(escolha !=1 && escolha !=2){
        cout << "Por favor, escolha uma opcao valida (1 ou 2): ";
        cin >> escolha;
      }
      if(escolha==1){
        Block figura;
        figura.printar_Campo();
      }
      if(escolha==2){
        cout << "Digite as coordenadas: ";
        cin >> x >> y;
        Block figura(x,y);
        figura.printar_Campo();
      }
    }
    if(opcao == 2){
      system("clear");
      cout << "BLINKER" << endl;
      cout << endl;
      cout << "1- Automático (pos 15,27)" << endl;
      cout << "2- Manual" << endl;
      cout << endl;
      cout << "Escolha uma opcao: ";
      cin >> escolha;
      while(escolha !=1 && escolha !=2){
        cout << "Por favor, escolha uma opcao valida (1 ou 2): ";
        cin >> escolha;
      }
      if(escolha==1){
        Blinker figura;
        figura.printar_Campo();
      }
      if(escolha==2){
        cout << "Digite as coordenadas: ";
        cin >> x >> y;
        Blinker figura(x,y);
        figura.printar_Campo();
      }
    }
    if(opcao == 3){
      system("clear");
      cout << "GLIDER" << endl;
      cout << endl;
      cout << "1- Automático (pos 10,9)" << endl;
      cout << "2- Manual" << endl;
      cout << endl;
      cout << "Escolha uma opcao: ";
      cin >> escolha;
      while(escolha !=1 && escolha !=2){
        cout << "Por favor, escolha uma opcao valida (1 ou 2): ";
        cin >> escolha;
      }
      if(escolha==1){
        Glider figura;
        figura.printar_Campo();
      }
      if(escolha==2){
        cout << endl;
        cout << "Digite as coordenadas: ";
        cin >> x >> y;
        Glider figura(x,y);
        figura.printar_Campo();
      }
    }
    if(opcao == 4){
      system("clear");
      cout << "GUN" << endl;
      cout << endl;
      cout << "1- Automático" << endl;
      cout << endl;
      cout << "Escolha uma opcao: ";
      cin >> escolha;
      while(escolha !=1){
        cout << endl;
        cout << "Por favor, escolha uma opcao valida: ";
        cin >> escolha;
      }
      if(escolha==1){
        Gun figura;
        figura.printar_Campo();
      }
    }
    if(opcao == 5){
      modo_livre figura;
      figura.printar_Campo();
    }
    if(opcao == 6){
      exit(0);
    }

  }
