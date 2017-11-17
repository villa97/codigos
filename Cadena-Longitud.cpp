#include <iostream>
#include <stdio.h>
using namespace std;
void mayusculas(char c1[]);
void minusculas(char c1[]);
/*int longitud(string c);
int main ()
{
	string c1,c2,c3;
	cout<<"ingresa 3 cadenas";
		cin>>c1,c2,c3;
		
	cout<<"Cadena 1:"<<c1<<"\t"<<"Con longitud de: "<<longitud(c1)<<endl
		<<"Cadena 2:"<<c2<<"\t"<<"Con longitud de: "<<longitud(c2)<<endl
		<<"Cadena 3:"<<c3<<"\t"<<"Con longitud de: "<<longitud(c3)<<endl;
	return 0;
}

int longitud(string c)
{
	int cont=0;
	for(;c[cont];cont++);
	return cont;
}*/
//crear 2 funciones, funcion mayusculas y funcion minusculas.
//investifar de las funciones "Copiar,concatenar y comparar".
int main()
{
	char c1[50];
	cout<<"Ingresa la cadena"<<endl;
	cin>>c1;
	mayusculas(c1);
	cout<<"Cadena nueva"<<endl
		<<c1<<endl;
	minusculas(c1);
	cout<<"Cadena nueva"<<endl
		<<c1<<endl;
	return 0;
}
void mayusculas(char c1[])
{
	int desp='a'-'A';
	for(int i=0;c1[i];i++)
		if(c1[i]>='a' && c1[i]<='z')	
			c1[i]-=desp;	
}
void minusculas(char c1[])
{
	int desp='a'-'A';
	for(int i=0;c1[i];i++)
		if(c1[i]>='A' && c1[i]<='Z')	
			c1[i]+=desp;	
}
