#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <iostream>
#include <string>
#include "Persona.h"
class Trabajador:public Persona{
public:
    Trabajador(std::string Nombre,std::string Apellido,int Edad,std::string Genero,
                int Sueldo,std::string Oficio,std::string Horario)
	:Persona(Nombre,Apellido,Edad,Genero),sueldo(Sueldo),oficio(Oficio), horario(Horario){}
    void setSueldo(int nuevoSueldo);
    void setOficio(std::string nuevoOficio);
    void setHorario(std::string nuevoHorario);
    int getSueldo()const;
    std::string getOficio()const;
    std::string getHorario()const;
private:
	int sueldo{0};
    std::string oficio,horario;
};
#endif
