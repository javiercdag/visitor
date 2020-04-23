#include "ComponenteEquipo.h"

ComponenteEquipo::ComponenteEquipo(){}

ComponenteEquipo::ComponenteEquipo(float precio, string nombre) {
}

float ComponenteEquipo::getPrecio(){
    return this->precio;
}

string ComponenteEquipo::getNombre(){
    return this->nombre;
}

void ComponenteEquipo::aceptar(VisitanteEquipo & v) {

}
