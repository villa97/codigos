#include <iostream>
#include <stdlib.h>
using namespace std;
int comandos();

int main()
{
	int tort[20][20],Fila=20;
	int a=comandos();
	switch(a)
		{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
		}
}

int comandos()
{
	int comando=0;
	do{system("cls");
		cout<<"--CODIGO DE COMANDOS-----------"<<endl
			<<"1--Pluma hacia arriba"<<endl
			<<"2--Pluma hacia abajo"<<endl
			<<"3--Gira a la derecha"<<endl
			<<"3--Gira a la izquierda"<<endl
			<<"5--Avanza adelante"<<endl
			<<"6--Imprime el arreglo de 20 por 20"<<endl
			<<"7--Fin de datos (centinela)"<<endl
			<<"-------------------------------"<<endl;
		cout<<"Ingresa el numero del comando: ";
		cin>>comando;
	}while(comando<1||comando>7);
	return comando;
}
