#include "Persona.h"
#include "Trabajador.h"
#include "Menu.h"
#include "Doctor.h"
#include <iostream>
#include <fstream>
#include <clocale> //libreria para usar español
using namespace std;

void menu(bool);

int main() {

	menu(1);
	
/*
	string nom,ap,gen;
	int edad,k{0};
	Trabajador t1("Juan","Torres",42,"Masculino",4500,"Supervisor","9-18");
	t1.displayDatos();
	cout<<endl;
	Doctor d1("Antonio","Luque",34,"Masculino",5500,"Médico","7-15","Cardiologo",6);
	d1.displayDatos();
	cout<<endl;
	Persona v[10];
	cout << "Ingrese el nombre: "; cin >> nom;
	v[k].setNombre(nom);
	cout << "Ingrese el apellido: "; cin >>ap; 
	v[k].setApellido(ap);
	cout << "Ingrese la edad: "; cin >> edad;
	v[k].setEdad(edad);
	cout << "Ingrese el genero: "; cin >> gen;
	v[k].setGenero(gen);
	cout << endl;
	
	//Aqui tienen que crear en un disco de su PC (C o D) un bloc de notas o un archivo txt.
	//Cuando lo hayan creado, pongan la direccion de ese archivo y listo xd. 
	//pa comprobar, corren el programa normal y cuando se acabe van a revisar el txt y listo.
	//reciben "K" porque taba pensando en hacerlo bucle pa guardar mas datos d personas xd.
	string filename("e:\\Ciencia de la Computación 1\\Proyecto final\\CC1-ProyectoFinal-main\\Datos.txt");//Aca ponen la direccion del archivo txt.
	fstream file;
	
	file.open(filename, std::ios_base::out); 
	if (file.is_open())
	{
		file << k << endl;
		for(int i=0;i<=k;i++)
		{
			file << v[i].getNombre() << " ";
			file << v[i].getApellido() << " ";
			file << v[i].getEdad() << " ";
			file << v[i].getGenero() << " ";
			cout << endl;
		}
		cout << "\n Los datos se grabaron con exito \n";	
	}
	else
	{
		cout << " \n!Error al abrir el archivo. \n";
	}
	file.close(); 
*/	
	return 0;
}

void menu(bool key){

	while(key){
		cout<<"Bienvenido a la plataforma de ESSALUD"<<endl;
		cout<<"\nPACIENTE"<<endl;
		cout<<"1. Ingresar"<<endl;
		cout<<"2. Retirar"<<endl;
		cout<<"\nPERSONAL NO MEDICO"<<endl;
		cout<<"3. Ingresar"<<endl;
		cout<<"4. Retirar"<<endl;
		cout<<"\nPERSONAL MEDICO"<<endl;
		cout<<"5. Ingresar"<<endl;
		cout<<"6. Retirar"<<endl;
		cout<<"\n7. Salir"<<endl;
		cout<<"Ingrese la acción a realizar: ";
		int option;
		cin>>option;
		system("CLS");
		switch(option){
			case 1:
				system("CLS");
				cout<<"Ingrese datos del paciente:"<<endl;
				break;
			case 2:
				system("CLS");
				cout<<"Programa Finalizado"<<endl;;
				key=0;
				break;
			case 3:
				system("CLS");
				cout<<"Ingrese datos del personal:"<<endl;;
				key=0;
				break;
			case 4:
				system("CLS");
				cout<<"Programa Finalizado"<<endl;;
				key=0;
				break;
			case 5:
				system("CLS");
				cout<<"Ingrese datos del médico:"<<endl;;
				key=0;
				break;
			case 6:
				system("CLS");
				cout<<"Programa Finalizado"<<endl;;
				key=0;
				break;
			case 7:
				system("CLS");
				cout<<"Programa Finalizado"<<endl;;
				key=0;
				break;
			
			default:
			system("CLS");
				cout<<"INGRESE OPCION PERMITIDA"<<endl;;
				break;
		}
	}
}