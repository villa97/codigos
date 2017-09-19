#include<iostream>

using namespace std;
int main()
{
	float VecCalificacion[10];
	float promedio;
	for(int ciclo=0;ciclo<10;ciclo++)
		{
			cout<<"Ingresa la calificacion["<<ciclo<<"]:";
			cin>>VecCalificacion[ciclo];
		}
		
	for(int pro=0;pro<10;pro++)
		promedio+=VecCalificacion[pro];
	promedio/=10;
	cout<<"El promedio es: "<<promedio<<endl;
		
	cout<<"Las calificaciones mayores a tu promedio son:"<<endl;
	for(int a=0;a<10;a++)
		{
			if(promedio<=VecCalificacion[a])
				cout<<"["<<a<<"]"<<VecCalificacion[a]<<" "<<endl;
		}
	return 0;
}
