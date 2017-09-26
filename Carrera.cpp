#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int correr();

int main()
{
	int posicion1,posicion2;
		srand(time(NULL));
		cout<<"Inicio de carrera"<<endl;
		for(int ciclo=0;ciclo<100;ciclo++)
			{
				
				posicion1 += correr();
				posicion2 += correr();
				if(posicion1<100 && posicion2<100)
				{
					cout<<"La posicicon del jugador 1 es: "<<posicion1<<endl;
					cout<<"La posicicon del jugador 2 es: "<<posicion2<<endl;
					cout<<"--------------------------------"<<endl;	
				}
				if(posicion1>100 && posicion2>100)
				{
					cout<<"Ambos jugadores estan empatados";
					return 0;
				}
				else if(posicion1>100)
				{
					cout<<"El ganador es el corredor 1"<<" con "<<posicion1<<" metros recorridos";
					return 0;
				}
				else  if(posicion2>100)
				{
					cout<<"El ganador es el corredor 2"<<" con "<<posicion2<<" metros recorridos";
					return 0;			
				}				
				
			}
}

int correr()
{
	int a = 0;
		a = 1+rand()%100;
	
	if(a<=30)
		return 1;
	else 
		if(a>30 && a<=80)
			return 2;
			else
				return 3;
}
