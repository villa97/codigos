#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int menu();
int agregar(int valor,int vec[],int &control);
void mostrar(int vec[],int control);
int buscar(int valor,int vec[],int control );
int eliminar(int valor,int vec[],int &control);
int insertar(int valor,int vec[],int &control,int posicion);
int main()
{
	int opc,vec[15],crtl=0,busca=0;
	for(int ciclo=0;ciclo<15;ciclo++)
		vec[ciclo]=0;
		
	do{system("cls");
		opc=menu();
		switch(opc)
		{
				case 1:
					int Agregar;
					cout<<"----------Agregar----------"<<endl;
					cout<<"Ingresa el numero: "<<endl;
						cin>>Agregar;
					if (agregar(Agregar,vec,crtl)==0)
						cout<<"----ADVERTENCIA----"<<endl
						<<"Lista llena!!"<<endl;

					system("PAUSE");
					break;
				case 2:
					cout<<"----------Buscar----------"<<endl;
					mostrar(vec,crtl);
					system("PAUSE");
					break;
				case 3:
					int Buscar;
					cout<<"----------Buscar----------"<<endl
						<<"Ingresa el numero: "<<endl;
							cin>>Buscar;
						busca=buscar(Buscar,vec,crtl);
						if(busca!=-1)
							cout<<"Posicion ["<<busca<<"] = "<<vec[busca]<<endl;
						else
							cout<<"Lo sentimos tu busqueda no fue encontrada."<<endl;
						system("PAUSE");
					break;
				case 4:
					int Eliminar;
					cout<<"----------Eliminar----------"<<endl
						<<"Ingresa el numero: "<<endl;
							cin>>Eliminar;
						eliminar(Eliminar,vec,crtl);
						
						system("PAUSE");
					break;
				case 5:
					int Insertar,posicion;
					cout<<"----------Insertar----------"<<endl
						<<"Ingresa el numero: "<<endl;
							cin>>Insertar;
					cout<<"Ingresa la posicion: "<<endl;
							cin>>posicion;	
						insertar(Insertar,vec,crtl,posicion);
						
						system("PAUSE");
					break;
				case 0:
					opc=0;
					break;
		}
	}while(opc!=0);
}

int menu()
{
	int opc;
	do{system("cls");
		cout<<"1-Agregar"<<endl
			<<"2-Mostrar"<<endl
			<<"3-Buscar"<<endl
			<<"4-Eliminar"<<endl
			<<"5-Insertar"<<endl
			<<"0-Salir"<<endl;	
		cout<<"Ingresa tu seleccion: ";
		cin>>opc;
	}while(opc<0||opc>5);
	return opc;
}

int agregar(int valor,int vec[],int &control)
{
		if(control<15)
			{
				vec[control]=valor;
				control++;
				return 1;
			}
		else
			return 0;
		
}

void mostrar(int vec[],int control)
{
	for(int ciclo=0;ciclo<control;ciclo++)
		cout<<"Posicion ["<<ciclo<<"] = "<<vec[ciclo]<<endl;
}
int  buscar(int valor,int vec[],int control )
{
	// i x busqueda v0 1 2 3 4 5 6 7 8 9 control valor
	// 1 4   10       0 1 2 3 4 5 6 7 8 9   10     10
	int busqueda=0;
	while(vec[busqueda]!=valor && busqueda<control)
		{
			busqueda++;
		}	
	if (busqueda==control)
		return -1;
	else
		return busqueda;
}
int eliminar(int valor,int vec[],int &control)
{
	
	int pos=buscar(valor,vec,control);
	if (vec[pos]==valor)	
		{
			for(int ci=pos;ci<control;ci++)
				vec[ci]=vec[ci+1];
			control--;
		}
	else
		cout<<"No se encontraron resultados.";
	return 0;
}

int insertar(int valor,int vec[],int &control,int posicion)
{
	control++;
	int temporal=vec[control-1];
	
	for(int ci=posicion+1;ci<control;ci++)
		{
			vec[ci]=vec[ci-1];
			
		}
	vec[posicion]=valor;
}
