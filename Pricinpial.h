#ifndef PRICINPIAL_H
#define PRICINPIAL_H
#include <list>


enum CriterioOrdenLibro {ORDEN_CODIGO, ORDEN_TITULO, ORDEN_AUTOR, ORDEN_EDITORIAL, ORDEN_ANIO, ORDEN_STOCK};
enum CriterioOrdenSocio {ORDEN_NOMBRE, ORDEN_APELLIDO, ORDEN_DNI, ORDEN_DOMICILIO, ORDEN_EMAIL, ORDEN_MOVIL};


class Pricinpial {
	std::list<Socio> S;
	std::list<Libro> L;
	std::list<Prestamo> L;
	
public:
	Pricinpial();
private:
};

#endif

