#include "poligono.h"
#include "ponto.h"
#include <iostream>
#include <cmath>
#define N 100

using namespace std;

/**
 * @brief Poligono::Poligono é o construtor Default.
 */
Poligono::Poligono(){
    n = 0;
}

/**
 * @brief Poligono::Poligono é o construtor com argumentos variáveis, iniciadas pelo cliente da classe.
 * @param _n é o número de vértices a serem inseridos.
 */
Poligono::Poligono(int _n){
    n = _n;

    float cx, cy;

    for(int i = 0; i < n; i++){
        cout << "Informe o valor da coordenada X do " << i+1 << "º vértice: " << endl;
        cin >> cx;
        verticesPoligono[i].setX(cx);
        cout << "Informe o valor da coordenada Y do " << i+1 << "º vértice: " << endl;
        cin >> cy;
        verticesPoligono[i].setY(cy);

        cout << endl;
    }
}

/**
 * @brief Poligono::Poligono é o construtor de cópia da classe poligono.
 * @param p é o poligono a ser copiado.
 */
Poligono::Poligono(Poligono &p){
    n = p.n;
    for(int i = 0; i < n; i++){
       verticesPoligono[i].setX(p.verticesPoligono[i].getX());
       verticesPoligono[i].setY(p.verticesPoligono[i].getY());
    }
}

//Informando os vértices:
void Poligono::inserirVertices(float cx, float cy){

        verticesPoligono[n].setX(cx);
        verticesPoligono[n].setY(cy);

        n++;
}

//Calculando as arestas do poligono:
void Poligono::cArestas(int n){
    float cx, cy;
    int i;

    //Definindo arestas;
    for(i=0; i<n; i++){

    if(i == n-1){
        cx = verticesPoligono[0].getX() - verticesPoligono[i].getX();
        cy = verticesPoligono[0].getY() - verticesPoligono[i].getY();

        arestasPoligono[i].setX(cx);
        arestasPoligono[i].setY(cy);
    }

    cx = verticesPoligono[i+1].getX() - verticesPoligono[i].getX();
    cy = verticesPoligono[i+1].getY() - verticesPoligono[i].getY();

    arestasPoligono[i].setX(cx);
    arestasPoligono[i].setY(cy);
    }
}

/**
 * @brief Poligono::areaPoligono é a implementação da função que calcula a área do poligono.
 * @return retorna a área do poligono.
 */
float Poligono::areaPoligono(){
    int i;
    float soma1 = 0, soma2 = 0, area;
    for(i=0; i<n-1; i++){
        soma1 = soma1 + (verticesPoligono[i].getX()*verticesPoligono[i+1].getY());
        soma2 = soma2 + (verticesPoligono[i].getY()*verticesPoligono[i+1].getX());
    }
    soma1 = soma1 + (verticesPoligono[n-1].getX()*verticesPoligono[0].getY());
    soma2 = soma2 + (verticesPoligono[n-1].getY()*verticesPoligono[0].getX());

    if(soma1 > soma2){
        area = ((soma1 - soma2)/2);
    } else {
        area = ((soma2 - soma1)/2);
    }
    return area;
}

Ponto Poligono::centroDeMassa(){
    float somaX = 0, somaY = 0;
    Ponto p;
    for(int i = 0; i < n; i++){
        somaX = somaX + verticesPoligono[i].getX();
        somaY = somaY + verticesPoligono[i].getY();
    }
    p.setX(somaX/n);
    p.setY(somaY/n);

    return p;
}

void Poligono::move(float a, float b){
    int i;
    for(i=0; i<n; i++){
        verticesPoligono[i].setX(verticesPoligono[i].getX() + a);
        verticesPoligono[i].setY(verticesPoligono[i].getY() + b);
    }
}


void Poligono::rotacionaPonto(float x0, float y0, float t){
    int i;
    float novot;
    Ponto copia[n];

    move(-x0, -y0);

    novot = (M_PI*t)/180;

    for(i=0; i<n; i++){
        copia[i].setX(verticesPoligono[i].getX()*cos(novot) - verticesPoligono[i].getY()*sin(novot));
        copia[i].setY(verticesPoligono[i].getX()*sin(novot) + verticesPoligono[i].getY()*cos(novot));
    }

    for(int i = 0; i < n; i++){
        verticesPoligono[i].setX(copia[i].getX());
        verticesPoligono[i].setY(copia[i].getY());
    }

    move(x0, y0);
}


void Poligono::print(){
    int i;
    for(i=0; i<n; i++){
        cout << "(" << verticesPoligono[i].getX() << ", " << verticesPoligono[i].getY() << ")" << " -> ";
    }
}
