#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int Menu();
int Dado();
void histograma(int lim);

int main()
{
	int menu, dado=0,ciclo,vec[6]={0},vec2[11]={0};
	srand(time(NULL));
	do{system("cls");
		menu=Menu();
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
						vec2[dado-2]++;
					}					
				for(int pinta=0;pinta<11;pinta++)
					{
						cout<<pinta+2<<".- "<<vec2[pinta]<<"]";
						histograma(vec2[pinta]);
					}
				system("PAUSE");
				for(ciclo=0;ciclo<12;ciclo++)
					vec2[ciclo]=0;
				break;
			}
	}while(menu!=0);
	return 0;
}

int Menu()
{
	int op;
	cout<<"--------MENU--------"<<endl
		<<"1-Lanzar 1 Dado."<<endl
		<<"2-Lanzar 2 Dado."<<endl
		<<"0-Salir."<<endl
		<<"--------------------"<<endl;
	do {
		cout<<"ingresa tu opcion valida:";
		cin>>op;
	}while (op<0 || op>2);
	return op;
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
