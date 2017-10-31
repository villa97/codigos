#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int dado();
void llenado(int vec[]);

int main()
{
	srand(time(NULL));
	int jugador1=0, jugador2=0, camino[100];
	llenado(camino);
	
	while(jugador1<=100 || jugador2<=100)
		{	
			int tirada=dado();
			cout<<jugador1<<"+"<<tirada<<endl;
			jugador1+=tirada;
				if(camino[jugador1]>0)
					if(camino[jugador1]==jugador1)
						jugador1+=camino[jugador1];
				else
					if(camino[jugador1]<0)
						if(camino[jugador1]==jugador1)
							jugador1-=camino[jugador1];
			int Tirada=dado();
			cout<<jugador2<<"+"<<Tirada<<endl<<"----------"<<endl;					
			jugador2+=Tirada;
				if(camino[jugador2]>1)
					jugador1+=camino[jugador2];
				else
					if(camino[jugador1]<0)
						jugador1-=camino[jugador2];
			
			if(jugador1>=100)
				{
					cout<<"Gano el jugador 1";
					return 0;
				}
			else
				if(jugador2>=100)
					{
						cout<<"Gano el jugador 2";
						return 0;
					}
		}
}

int dado()
{
	int a=1+rand()%6;
	return a;
}

void llenado(int vec[])
{
	for(int llenado=1;llenado<100;llenado++)
		vec[llenado]=0;	
	//Llenado de las serpientes divido entre 3
	vec[18]=-12;//1---baja---6
	vec[22]=-20;//2---baja---2
	vec[36]=-16;//3---baja---20
	vec[62]=-48;//4---baja---14
	vec[75]=-45;//5---baja---30
	vec[78]=-29;//6---baja---49
	vec[83]=-75;//7---baja---8
	vec[93]=-53;//8---baja---40
	vec[96]=-27;//9---baja---69
	//Llenado de las escaleras sumo 23
	vec[11]=28;//1---sube---39
	vec[17]=50;//2---sube---67
	vec[19]=26;//3---sube---45
	vec[21]=35;//4---sube---56
	vec[26]=24;//5---sube---50
	vec[43]=41;//6---sube---84
	vec[52]=24;//7---sube---76
	vec[70]=22;//8---sube---92
	vec[74]=26;//9---sube---100
}
