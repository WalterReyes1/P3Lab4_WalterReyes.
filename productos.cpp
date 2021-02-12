#include "productos.hpp"
#include <string>
#include <iostream>
#include <vector>

productos::productos(){
	
}
productos::productos(int _id,string _nom,int _cant,string _categ,float _precio){
	this ->id = _id;
	this ->nom =  _nom;
	this ->categ = _categ;
	this -> cant = _cant;
	this -> precio = _precio;
}
productos::~productos(){
	
}
int productos::getId(){
	return this->id;
}
void productos::setId(int _id){
	this->id = _id;
}
string productos::getNom(){
	return this ->nom;
}
void productos::setNom(string _nom){
	this->nom = _nom;
}
string productos::getCateg(){
	return this->categ;
	
}
void productos::setCateg(string _categ){
	this->categ = _categ;
}
int productos::getCant(){
	return this->cant;
}
void productos::setCant(int _cant){
	this->cant = _cant;
}
float productos::getPrecio(){
	return this->precio;
}
void productos::setPrecio(float _precio){
	this->precio = _precio;
}
string productos::to_String(){
	string c = "";
	c+= "Id del producto: "+to_String(getId())+"\n";
	c+= "Nombre del producto: "+this->getNom()+"\n";
	c+= "Categoria: "+this->getCateg()+"\n";
	c+= "Cantidad: "+to_string(this->getCant())+"\n";
	c+= "Precio: "+to_string(this->getPrecio())+"\n";	
	return c;
}
