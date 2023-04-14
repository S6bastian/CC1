#include <iostream>
#include <string>
#include "Persona.h"
#include "Trabajador.h"

    Trabajador::Trabajador(std::string Nombre,std::string Apellido,int Edad,std::string Genero,int Sueldo,std::string Oficio,std::string Horario)
	:Persona(Nombre,Apellido,Edad,Genero),sueldo(Sueldo),oficio(Oficio), horario(Horario){}
    void Trabajador::setSueldo(int nuevoSueldo){
        sueldo=nuevoSueldo;
    }
    void Trabajador::setOficio(std::string nuevoOficio){
        oficio=nuevoOficio;
    }
    void Trabajador::setHorario(std::string nuevoHorario){
        horario=nuevoHorario;
    }
    int Trabajador::getSueldo()const{
        return sueldo;
    }
    std::string Trabajador::getOficio()const{
        return oficio;
    }
    std::string Trabajador::getHorario()const{
        return horario;
    }
