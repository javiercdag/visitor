#ifndef TARJETA_H
#define TARJETA_H

#include "ComponenteEquipo.h"
#include "VisitanteEquipo.h"

class Tarjeta : public ComponenteEquipo {

public:
    Tarjeta();
    Tarjeta(float precio, string nombre);
    float getPrecio();
    string getNombre();
    void aceptar(VisitanteEquipo & v);
};

#endif

