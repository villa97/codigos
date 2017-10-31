#include <iostream>
#include <stdio.h>
using namespace std;
void mostrar(int mat[][6],int Fila);
void llenado(int mat[][6],int vendedor,int producto,int venta);
void totalVendedor(int mat[][6],int Fila);
void totalproducto(int mat[][6],int Fila);
int main()
{
	int mat[5][6]={{0}},Fila=5;
	int ven=0,pro=0;
	char op;
		do{system("cls");
			int venta=0;
			cout<<"----------Llenado de datos de ventas----------"<<endl
				<<"Numero de vendedor: ";
				cin>>ven;
			cout<<"Numero de producto: ";
				cin>>pro;
			cout<<"Ingresa la venta: ";
				cin>>venta;
			llenado(mat,ven,pro,venta);
			cout<<"¿quieres agregar otra venta?(S/N)";
				cin>>op;
		}while(op=='S'||op=='s');
		totalVendedor(mat,Fila);
		totalproducto(mat,Fila);
		mostrar(mat,Fila);
}
void llenado(int mat[][6],int vendedor,int producto,int venta)
{
	mat[vendedor-1][producto-1]+=venta;
}
void totalVendedor(int mat[][6],int Fila)
{
		for(int fila=0;fila<Fila-1;fila++)
			{
				for(int columna=0;columna<6-1;columna++)
					{
						mat[fila][5]+=mat[fila][columna];
					}
			}
}
void totalproducto(int mat[][6],int Fila)
{	int a=0;
	for(int columna=0;columna<=5;columna++)
		{
			for(int fila=0;fila<4;fila++)
				{
					mat[4][a]+=mat[fila][columna];
				}
			a++;
		}
}
void mostrar(int mat[][6],int Fila)
{
	cout<<"            ";
		for(int a=0;a<6;a++)
		{
			if(a<5)
				cout<<"  Pro"<<a+1<<"] ";
			else
				cout<<"  Total";
		}
		cout<<endl;
		for(int fila=0;fila<Fila;fila++)
			{
				if(fila<4)
					cout<<"Vendedor"<<fila+1<<"]\t";
				else
					cout<<"Total    ]\t";	
				for(int columna=0;columna<6;columna++)
					{
						cout<<mat[fila][columna]<<"\t";
					}
				cout<<endl;
			}
}
