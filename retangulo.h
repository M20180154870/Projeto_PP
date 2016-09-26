#ifndef RETANGULO_H
#define RETANGULO_H
#include <poligono.h>


class Retangulo : public Poligono
{
public:
    float x, y, altura, largura;

    Retangulo();

    Retangulo(float _x, float _y, float _altura, float _largura);

    Retangulo(Retangulo &r);

    void inserirRetangulo();
};

#endif // RETANGULO_H
