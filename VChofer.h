/*
 * VChofer.h
 *
 *  Created on: 30/05/2016
 *      Author: Macbook
 */

#ifndef VCHOFER_H_
#define VCHOFER_H_
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

class VChofer {
public:
	string leer_cedula ();
	string leer_nombre ();
	int leer_cant_traslados ();
	void imprimir_chofer (string ced,float sb);
	VChofer();
};

#endif /* VCHOFER_H_ */
