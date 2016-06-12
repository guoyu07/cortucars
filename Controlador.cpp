/*
 * Controlador.cpp
 *
 *  Created on: 30/05/2016
 *      Author: Macbook
 */

#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub
}
void Controlador::procesar_choferes(){
	MTraslado mt;
	VTraslado vt;
	MChofer mc;
	VChofer vc;
	string ced,nomb;
	int resp,ct,des;
	float ck;
	do{
		cout<<"Datos del Chofer"<<endl;
		cout<<"________________"<<endl;
		ced=vc.leer_cedula();
		nomb=vc.leer_nombre();
		ct=vc.leer_cant_traslados();
		mc.set_cedula(ced);
		mc.set_nombre(nomb);
		mc.set_cant_traslados(ct);
		mc.set_acum_mont_tot(0);
		for (int i=0;i<ct;i++){
			cout<<"Datos del Traslado"<<endl;
			cout<<"__________________"<<endl;
			des=vt.leer_destino();
			ck=vt.leer_cant_km();
			mt.set_destino(des);
			mt.set_cant_km(ck);
			mc.procesar_traslado(mt);
			me.procesar_traslado(mt);
		}
		vc.imprimir_chofer(mc.get_cedula(), mc.calc_sueldo_base());
		me.procesar_chofer(mc);
		cout<<"Hay mas choferes? (1.Si 2.No): ";
		cin>>resp;
	}
	while (resp==1);
}
void Controlador::reporte_empresa(){
	VEmpresa ve;
	ve.imprimir_empresa(me.get_acum_ingreso(), me.mayor());
}
