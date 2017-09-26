#include <iostream>
using namespace std;
void nivel2(bool vec[], int tam);
int main()
{
		bool vec[1001];
		int limite = 1000;
		for(int ciclo=1;ciclo<1001;ciclo++)
			vec[ciclo]= true;
	cout<<"Primos."<<endl;
	nivel2(vec,limite);
	return 0;
}

void nivel2(bool vec[], int tam)
{
		for(int ciclo=2;ciclo<=1000;ciclo++)
		{
			if(vec[ciclo]==true)
				{
					for(int control =ciclo*2;control<=1000;control+=ciclo)
					{
						vec[control]= false;
						
					}
				}
		}
		for(int ciclo=0;ciclo<1000;ciclo++)
			if(vec[ciclo]==true)
				cout<<ciclo<<"-) "<<vec[ciclo]<<endl;
}
