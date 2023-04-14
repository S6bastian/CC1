#include <string>
#include "Persona.h"
#include "Paciente.h"

Paciente::Paciente(std::string Nombre,std::string Apellido,int Edad,std::string Genero,
            int Peso, float Altura, std::string EnfermedadC)
: Persona(Nombre,Apellido,Edad,Genero),peso(Peso), altura(Altura), enfermedad_c(EnfermedadC)
{};
void Paciente::setPeso(int nuevoPeso){
    peso=nuevoPeso;
}
void Paciente::setAltura(float nuevaAltura){
    altura=nuevaAltura;
}
void Paciente::setEnfermedadC(std::string nuevaEnfemerdadC){
    enfermedad_c=nuevaEnfemerdadC;
}

int Paciente::getPeso(){
    return peso;
}
float Paciente::getAltura(){
    return altura;
}
std::string Paciente::getEnfermedadC(){
    return enfermedad_c;
}
   