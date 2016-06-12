/*
 * MTraslado.h
 *
 *  Created on: 30/05/2016
 *      Author: Silvio Bigotto
 */

#ifndef MTRASLADO_H_
#define MTRASLADO_H_

class MTraslado {
private:
	int destino;
	float cant_km;
public:
	void set_destino (int des);
	void set_cant_km (float ck);
	int get_destino ();
	float get_cant_km ();
	float calc_mont_total ();
	MTraslado();
};

#endif /* MTRASLADO_H_ */
