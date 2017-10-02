#include <iostream>
#include "poligono.h"

using namespace std;

Poligono::Poligono()
{
    quantidade_vertices = 0;
    indice = 0;

//cout<<"Construtor de Poligono"<<endl;
}

Poligono::~Poligono()
{
//cout<<"Destrutor de Poligono"<<endl;
}


void Poligono::insere_vertices(float _x, float _y){
    int i, acumulador=0;

    vertices[3].setXY(0,0);
    vertices[indice].setXY(_x,_y);

    indice = indice + 1;

    for(i=0;i<4;i++){
    vertices[i].print();
  }

    for(i=0;i<4;i++){
        if((vertices[i].getX() != 0 && vertices[i].getY() != 0)||vertices[i].getY() != 0||vertices[i].getX() != 0){
             acumulador = acumulador + 1;
            }
        }

   cout<<"Valor de acumulador: "<<acumulador<<endl;
    quantidade_vertices = acumulador;
}

int Poligono::vertices_poligono(){

    return  quantidade_vertices;

}

void Poligono::imprime_poligono(){
  int i;
    for(i=0;i<4;i++){
      cout<<"("<<vertices[i].getX()<<","<<vertices[i].getY()<<")"<<"->";
  }
    cout<<endl;
}

void Poligono::transladar_poligono(float a,float b){
    int i;

    for(i=0;i<4;i++){
        if((vertices[i].getX() != 0 && vertices[i].getY() != 0)||vertices[i].getY() != 0||vertices[i].getX() != 0){
    vertices[i].translada(a,b);
   }
  }
}
