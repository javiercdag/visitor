#include "Disco.h"

Disco::Disco(){}

Disco::Disco(float precio, string nombre){
    this->precio = precio;
    this->nombre = nombre;
}

void Disco::aceptar(VisitanteEquipo & v){
    v.visitarDisco(*this);
}