#include<iostream>
//#include<>
using namespace std;
void titulo(char cad[]);
int longitud(char c[]);
int main()
{
	char cad[200];
	cout<<"ingresa tu frase: ";
	cin.getline(cad, 200, '\n');
	titulo(cad);
}

void titulo(char cad[])
{
	int desp='a'-'z';
	int lon = longitud(cad);
	if(cad[0]>='a' && cad[0]<='z')
	cad[0]-=32;
	for(int c=0;c<lon;c++)
			if(cad[c]==' ')
				cad[c+1]-=32;
				
	for(int i=0;i<lon;i++)
		cout<<cad[i];
}

int longitud(char c[])
{
	int cont=0;
	for(;c[cont];cont++);
	return cont;
}
