#ifndef PONTO_H
#define PONTO_H


class Ponto
{
  private:
    float x, y;
  public:

    /**
     * @brief Ponto é o construtor Default da classe.
     */
    Ponto();

    /**
     * @brief Ponto é o construtor com argumentos variáveis da classe, iniciada pelo cliente da desta.
     * @param _x é a variável que iniciará o valor de coordenada X do ponto.
     * @param _y é a variável que iniciará o valor de coordenada Y do ponto.
     */
    Ponto(float _x, float _y);

    /**
     * @brief Ponto é o construtor de cópia da classe.
     * @param p é o objeto da classe a ser copiado.
     */
    Ponto(Ponto &p);

    void setX(float mx);
    float getX(void);

    void setY(float my);
    float getY(void);

    void setXY(float mx, float my);

    Ponto add(Ponto p1);
    Ponto sub(Ponto p1);

    float norma();

    void translada(float a, float b);

    void imprime();
};

#endif // PONTO_H

