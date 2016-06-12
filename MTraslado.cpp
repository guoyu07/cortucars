/*
 * MTraslado.cpp
 *
 *  Created on: 30/05/2016
 *      Author: Macbook
 */

#include "MTraslado.h"

MTraslado::MTraslado() {
	// TODO Auto-generated constructor stub
	destino=cant_km=0;
}
void MTraslado::set_cant_km(float ck){
	cant_km=ck;
}
void MTraslado::set_destino(int des){
	destino=des;
}
float MTraslado::get_cant_km(){
	return cant_km;
}
int MTraslado::get_destino(){
	return destino;
}
float MTraslado::calc_mont_total(){
	float monto=0;
	switch (destino){
	case 1: monto=cant_km*55.5;
	break;
	case 2: monto=cant_km*47.5;
	break;
	case 3: monto=cant_km*60-(cant_km*60*0.075);
	break;
	}
	return monto;
}
