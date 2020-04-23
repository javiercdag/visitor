#ifndef VISITANTEPRECIODETALLE_H
#define VISITANTEPRECIODETALLE_H

#include "VisitanteEquipo.h"
#include "Bus.h"
#include "Disco.h"
#include "Tarjeta.h"

/* Esta clase es utilizada para obtener la información de cada ComponenteEquipo
   que forma un equipo. */
class VisitantePrecioDetalle : public VisitanteEquipo {

public:
        VisitantePrecioDetalle();
        
        string getComponenteVisitado();

        float getPrecioVisitado();
    
	void visitarDisco(Disco & d);

	void visitarTarjeta(Tarjeta & t);

	void visitarBus(Bus & b);
};

#endif

