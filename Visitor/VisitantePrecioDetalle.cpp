#include "VisitantePrecioDetalle.h"

VisitantePrecioDetalle::VisitantePrecioDetalle(){
    precioVisitado = 0.0;
}

void VisitantePrecioDetalle::visitarDisco(Disco & d) {
    //d.aceptar(*this, precio, nombre);
    this->precioVisitado = d.ComponenteEquipo::getPrecio();
}

void VisitantePrecioDetalle::visitarTarjeta(Tarjeta & t) {
    this->precioVisitado = t.ComponenteEquipo::getPrecio();
}

void VisitantePrecioDetalle::visitarBus(Bus & b) {
    this->precioVisitado = b.ComponenteEquipo::getPrecio();
}