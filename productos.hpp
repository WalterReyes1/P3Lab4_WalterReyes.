#ifndef PRODUCTOS_HPP
#define PRODUCTOS_HPP
#include <string>
#include <iostream>

using namespace std;

class productos{
	private:
	int id;
	string nom;
	string categ;
	int cant;
	float precio;	
	
	public:
	productos();
	productos(int,string,int,string,float);
	~productos();
	int getId();
	string getNom();
	string getCateg();
	int getCant();
	float getPrecio();
	void setId(int);
	void setNom(string);
	void setCateg(string);
	void setCant(int);
	void setPrecio(float);
	string to_String();
	
	
};
#endif
