#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int tortuga();
int liebre();

int main()
{
	int Tortuga = 0, Liebre = 0;
	srand(time(NULL));
		for(int pista=0;pista<=80;pista++)
			{
				
				if(Tortuga>80 && Liebre>80)
					cout<<"La tortuga y la liebre quedaron empates.";
				else
				{
					Tortuga+=tortuga();
					Liebre+=liebre();
					cout<<"Tortuga Casilla"<<pista<<": "<<Tortuga<<endl
						<<"Conejo Casilla"<<pista<<": "<<Liebre<<endl
						<<"--------------------------------------"<<endl;
						
				}
					if(Tortuga>80)
						{
							cout<<"El ganador es la tortuga"<<endl;
							return 0;
						}
					else
						if(Liebre>80)
							{
							cout<<"El ganador es la liebre"<<endl;
							return 0;
							}				
			}
}

int tortuga()
{
	int a=1+rand()%100;
	if(a<30)
		return 3;
	else
		if(a<80)
			return 1;
			else
				return -2;
}
int liebre()
{
	int a=1+rand()%100;
	if(a<20)
		return 9;
	else
		if(a<40)
			return 3;
			else
				if(a<60)
					return 0;
				else
					if(a<70)
						return -6;
					else
						return -9;
}
