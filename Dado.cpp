#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int Dado();

int main()
{
	int vec[6]={0};
	srand(time(NULL));
	for(int ciclo=0;ciclo<100;ciclo++)
		{
			int dado=Dado();
			vec[dado-1]++;
		}
	for(int pinta=0;pinta<6;pinta++)
		cout<<"Cara "<<pinta+1<<": "<<vec[pinta]<<endl;
	return 0;
}

int Dado()
{
	int a=1+rand()%6;
	return a;
}
