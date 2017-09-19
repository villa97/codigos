#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
void histograma(int tam);

int main()
{
	srand(time(NULL));	
	for(int i=1;i<=5;i++)
		histograma(1+rand()%50);
}

void histograma(int tam)
{
	cout<<tam<<")	";
	for(int i=1;i<=tam;i++)
		cout<<"*";
	cout<<endl;
}
