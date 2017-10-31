//Hacer con Vector y pintar como matriz
#include <iostream>
#include <stdlib.h>
using namespace std;
int  menu();
void LlenadoDato(float mat[][6]);
void llenado(float mat[][6],int persona, int mes, float peso);
void mostrar(float mat[][6],int per);
int main()
{
	int  per=5,a=0;
	float mat[5][6]={{0}};
	do{system("cls");
		a=menu();
		switch(a)
			{
				case 1:
					LlenadoDato(mat);
				break;
				case 2:
					mostrar(mat,per);
					system("PAUSE");
				break;
				case 0:
				break;
			}
	}while(a!=0);
}
int menu()
{
	int opc;
	do{
		cout<<"--Menu-------------------------------"<<endl
			<<"1--Ingresar dato"<<endl
			<<"2--Mostrar"<<endl
			<<"0--Salir"<<endl
			<<"-------------------------------------"<<endl
			<<"Ingresa la seleccion: ";
			cin>>opc;
	}while(opc<0||opc>2);
	return opc;
}

void LlenadoDato(float mat[][6])
{
	int  persona=0,mes=0;
	float peso=0; 
	char op;
	do{system("cls");
		cout<<"--Llenado de control-----------------"<<endl
			<<"Persona: ";
			cin>>persona;
		cout<<"Mes: ";
			cin>>mes;
		cout<<"Peso (Kg): ";
			cin>>peso;
		llenado(mat,persona,mes,peso);
		cout<<"¿Deceas registrar otro dato?(S/N): ";
			cin>>op;
	}while(op=='S'||op=='s');	
}
void llenado(float mat[][6],int persona, int mes, float peso)
{
	mat[persona-1][mes-1]=peso;
}

void mostrar(float mat[][6],int per)
{
	for(int persona=0;persona<per;persona++)
	{
		cout<<"--persona "<<persona+1<<endl;
		for(int mes=0;mes<6;mes++)
			cout<<"[Mes "<<mes+1<<"]"<<mat[persona][mes]<<endl;
	}
}
