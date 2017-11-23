#include<iostream>
using namespace std;
int contar(char cad[]);
void titulo(char cad[]);
int longitud(char c[]);
int palindromo(char cad[]);
int main()
{
	char cad[200];
	cout<<"ingresa tu frase: ";
	cin.getline(cad, 200, '\n');
	cout<<"Tu frase contiene "<<contar(cad)<<" palabras."<<endl;;
	titulo(cad);
	cout<<endl;
	int l=palindromo(cad);
	if(l==1)
		cout<<"Tu frase es palindromo.";
	else
	cout<<"tu frase no es palindromo";
}

int contar(char cad[])
{
	int lon = longitud(cad);
	int tam=1;
	for(int c=0;c<lon;c++)
			if(cad[c]>='a' && cad[0]<='z' || cad[c]>='A' && cad[c]<='Z')
				if(cad[c-1]==' ')
					tam++;
			
	return tam;
}
void titulo(char cad[])
{
	int lon = longitud(cad);
	for(int i=0;cad[i];i++)
		if(cad[i]>='A' && cad[i]<='Z')	
			cad[i]+=32;	
	cad[0]-=32;
	for(int c=0;c<lon;c++)
			if(cad[c]>='a' && cad[0]<='z' || cad[c]>='A' && cad[c]<='Z')
				if(cad[c-1]==' ')
					cad[c]-=32;

	for(int i=0;i<lon;i++)
		cout<<cad[i];
}

int palindromo(char cad[])
{
	for(int i=0;cad[i];i++)
		if(cad[i]>='A' && cad[i]<='Z')	
			cad[i]+=32;
	int lon = longitud(cad);
	int l=0;
	
	for(int i=0,c=lon;i<lon/2;i++,c--)
		{		
			
			
				if(cad[i]==' ')
					i++;
				if(cad[c]==' ')
					c--;
			
				if(cad[i]==cad[c])
					l=1;
				else
					l=-1;
			
			
		}
	return l;
}
// i               c
//012345678012345678
//anita lava la tina
int longitud(char c[])
{
	int cont=0;
	for(;c[cont];cont++);
	return cont;
}
