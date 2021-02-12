#ifndef INVENTARIO_HPP
/*#define INVENTARIO_HPP
#include <string>
#include <iostream>
#include <vector>
#include "productos.hpp"
using namespace std;

class inventario{
	private: 
	vector <productos> lista_productos;
	vector <string> lista_categoria;
	
	public:
		inventario();
		inventario( vector<string>,vector<productos>);
		vector<productos> getLista_producto;
		vector<string> getLista_categoria;
		void setLista_producto(vector);
		void setLista_categoria(vector);
		string toString();
		
};
#endif
