#include<iostream>
#include<string.h>
using namespace std;
int buscar(char cad[],char bus[]);
int longitud(char cad[]);
int main()
{
	char cad[200],bus[20];
	int loncad=longitud(cad);
	cout<<"Ingresa la cadena: ";
	cin.getline(cad, 200, '\n');
	cout<<"Ingresa la palabra a buscar: ";
	cin>>bus;
	int ubi=buscar(cad,bus);
	
	if(ubi<0)
		cout<<"La palabra no se encontro.";
	else
		{
			int lonbus = longitud(bus);
			cout<<"La palabra se encontro en la siguientes posiciones."<<endl;
			for(int cont=ubi+1;cont<=lonbus+ubi;cont++)
				cout<<"["<<cont<<"]: "<<cad[cont]<<endl;	
		}
}

int buscar(char cad[],char bus[])
{
	int lonbus = longitud(bus);
	int contcad,contbus=0;
	for(contcad=0;cad[contcad];contcad++)
	{
		if(bus[contbus]==cad[contcad])
			{
			contbus++;
				if(contbus == lonbus)
					return (contcad-contbus);
			}
		else 
			contbus=0;
		}return -1;
}
int longitud(char c[])
{
	int cont=0;
	for(;c[cont];cont++);
	return cont;
}
