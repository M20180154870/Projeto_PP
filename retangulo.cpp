#include "retangulo.h"
#include <poligono.h>

Retangulo::Retangulo(){
    x = 0;
    y = 0;
    altura = 0;
    largura = 0;
}

Retangulo::Retangulo(float _x, float _y, float _altura, float _largura){
    x = _x;
    y = _y;
    altura = _altura;
    largura = _largura;

    n = 4;

    inserirRetangulo();
}

Retangulo::Retangulo(Retangulo &r){
    n = r.n;
    x = r.x;
    y = r.y;
    altura = r.altura;
    largura = r.largura;

    inserirRetangulo();
}

void Retangulo::inserirRetangulo(){
    verticesPoligono[0].setX(x);
    verticesPoligono[0].setY(y);

    verticesPoligono[1].setX(x + largura);
    verticesPoligono[1].setY(y);

    verticesPoligono[2].setX(x + largura);
    verticesPoligono[2].setY(y + altura);

    verticesPoligono[3].setX(x);
    verticesPoligono[3].setY(y + altura);
}
