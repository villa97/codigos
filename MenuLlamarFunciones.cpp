#include<iostream>
#include <ctime>
using namespace std;
void Menu();
void llenar(int vec[], int tam);
void mostrar(int vec[], int tam);
void MostrarInverso(int vec[], int tam);
void girarArriba(int vec[], int tam);
void girarAbajo(int vec[], int tam);
void Invertir(int vec[], int tam);
int main()
{
	int vec[10],menu,tam=10;
	for(int ciclo=0;ciclo<10;ciclo++)
					vec[ciclo]=0;
	do{system("cls");
		Menu();
		cout<<"ingresa tu seleccion: ";
		cin>>menu;
		switch(menu)
		{
			case 1:
				llenar(vec,tam);
				system("PAUSE");
				break;
			case 2:
				mostrar(vec,tam);
				system("PAUSE");
				break;
			case 3:
				MostrarInverso(vec,tam);
				system("PAUSE");
				break;
			case 4:
				girarArriba(vec,tam);
				system("PAUSE");
				break;
			case 5:
				girarAbajo(vec,tam);
				system("PAUSE");
				break;
			case 6:
				Invertir(vec,tam);
				system("PAUSE");
				break;
			case 0:
				break;
			default:
				cout<<"Seleccion erronea";
		}
	}while(menu!=0);
	return 0;
}

void Menu()
{
	cout<<"--------Menu--------"<<endl
		<<"1-Llenar Vector"<<endl
		<<"2-Mostrar Vector."<<endl
		<<"3-Mostrar vector Inversamente"<<endl
		<<"4-Girar Arriba"<<endl
		<<"5-Girar Abajo"<<endl
		<<"6-Invertir"<<endl
		<<"0-Salir"<<endl;
}
void llenar(int vec[], int tam)
{
		for(int ciclo=0;ciclo<tam;ciclo++)
			vec[ciclo]=ciclo+1;;
}
void mostrar(int vec[], int tam)
{
		for(int ciclo=0;ciclo<tam;ciclo++)
			cout<<vec[ciclo]<<endl;
}
void MostrarInverso(int vec[], int tam)
{
		for(int ciclo=tam-1;ciclo>=0;ciclo--)
				cout<<vec[ciclo]<<endl;
}	
void girarArriba(int vec[], int tam)
{
	int temporal=vec[0];
		for(int ciclo=0;ciclo<tam;ciclo++)
			{
				if(ciclo+1==tam)
					vec[ciclo] = temporal;
				else
					vec[ciclo]=vec[ciclo+1];
			}	
}
void girarAbajo(int vec[], int tam)
{
	int temporal=vec[9];
		for(int ciclo=tam;ciclo>=0;ciclo--)
			{
				if(ciclo-1<0)
					vec[ciclo] = temporal;
				else
					vec[ciclo]=vec[ciclo-1];
			}	
}
void Invertir(int vec[], int tam)
{
	int temporal=0,cambio=tam;
		for(int ciclo=0;ciclo<tam/2;ciclo++)
			{
				temporal = vec[ciclo];
				vec[ciclo]=vec[cambio-1];
				vec[cambio-1]=temporal;
				cambio--;	
			}	
}
