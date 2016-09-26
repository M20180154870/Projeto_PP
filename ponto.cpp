#include "ponto.h"
#include <iostream>
#include <cmath>

using namespace std;

/**
 * @brief Ponto::Ponto é o construtor Default.
 */
Ponto::Ponto(){
    x = 0;
    y = 0;
}

/**
 * @brief Ponto::Ponto é o construtor com argumentos variáveis, iniciadas pelo cliente da classe.
 * @param _x
 * @param _y
 */
Ponto::Ponto(float _x, float _y){
    x = _x;
    y = _y;
}

/**
 * @brief Ponto::Ponto é o construtor de cópia da classe ponto.
 * @param p é ponto a ser copiado.
 */
Ponto::Ponto(Ponto &p){
    x = p.x;
    y = p.y;
}

/**
 * @brief Ponto::setX é a função que inicializa a coordenada X do ponto, já que esta é uma informação privada da classe.
 * @param cx é o valor a ser setado na coordenada X.
 */
void Ponto::setX(float cx){
   x = cx;
}

/**
 * @brief Ponto::getX é a função que recupera o valor da variável X, já que esta é uma informação privada da classe.
 * @return retorna o valor da coordenada X do ponto.
 */
float Ponto::getX(void){
    return x;
}

/**
 * @brief Ponto::setY é a função que inicializa a coordenada Y do ponto, já que esta é uma informação privada da classe.
 * @param cy é o valor a ser setado na coordenada Y.
 */
void Ponto::setY(float cy){
   y = cy;
}

/**
 * @brief Ponto::getY é a função que recupera o valor da variável Y, já que esta é uma informação privada da classe.
 * @return retorna o valor da coordenada Y do ponto.
 */
float Ponto::getY(void){
    return y;
}

/**
 * @brief Ponto::setXY é a função que inicializa as coordenadas X e Y do ponto, já que estas são informações privadas da classe.
 * @param cx é o valor a ser setado na coordenada X.
 * @param cy é o valor a ser setado na coordenada Y.
 */
void Ponto::setXY(float cx, float cy){
    x = cx;
    y = cy;
}

Ponto Ponto::add(Ponto p1){
    Ponto p;
    p.x = x + p1.x;
    p.y = y + p1.y;
    return p;
}

Ponto Ponto::sub(Ponto p1){
    Ponto p;
    p.x = x - p1.x;
    p.y = y - p1.y;
    return p;
}

float Ponto::norma(){
    float d;
    x = (0 - x);
    y = (0 - y);
    d = sqrt((x * x) + (y * y));
    return d;
}

void Ponto::translada(float a, float b){
    x = x + a;
    y = y + b;
}

void Ponto::imprime(){
    cout << "(" << x << ", " << y << ")" << endl;
}



