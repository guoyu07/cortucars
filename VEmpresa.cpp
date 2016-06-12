/*
 * VEmpresa.cpp
 *
 *  Created on: 30/05/2016
 *      Author: Macbook
 */

#include "VEmpresa.h"

VEmpresa::VEmpresa() {
	// TODO Auto-generated constructor stub
}
void VEmpresa::imprimir_empresa(float ai, string may){
	system ("cls");
	cout<<"Informacion de la Empresa"<<endl;
	cout<<"_________________________"<<endl;
	cout<<"La ganancia final del día fue de: "<<setiosflags(ios::fixed)<<setprecision(2)<<ai<<" bsf."<<endl;
	cout<<"El mayor traslado en km fue del destino(entre centro y este): "<<may<<endl;
}
