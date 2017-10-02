#include<iostream>
#include<cmath>
#include "point.h"

using namespace std;

point::point()
{
//    cout<<"Construtor de point!"<<endl;
    x = 0;  //Caso o usuario não use o metodo get
    y = 0;  //A classe retorna o ponto na origem!
}

point::~point()
{
  //  cout<<"Destrutor de point!"<<endl;
}



void point::setX(float _x)
{
    x = _x;
}


void point::setY(float _y)
{
    y = _y;
}


float point::getX()
{
    return x;
}

float point::getY(void)
{
    return y;
}

void point::setXY(float _x, float _y){
    x = _x;
    y = _y;

}

void point::add(point &ponto) {

    x = ponto.getX() + x;
    y = ponto.getY() + y;
}

void point::sub(point &ponto){
    x = ponto.getX() - x;
    y = ponto.getY() - y;
}

float point::norma(){
    return sqrt(x*x + y*y);
}

void point::translada(float a, float b){
    x = a + x;
    y = b + y;
}


void point::print(void)
{
    cout<<"Ponto (x,y) = "<<"("<<x<<","<<y<<")"<<endl;
}
