/*
 * MEmpresa.h
 *
 *  Created on: 30/05/2016
 *      Author: Macbook
 */

#ifndef MEMPRESA_H_
#define MEMPRESA_H_
#include "MChofer.h"

class MEmpresa {
private:
	float acum_ingreso,acum_km_este, acum_km_centro;
public:
	void set_acum_ingreso (float ai);
	void set_acum_km_este (float ake);
	void set_acum_km_centro (float akc);
	float get_acum_ingreso ();
	float get_acum_km_este ();
	float get_acum_km_centro ();
	string mayor();
	void procesar_chofer (MChofer mc);
	void procesar_traslado (MTraslado mt);
	MEmpresa();
};

#endif /* MEMPRESA_H_ */
