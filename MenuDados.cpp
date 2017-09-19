#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
void Menu();
int Dado();
void histograma(int lim);

int main()
{
	int menu, dado=0,ciclo,vec[6]={0},vec2[12]={0};
	srand(time(NULL));
	do{system("cls");
		Menu();
		cout<<"ingresa tu seleccion: ";
		cin>>menu;
		dado=0;
		switch(menu)
		{
			case 1:
				for(ciclo=0;ciclo<100;ciclo++)
					vec[Dado()-1]++;
									
				for(int pinta=0;pinta<6;pinta++)
					{
						cout<<pinta+1<<".- "<<vec[pinta]<<"]";
						histograma(vec[pinta]);
					}
				system("PAUSE");
				for(ciclo=0;ciclo<6;ciclo++)
					vec[ciclo]=0;
				break;
			case 2:
				for(ciclo=0;ciclo<100;ciclo++)
					{
						dado=(Dado()+Dado());
						vec2[dado-1]++;
					}					
				for(int pinta=0;pinta<12;pinta++)
					{
						cout<<pinta+1<<".- "<<vec2[pinta]<<"]";
						histograma(vec2[pinta]);
					}
				system("PAUSE");
				for(ciclo=0;ciclo<12;ciclo++)
					vec2[ciclo]=0;
				break;
			case 0:
				menu = 0;
				break;
			default:
				cout<<"Error de seleccion."<<endl;
				system("PAUSE");
		}
	}while(menu!=0);
	return 0;
}

void Menu()
{
	cout<<"--------MENU--------"<<endl
		<<"1-Lanzar 1 Dado."<<endl
		<<"2-Lanzar 2 Dado."<<endl
		<<"0-Salir."<<endl
		<<"--------------------"<<endl;
}

int Dado()
{
	int a = 0;
	a = 1+rand()%6;
	return a;
}

void histograma(int lim)
{
	for(int limi=0;limi<lim;limi++)
		cout<<"*";
	cout<<endl;
}
