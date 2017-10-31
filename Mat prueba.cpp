#include <iostream>
#include <stdlib.h>

using namespace std;
void Menu();
void LlenaMat(int mat[][5],int a);
void mostrar(int mat[][5],int a);
void mostrarDP(int mat[][5],int a);
void mostrarDS(int mat[][5],int a);
void mostrarAbDP(int mat[][5],int a);
void mostrarArDP(int mat[][5],int a);
void mostrarAbDS(int mat[][5],int a);
void mostrarArDS(int mat[][5],int a);
void girarSDP(int mat[][5],int a);
void girarSDS(int mat[][5],int a);
int main()
{
	int mat[5][5]={0},a=5,menu;
	do{system("cls");
		Menu();
		cout<<"ingresa tu seleccion: ";
		cin>>menu;
		switch(menu)
		{
			case 1:
				LlenaMat(mat,a);
				system("PAUSE");
				break;
			case 2:
				mostrar(mat,a);
				system("PAUSE");
				break;
			case 3:
				mostrarDP(mat,a);
				system("PAUSE");
				break;
			case 4:
				mostrarDS(mat,a);
				system("PAUSE");
				break;
			case 5:
				mostrarAbDP(mat,a);
				system("PAUSE");
				break;
			case 6:
				mostrarArDP(mat,a);
				system("PAUSE");
				break;
			case 7:
				mostrarAbDS(mat,a);
				system("PAUSE");
				break;
			case 8:
				mostrarArDS(mat,a);
				system("PAUSE");
				break;
			case 9:
				girarSDP(mat,a);	
				system("PAUSE");
				break;
			case 10:
				girarSDS(mat,a);
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
		<<"1-Llenar Matris"<<endl
		<<"2-Mostrar Matriz."<<endl
		<<"3-Mostrar Diagonal principal"<<endl
		<<"4-Mostrar Diagonal Secundaria"<<endl
		<<"5-Mostrar Abajo de diagonal principal"<<endl
		<<"6-Mostrar Arriba de diagonal principal"<<endl
		<<"7-Mostrar Abajo de diagonal secundaria"<<endl
		<<"8-Mostrar Arriba de diagonal secundaria"<<endl
		<<"9-Girar sobre diagonal principal"<<endl
		<<"10-Girar sobre diagonal secundaria"<<endl
		<<"0-Salir"<<endl;
}
void LlenaMat(int mat[][5],int a)
{
	int r=1;
	for(int fila=0;fila<a;fila++)
		for(int columna=0;columna<5;columna++)
				mat[fila][columna]=r++;
}

void mostrar(int mat[][5],int a)
{
	for(int fila=0;fila<a;fila++)
	{
		for(int columna=0;columna<5;columna++)
				cout<<"  "<<mat[fila][columna];
		cout<<endl;
	}
}

void mostrarDP(int mat[][5],int a)
{
	cout<<"Diagonal principal"<<endl;
	for(int fila=0;fila<a;fila++)
	{
		cout<<mat[fila][fila]<<",";
	}
}

void mostrarDS(int mat[][5],int a)
{
	cout<<endl<<"Diagonal secundaria"<<endl;
	for(int fila=0,r=4;fila<a;fila++,r--)
		cout<<mat[fila][r]<<",";
}

void mostrarAbDP(int mat[][5],int a)
{
	cout<<endl<<"Abajo Diagonal principal"<<endl;
	for(int fila=1;fila<a;fila++)
		{
			for(int columna=0;columna<fila;columna++)
				cout<<mat[fila][columna]<<",";
			cout<<endl;
		}
}

void mostrarArDP(int mat[][5],int a)
{
	cout<<endl<<"Arriba Diagonal principal"<<endl;
	for(int fila=0;fila<a;fila++)
		{
			for(int columna=4;columna>fila;columna--)
				cout<<mat[fila][columna]<<",";
			cout<<endl;
		}
}

void mostrarAbDS(int mat[][5],int a)
{
	cout<<endl<<"Abajo Diagonal secundaria"<<endl;
	for(int fila=1;fila<a;fila++)
		{
			for(int columna=fila,r=1;columna>0;columna--,r++)
				cout<<mat[fila][a-r]<<",";
			cout<<endl;
		}
}

void mostrarArDS(int mat[][5],int a)
{
	cout<<endl<<"Arriba Diagonal secundaria"<<endl;
	for(int fila=0;fila<a;fila++)
		{
			for(int columna=3-fila;columna>=0;columna--)
				cout<<mat[fila][columna]<<",";
			cout<<endl;
		}
}

void girarSDP(int mat[][5],int a)
{
	int temp=0;
	for(int fila=0;fila<a-1;fila++)
			for(int columna=fila+1;columna<a;columna++)
				{
					temp=mat[fila][columna];
					mat[fila][columna]=mat[columna][fila];
					mat[columna][fila]=temp;
				}
}

void girarSDS(int mat[][5],int a)
{
	int tem=0;
	for(int fila=0,c=a-1;fila<a-1;fila++,c--)
		for(int columna=0,b=a-1;columna<a-fila;columna++,b--)
			{
				tem=mat[fila][columna];
				mat[fila][columna]=mat[b][c];
				mat[b][c]=tem;
			}
}
