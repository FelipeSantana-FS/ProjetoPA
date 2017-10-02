#ifndef POINT_H
#define POINT_H

class point
{
private:
    float x, y, x1, y1;
public:
   point();
   ~point();

    void setX(float _x);
    void setY(float _y);
    float getX(void);
    float getY(void);
    void setXY(float _x,float _y);
    void add(point &ponto);
    void sub(point &ponto);
    void print();
    float norma();
    void translada(float a,float b);
};

#endif // POINT_H


