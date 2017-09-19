#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int Aleatorio();

int main()
{
	int aleatorio = Aleatorio();
	srand(time(NULL));
	
	cout<<"Aleatorios";
	
	for (int i=0;i<10;i++)
		cout<<Aleatorio()<<" ";
	cout<<"   Fin aleat";
	int num,oportunidad=1;
	
	do{
		cout<<"----------Adivina el numero generado----------"<<endl
			<<"Ingresa un numero: ";
		cin>>num;
		if(num==aleatorio)
		{
			cout<<"Felicidades, atinaste el numero generado."<<endl<<"Lo lograste en "<<oportunidad<<" oportunidades"<<endl;
			return 0;	
		}
		else
		{
			if(num<aleatorio)
			{
				cout<<"----------UYYYYYY QUE MALA SUERTE----------"<<endl
					<<"El numero que ingresaste es MENOR que el numero generado."<<endl
					<<"Intentalo de nuevo."<<endl; 
				oportunidad++;
				system("PAUSE");	
			}
			else
			{
				cout<<"----------UYYYYYY QUE MALA SUERTE----------"<<endl
					<<"El numero que ingresaste es MAYOR que el numero generado."<<endl
					<<"Intentalo de nuevo."<<endl; 
				oportunidad++;
				system("PAUSE");		
			}
		}
	}while(num!=aleatorio);
	
	
	return 0;	
}

int Aleatorio()
{
	
	int a=1+rand()%1000;
	return a;
}
