#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
void histogramacara(int cara);
void histogramasello(int sello);
void Lanzamiento(int lado);
int main()
{
	int cara=0, sello=0;
	srand(time(NULL));
	for(int i=1;i<=100;i++)
		{
			int a=rand()%2;
			if(a!=0)
				cara++;
			else
				sello++;
		}
		
	cout<<"cara = "<<cara;histogramacara(cara);
	cout<<endl;
	cout<<"Sello= "<<sello;histogramasello(sello);
}

void histogramasello(int sello)
{
	for(int i=1;i<=sello;i++)
		cout<<"*";
}

void histogramacara(int cara)
{
	for(int i=1;i<=cara;i++)
		cout<<"*";
}
