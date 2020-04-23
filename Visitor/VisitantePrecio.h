#ifndef VISITANTEPRECIO_H
#define VISITANTEPRECIO_H

#include "VisitanteEquipo.h"
#include "Bus.h"
#include "Disco.h"
#include "Tarjeta.h"

/* Esta clase es utilizada para obtener el precio total de un equipo */
class VisitantePrecio : public VisitanteEquipo {

public:
        VisitantePrecio();
        
        string getComponenteVisitado();

        float getPrecioVisitado();
        
	void visitarDisco(Disco & d);

	void visitarTarjeta(Tarjeta & t);

	void visitarBus(Bus & b);
};

#endif

