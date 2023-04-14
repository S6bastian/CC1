#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>
#include "Persona.h"
class Paciente:public Persona{
    public:
        Paciente(std::string Nombre,std::string Apellido,int Edad,std::string Genero,
				 int Peso, float Altura, std::string EnfermedadC)
		: Persona(Nombre,Apellido,Edad,Genero){};
        void setPeso(int nuevoPeso);
        void setAltura(float nuevaAltura);
        void setEnfermedadC(std::string nuevaEnfemerdadC);

        int getPeso();
        float getAltura();
        std::string getEnfermedadC();
    private:
        int peso;
		float altura;
        std::string enfermedad_c;    
};
#endif
