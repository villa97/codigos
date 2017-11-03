#include <iostream>
#include <stdlib.h>
using namespace std;
void datos(int tort[][20],int giro,int &fila, int &columna,int Avanza,int pluma);
int comandos();
int PlumaArriba();
int PlumaAbajo();
void GirarDerecha(int &giro);
void GirarIzquierda(int &giro);
void avanza(int tort[][20],int giro,int &fila, int &columna,int Avanza,int pluma);
void muestra(int tort[][20]);
int main()
{
	int tort[20][20]={{0}},Fila=20,pluma=0,giro=3,fila=0,columna=0,Avanza,a;
	
	do{system("cls");
		datos(tort,giro,fila,columna,Avanza,pluma);
		a=comandos();
		if(a==2)
			{
			pluma=1;
			
			}
		if(a==1)
			pluma=0;
		switch(a)
			{
				case 3:
					GirarDerecha(giro);
					break;
				case 4:
					GirarIzquierda(giro);
					break;
				case 5:
					cout<<"cuanto quieres avanzar: ";
					cin>>Avanza;
					avanza(tort,giro,fila,columna,Avanza,pluma);
					system("PAUSE");
					break;
				case 6:
					muestra(tort);
					system("PAUSE");
					break;
				case 7:
					break;
			}
		}while(a!=0);
}

int comandos()
{
	int comando=0;
	do{
		cout<<"--CODIGO DE COMANDOS-----------"<<endl
			<<"1--Pluma hacia arriba"<<endl
			<<"2--Pluma hacia abajo"<<endl
			<<"3--Gira a la derecha"<<endl
			<<"4--Gira a la izquierda"<<endl
			<<"5--Avanza adelante"<<endl
			<<"6--Imprime el arreglo de 20 por 20"<<endl
			<<"7--Fin de datos (centinela)"<<endl
			<<"-------------------------------"<<endl
			<<"Nota: el giro significa la mirada hacia el Horizonte"<<endl
			<<"0--Salir"<<endl;
		cout<<"Ingresa el numero del comando: ";
		cin>>comando;
	}while(comando<0||comando>7);
	return comando;
	
}
void datos(int tort[][20],int giro,int &fila, int &columna,int Avanza,int pluma)
{
	cout<<" -------------------------------------------------------------------"<<endl
		<<"| Horizonte: "<<giro<<"|"<<"   "<<"Recorrido: "<<Avanza<<"|"<<"   "
		<<"Fila: "<<fila<<"|"<<"   "<<"Columna: "<<columna<<"|"<<"   "
		<<"Pluma: "<<pluma<<" |"<<endl
		<<" -------------------------------------------------------------------"<<endl;	
}
void GirarDerecha(int &giro)
{
	giro--;
	if(giro<1)
		giro=4;
}
void GirarIzquierda(int &giro)
{
	giro++;
	if(giro>4)
		giro=1;
}

void avanza(int tort[][20],int giro,int &fila, int &columna,int Avanza,int pluma)
{
	if(giro==3)
		{Avanza+=columna;
			for(;columna<Avanza && columna<20;columna++)
				if(pluma==1)
					tort[fila][columna]=1;
				if(columna==20)
					columna=19;
		}
	else
		if(giro==1)
			{Avanza-=columna;
				if(Avanza<0)
					Avanza*=-1;
				for(;columna>Avanza && columna>=0;columna--)
					if(pluma==1)
						tort[fila][columna]=1;
				if (columna<0)
					columna=0;
			}
		else
			if(giro==2)
				{Avanza+=fila;
					for(;fila<Avanza && fila<20;fila++)
						if(pluma==1)
							tort[fila][columna]=1;
						if(fila==20)
							fila=19;		
				}	
			else
				{Avanza-=fila;
				if(Avanza<0)
					Avanza*=-1;
					for(;fila>Avanza && fila>=0;fila--)
						if(pluma==1)
							tort[fila][columna]=1;
						if(fila<0)
							fila=0;	
				}	
	
}
void muestra(int tort[][20])
{
	for(int f=0;f<20;f++)
		{
			for(int c=0;c<20;c++)
				{
					if(tort[f][c]==1)
						cout<<tort[f][c]<<",";
					else
						cout<<" ,";
				}
			cout<<endl;
		}
}
