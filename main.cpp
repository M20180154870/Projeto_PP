#include <iostream>
#include <ponto.h>
#include <poligono.h>
#include <retangulo.h>
#include <cmath>


using namespace std;

int main(void)
{
    Retangulo r(0,0,3,4);
    Ponto centroMassa;
  //----------------------------------------------------------------------------------------------
    r.print();
    cout << endl;
    cout << "A area do retangulo R eh: " << r.areaPoligono() << endl;
    cout << endl << endl << endl;
  //----------------------------------------------------------------------------------------------
    r.move(-3,4);
  //----------------------------------------------------------------------------------------------
    r.print();
    cout << endl;
    cout << "A area do retangulo R, apos move-lo eh: " << r.areaPoligono() << endl;
    cout << endl << endl << endl;
  //----------------------------------------------------------------------------------------------
    cout << endl << endl;
    centroMassa = r.centroDeMassa();
    r.rotacionaPonto(centroMassa.getX(),centroMassa.getY(),100);
  //----------------------------------------------------------------------------------------------
    r.print();
    cout << endl;
    cout << "A area do retangulo R, apos a sua rotacao eh: " << r.areaPoligono() << endl;
  //----------------------------------------------------------------------------------------------
    return 0;
}

