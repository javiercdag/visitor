#include "VisitanteEquipo.h"

string VisitanteEquipo::getComponenteVisitado(){
    return this->componenteVisitado;
}

float VisitanteEquipo::getPrecioVisitado(){
    return this->precioVisitado;
}
        
void VisitanteEquipo::visitarDisco(Disco & d) {	
}

void VisitanteEquipo::visitarTarjeta(Tarjeta & t) {
}

void VisitanteEquipo::visitarBus(Bus & b) {
}