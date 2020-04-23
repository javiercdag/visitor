#include <valarray>

#include "Bus.h"

Bus::Bus(){}

Bus::Bus(float precio, string nombre){
    this->precio = precio;
    this->nombre = nombre;
}
void Bus::aceptar(VisitanteEquipo & v){
    v.visitarBus(*this);
}