#ifndef DISCO_H
#define DISCO_H

#include "ComponenteEquipo.h"
#include "VisitanteEquipo.h"

class Disco : public ComponenteEquipo {
    
public:
        Disco();
        Disco(float precio, string nombre);
        float getPrecio();
        string getNombre();
	void aceptar(VisitanteEquipo & v);
};

#endif
