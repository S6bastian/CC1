#ifndef DOCTOR_H
#define DOCTOR_H
#include "Trabajador.h"
class Doctor:public Trabajador{
public:
    Doctor(std::string Nombre,std::string Apellido,int Edad,std::string Genero,
            int Sueldo,std::string Oficio,std::string Horario,
            std::string Especialidad, int AniosDeExp) 
    :Trabajador(Nombre,Apellido,Edad,Genero,Sueldo,Oficio,Horario){}

    void setEspecialidad(std::string nuevaEspecialidad);
    void setAniosDeExp(int nuevoAniosDeExp);
    std::string getEspecialidad();
    int getAniosDeExp();
private:
    std::string especialidad,gradoDeEspecialidad;
    unsigned int aniosDeExp;
};
#endif
