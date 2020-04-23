#ifndef EQUIPO_H
#define EQUIPO_H

#include "ComponenteEquipo.h"
#include "VisitantePrecio.h"
#include "VisitantePrecioDetalle.h"
#include "Disco.h"
#include "Tarjeta.h"
#include "Bus.h"
#include <iostream>
using namespace std;

class Equipo {

private:
    Bus bus;
    Tarjeta tarjeta;
    Disco disco;
    string nombrePC;

public:
	void calcularPrecio(VisitantePrecioDetalle vDetalle, VisitantePrecio vPrecio, string descuento);

	Equipo(string nombrePC, Bus & bus, Tarjeta & tarjeta, Disco & disco);
};

#endif

