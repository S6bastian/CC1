#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
class Persona {
public:
	Persona(std::string Nombre,std::string Apellido,int Edad,std::string Genero){}
	Persona(){};
	void setNombre(std::string Nombre);
	std::string getNombre()const;
	void setApellido(std::string Apellido);
	std::string getApellido()const;
	void setEdad(int Edad);
	int getEdad()const;
	void setGenero(std::string Genero);
	std::string getGenero()const;
	void displayDatos();
private:
	std::string personaNombre;
	std::string personaApellido;
	unsigned int personaEdad{1};
	std::string personaGenero;
};

#endif

