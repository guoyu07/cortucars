/*
 * VChofer.cpp
 *
 *  Created on: 30/05/2016
 *      Author: Silvio Bigotto
 */

#include "VChofer.h"

VChofer::VChofer() {}
string VChofer::leer_cedula(){
	string ced;
	cout<<"Cedula: ";
	cin.sync();
	getline (cin,ced);
	return ced;
}
string VChofer::leer_nombre(){
	string nomb;
	cout<<"Nombre: ";
	cin.sync();
	getline (cin,nomb);
	return nomb;
}
int VChofer::leer_cant_traslados(){
	int ct;
	cout<<"Cantidad de traslados: ";
	cin>>ct;
	return ct;
}
void VChofer::imprimir_chofer(string ced, float sb){
	system ("cls");
	cout<<"Informacion del chofer"<<endl;
	cout<<"______________________"<<endl;
	cout<<"Cedula: "<<ced<<endl;
	cout<<"Sueldo: "<<setiosflags (ios::fixed)<<setprecision(2)<<sb<<endl;
	system ("pause");
}
