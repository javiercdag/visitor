#ifndef VISITANTEEQUIPO_H
#define VISITANTEEQUIPO_H

#include <string>

using namespace std;

class Disco;
class Tarjeta;
class Bus;


class VisitanteEquipo {
protected:
    string componenteVisitado;
    float precioVisitado;

public:
        string getComponenteVisitado();

        float getPrecioVisitado();
    
	virtual void visitarDisco(Disco & d) = 0;

	virtual void visitarTarjeta(Tarjeta & t) = 0;

	virtual void visitarBus(Bus & b) = 0;
};

#endif

