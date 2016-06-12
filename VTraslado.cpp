/*
 * VTraslado.cpp
 *
 *  Created on: 30/05/2016
 *      Author: Macbook
 */

#include "VTraslado.h"

VTraslado::VTraslado() {
	// TODO Auto-generated constructor stub
}
int VTraslado::leer_destino(){
	int des;
	do{
	cout<<"Destino (1. Este, 2. Oeste, 3. Centro): ";
	cin>>des;
	if (des<1 or des>3){
		cout<<"Dato no valido"<<endl;
		system ("pause");
	}
	}while(des<1 or des>3);
	return des;
}
float VTraslado::leer_cant_km(){
	float ck;
	cout<<"Cantidad de kilometros del traslado: ";
	cin>>ck;
	return ck;
}
