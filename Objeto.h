#ifndef AGREGACION_OBJETO_H
#define AGREGACION_OBJETO_H


#include <iostream>
#include "Tipos.h"

using namespace std;

class Objeto {
private:
    string nombre;
    double calificacion;
    TipoCaracter  color;
    TipoEntero    posX;
    TipoEntero    posY;
public:
    Objeto();
    Objeto(const TipoString& nombre, TipoCaracter color,
           TipoEntero posX, TipoEntero posY);
    Objeto(const TipoString& nombre, TipoCaracter color,
           TipoEntero posX, TipoEntero posY, double calificacion);
    virtual ~Objeto();
    void setNombre(const TipoString& nombre);
    string     getNombre();
    TipoEntero getPosX();
    TipoEntero getPosY();
    char getColor();
    void moverse(TipoEntero x, TipoEntero y);
    string mostrarPosicion();
};

class restaurante: public Objeto{
    
}
class hoteles: public Objeto{
    
}
class museo: public Objeto{
    
}
#endif //AGREGACION_OBJETO_H
