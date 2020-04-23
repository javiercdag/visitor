#ifndef BUS_H
#define BUS_H

#include "ComponenteEquipo.h"
#include "VisitanteEquipo.h"

class Bus : public ComponenteEquipo {
public:
    Bus();
    Bus(float precio, string nombre);
    float getPrecio();
    string getNombre();
    void aceptar(VisitanteEquipo & v);
};

#endif
