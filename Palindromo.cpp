#include<iostream>
using namespace std;
int longitud(char cad[]);
int palindromo(char cad[]);

//ORO
//ANITA LAVA LA TINA
int main()
{
	char cad[200];
	cout<<"ingresa tu frase: ";
	cin.getline(cad, 200, '\n');
	int l=palindromo(cad);
	if(l==1)
		cout<<"Tu frase es palindromo.";
	else
	cout<<"tu frase no es palindromo";
}

int palindromo(char cad[])
{
	for(int i=0;cad[i];i++)
		if(cad[i]>='A' && cad[i]<='Z')	
			cad[i]+=32;	
	int lon = longitud(cad);
	int l=0;
	for(int i=0;i<lon;i++)
		{	
			if(cad[i]==' ')
				i++;
			for(int c=lon;c>=0;c--)
				{
					if(cad[c]==' ')
						c--;
					if(cad[i]==cad[c])
						l=1;
					else
						l=-1;
				}
		}
	return l;
}

int longitud(char cad[])
{
	int cont=0;
	for(;cad[cont];cont++);
	return cont;
}
