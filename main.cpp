#include <iostream>
#include <vector>
#include "productos.hpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int opcion = 0;
	
	while(opcion != 4){
		cout<<"1. Mantenimiento de productos "<<endl;
		cout<<"2. Estadísticas generales "<<endl; 
		cout<<"3. Busqueda por nombre"<<endl;
		cout<<"4. Salir "<<endl;
		cin>> opcion; 
		int opcion2= 0;
		if(opcion ==1){
			vector<productos*> producto;
			
			if(opcion2 == 1){
				cout<<"\n 1. Agregar Producto"<<endl;
				int id,cant;
				float precio;
				string nombre,categoria;
				cout<<"Ingrese id: "<<endl;
				cin>>id;
				cout<<"Ingrese Nombre: "<<endl;
				cin>>nombre;
				cout<<"Ingrese Cantidad: "<<endl;
				cin>>cant;
				cout<<"Ingrese Categoria: "<<endl;
				cin>>categoria;
				cout<<"Ingrese precio: "<<endl;
				cin >> precio;
				producto.push_back(new productos(id,nombre,cant,categoria,precio));
			}
			if(opcion2== 2){
				cout<<"\n 2. Modificar Producto"<<endl;
			}
			if(opcion2== 3){
				cout<<"\n 3. Eliminr Producto"<<endl;
			}
			
		}// fin de mantenimiento
		
		if(opcion == 2){
			cout<<"\n 2.Estadísticas generales"<<endl;
		}// fin de estadísticas
		
		if(opcion == 3){
			cout<<"\n 3.Busqueda por nombre "<<endl;
		}// fin de busqued por nombre
		
		
	}
	
	return 0;
}
