/*
 * MEmpresa.cpp
 *
 *  Created on: 30/05/2016
 *      Author: Macbook
 */

#include "MEmpresa.h"

MEmpresa::MEmpresa() {
	// TODO Auto-generated constructor stub
	acum_ingreso=acum_km_este=acum_km_centro=0;
}
void MEmpresa::set_acum_ingreso(float ai){
	acum_ingreso=ai;
}
void MEmpresa::set_acum_km_centro(float akc){
	acum_km_centro=akc;
}
void MEmpresa::set_acum_km_este(float ake){
	acum_km_este=ake;
}
float MEmpresa::get_acum_ingreso(){
	return acum_ingreso;
}
float MEmpresa::get_acum_km_centro(){
	return acum_km_centro;
}
float MEmpresa::get_acum_km_este(){
	return acum_km_este;
}
string MEmpresa::mayor(){
	string nombre="";
	float may=acum_km_este;
	if (acum_km_centro > may)
		may=acum_km_centro;
	if(may==acum_km_centro)
		nombre+=" Centro ";
	if(may==acum_km_este)
		nombre+=" Este ";
	return nombre;
}
void MEmpresa::procesar_chofer(MChofer mc){
	acum_ingreso+=mc.calc_ingreso();
}
void MEmpresa::procesar_traslado(MTraslado mt){
	if (mt.get_destino()==1)
		acum_km_este+=mt.get_cant_km();
	if (mt.get_destino()==3)
		acum_km_centro+=mt.get_cant_km();
}
