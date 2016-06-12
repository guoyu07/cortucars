/*
 * Controlador.h
 *
 *  Created on: 30/05/2016
 *      Author: Silvio Bigotto
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MEmpresa.h"
#include "VEmpresa.h"
#include "VChofer.h"
#include "VTraslado.h"
class Controlador {
private:
	MEmpresa me;
public:
	void procesar_choferes();
	void reporte_empresa();
	Controlador();
};

#endif /* CONTROLADOR_H_ */
