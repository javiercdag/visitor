#include "VisitantePrecio.h"

VisitantePrecio::VisitantePrecio(){
    precioVisitado = 0.0;
}

void VisitantePrecio::visitarDisco(Disco & d) {
    //d.aceptar(*this, precio, nombre);
    this->precioVisitado += d.ComponenteEquipo::getPrecio();
}

void VisitantePrecio::visitarTarjeta(Tarjeta & t) {
    this->precioVisitado += t.ComponenteEquipo::getPrecio();
}

void VisitantePrecio::visitarBus(Bus & b) {
    this->precioVisitado += b.ComponenteEquipo::getPrecio();
}