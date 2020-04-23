#include "Equipo.h"

/* Esta función se encarga de pedirle a los visitantes que calculen los precios de los componentes, y los muestra por pantalla. */
void Equipo::calcularPrecio(VisitantePrecioDetalle vDetalle, VisitantePrecio vPrecio, string descuento) {
    float factor = 1.0;
    
    cout << "Calculando el precio del equipo '" << this->nombrePC << "': ..." << endl << endl;
    
    if (descuento == "estudiante"){
        cout << "*** Aplicado un 10% de descuento por ser estudiante. ***" << endl;
       factor = 0.9; 
    }
    else if (descuento == "mayorista"){
        cout << "*** Aplicado un 15% de descuento por ser mayorista. ***" << endl;
        factor = 0.85;
    }
    string nombreBus, nombreTarjeta, nombreDisco;
    float precioBus = 0, precioTarjeta = 0, precioDisco = 0, precioTotal = 0;
    
    /* Visitante de componentes para obtener precios individuales */
    this->bus.aceptar(vDetalle);
    precioBus = (vDetalle.VisitanteEquipo::getPrecioVisitado() * factor);
    nombreBus = vDetalle.VisitanteEquipo::getComponenteVisitado();
    
    this->tarjeta.aceptar(vDetalle);
    precioTarjeta = (vDetalle.VisitanteEquipo::getPrecioVisitado() * factor);
    nombreTarjeta = vDetalle.VisitanteEquipo::getComponenteVisitado();
    
    this->disco.aceptar(vDetalle);
    precioDisco = (vDetalle.VisitanteEquipo::getPrecioVisitado() * factor);
    nombreDisco = vDetalle.VisitanteEquipo::getComponenteVisitado();
    
    /* Visitante de componentes para obtener precio total */
    this->bus.aceptar(vPrecio);
    this->tarjeta.aceptar(vPrecio);
    this->disco.aceptar(vPrecio);
    
    precioTotal = (vPrecio.VisitanteEquipo::getPrecioVisitado() * factor);
    
    /*Presentación de la información por la salida estándar*/
    cout << "- El bus del PC, " << nombreBus << " tiene un precio de " << precioBus << " euros." << endl;
    cout << "- La tarjeta grafica del PC, " << nombreTarjeta << " tiene un precio de " << precioTarjeta << " euros." << endl;
    cout << "- El disco duro del PC, " << nombreDisco << " tiene un precio de " << precioDisco << " euros." << endl;
    
    cout << "-------------------------------------------------------------------" << endl;
    
    cout << "[ El precio total del PC es de " << precioTotal << " euros ]" << endl << endl;
}

Equipo::Equipo(string nombrePC, Bus & bus1, Tarjeta & tarjeta1, Disco & disco1) {
    this->nombrePC = nombrePC;
    this->bus = bus1;
    this->tarjeta = tarjeta1;
    this->disco = disco1;
}