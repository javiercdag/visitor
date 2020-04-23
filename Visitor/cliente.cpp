/* 
 * File:   cliente.cpp
 * Author: Francisco Javier Casado de Amezúa García y Miguel Muñoz Molina
 *
 * Created on 4 de marzo de 2020, 12:09
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Equipo.h"
#include "VisitanteEquipo.h"
#include "VisitantePrecio.h"
#include "VisitantePrecioDetalle.h"
using namespace std;



int main(int argc, char** argv) {
    string nombreBus = "IBM37z";
    string nombreTarjeta = "RTX2080";
    string nombreDisco = "KingstonX2";
    string nombreEquipo = "PC de casa";
    string descuento = "estudiante";
            
    Bus bus1(20.0, nombreBus);
    Tarjeta tarjeta1(899.0, nombreTarjeta);
    Disco disco1(150.0, nombreDisco);
    
    Equipo equipo1(nombreEquipo, bus1, tarjeta1, disco1);
    VisitantePrecio vPrecio;
    VisitantePrecioDetalle vDetalle;
    
    /* Delegación de la obtención de información */
    equipo1.calcularPrecio(vDetalle, vPrecio, descuento);
    equipo1.calcularPrecio(vDetalle, vPrecio, "normal");
    equipo1.calcularPrecio(vDetalle, vPrecio, "mayorista");

    return 0;
}

