/*
 * MChofer.cpp
 *
 *  Created on: 30/05/2016
 *      Author: Macbook
 */

#include "MChofer.h"

MChofer::MChofer() {
	// TODO Auto-generated constructor stub
cant_traslados=acum_mont_tot=0;
}
void MChofer::set_cant_traslados(int ct){
	cant_traslados=ct;
}
void MChofer::set_cedula(string ced){
	cedula=ced;
}
void MChofer::set_nombre(string nomb){
	nombre=nomb;
}
void MChofer::set_acum_mont_tot(float amt){
	acum_mont_tot=amt;
}
int MChofer::get_cant_traslados(){
	return cant_traslados;
}
string MChofer::get_cedula(){
	return cedula;
}
string MChofer::get_nombre(){
	return nombre;
}
float MChofer::get_acum_mont_tot(){
	return acum_mont_tot;
}
float MChofer::calc_ingreso(){
	return acum_mont_tot*0.70;
}
float MChofer::calc_sueldo_base(){
	return acum_mont_tot*0.30;
}
void MChofer::procesar_traslado(MTraslado mt){
	acum_mont_tot+=mt.calc_mont_total();
}
