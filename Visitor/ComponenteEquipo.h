#ifndef COMPONENTEEQUIPO_H
#define COMPONENTEEQUIPO_H

#include <string>
#include "VisitanteEquipo.h"
using namespace std;

/* Declaración de clases vacías para resolver bucle de inclusión */
class Tarjeta;

class Disco;

class Bus;

class ComponenteEquipo {
	
public:
    float precio;
    string nombre;

    ComponenteEquipo();
	ComponenteEquipo(float precio, string nombre);
        
        float getPrecio();
        string getNombre();

	virtual void aceptar(VisitanteEquipo & v) = 0;
};

#endif

