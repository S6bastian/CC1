#include <iostream>
#include <string>
#include "Trabajador.h"
#include "Doctor.h"

Doctor::Doctor(std::string Nombre,std::string Apellido,int Edad,std::string Genero,
                int Sueldo,std::string Oficio,std::string Horario,
                std::string Especialidad, int AniosDeExp) 
:Trabajador(Nombre,Apellido,Edad,Genero,Sueldo,Oficio,Horario),especialidad{Especialidad}{ 
    aniosDeExp=AniosDeExp;
}
void Doctor::setEspecialidad(std::string nuevaEspecialidad){
    especialidad=nuevaEspecialidad;
}

void Doctor::setAniosDeExp(int nuevoAniosDeExp){
    aniosDeExp=nuevoAniosDeExp;
}
std::string Doctor::getEspecialidad(){
    return especialidad;
}

int Doctor::getAniosDeExp(){
    return aniosDeExp;
}
