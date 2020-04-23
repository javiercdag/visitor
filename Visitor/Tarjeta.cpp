#include "Tarjeta.h"

Tarjeta::Tarjeta(){}

Tarjeta::Tarjeta(float precio, string nombre){
    this->precio = precio;
    this->nombre = nombre;
}

void Tarjeta::aceptar(VisitanteEquipo & v){
    v.visitarTarjeta(*this);
}