#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int funcion (int v[],int tam, int &may, int &men);
int main()
{
	int vec[3],tam=3,may,men;
	funcion(vec,tam,may,men);
	
	cout<<may<<endl<<men;
}

int funcion(int v[],tam, int &may, int &men)
{
	if(vec[0]<vec[1] && vec[1]<vec[2])
			men=vec[0];
			may=vec[2];
		else
			if(vec[0]>vec[1] && vec[1]>vec[2])
			men=vec[2];
			may=vec[0];				
}
