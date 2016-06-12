/*
 * MChofer.h
 *
 *  Created on: 30/05/2016
 *      Author: Macbook
 */

#ifndef MCHOFER_H_
#define MCHOFER_H_
#include <string>
using namespace std;
#include "MTraslado.h"

class MChofer {
private:
	string cedula,nombre;
	int cant_traslados;
	float acum_mont_tot;
public:
	void set_cedula (string ced);
	void set_nombre (string nomb);
	void set_cant_traslados (int ct);
	void set_acum_mont_tot (float amt);
	string get_cedula ();
	string get_nombre ();
	int get_cant_traslados ();
	float get_acum_mont_tot ();
	float calc_sueldo_base ();
	float calc_ingreso ();
	void procesar_traslado (MTraslado mt);
	MChofer();
};

#endif /* MCHOFER_H_ */
