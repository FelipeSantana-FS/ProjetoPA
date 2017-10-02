#include <iostream>
#include"poligono.h"

using namespace std;

int main()
{

    Poligono p;
    point n, k;

    p.insere_vertices(0,4.5);
    p.insere_vertices(1,5);
//    p.insere_vertices(7.1,4.5);
//    p.insere_vertices(7,9);
    p.imprime_poligono();
    p.transladar_poligono(3,6);
    p.imprime_poligono();
/*
    k.setXY(3,8);
    k.print();
    n.setXY(3.4,5.8);
    n.print();
    n.add(k);
    n.print();
*/
//cout<<"Quantidade de vertices: "<<p.vertices_poligono()<<endl;

    return 0;
}
