//David Villa Cervantes. 3°G Fac.Telematica
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
		int h,m,s,hf,mf,sf,Hj,Mj,Sj,jornada;
		float si,Sf;
		cout<<"Ingresa la hora de entrada"<<endl;//le pido que ingrese los datos de entrada
		cout<<"Hora:";cin>>h;//asigno la hora a la variable h
		cout<<"Minuto:";cin>>m;//asigno los minutos a la variable m
		cout<<"Segundo:";cin>>s;//asigno los segundos a la variable s
		si=((h*3600)+(m*60)+s);//hago la conversion de horas a segundos, minutos a segundos y los sumo a segundos iniciales(si).
		cout<<"Ingresa la hora de salida"<<endl;//le pido que ingrese los datos de salida
		cout<<"Hora:";cin>>hf;//asigno la hora a la variable h
		cout<<"Minuto:";cin>>mf;//asigno los minutos a la variable m
		cout<<"Segundo:";cin>>sf;//asigno los segundos a la variable s
		Sf=((hf*3600)+(mf*60)+sf);//hago la conversion de horas a segundos, minutos a segundos y los sumo a segundos finales(sf).
		
		cout<<"Tu jornada de trabajo \nInicio- "<<h<<":"<<m<<":"<<s<<"\nTermino- "<<hf<<":"<<mf<<":"<<sf;//confirmo sus datos de entrada y salida
		jornada=Sf-si;//le resto el total de segundos inciales a segundos finales, para tener la cantidad de segundos que trabajo
		if(jornada<0)//pregunto si jornada es menor a 0, osea de signo negativo
			jornada*=-1;//si es de signo negativo, se multiplicara por -1 para que quede como positivo
		Hj=jornada/3600;//hago la conversion de segundos a horas.
		Mj=((jornada%3600)/60);//hago la conversion de minutos a segundos, pero para ello saque el residuo de la division de las horas. 
		Sj=((jornada%3600)%60);//obtengo los segundos, para ello obtengo el residuo de ambas divisones anteriores, y el resultado son mis segundos.
		cout<<"\nTu jornada de trabajo fue de ("<<Hj<<":"<<Mj<<":"<<Sj<<") Horas de trabajo";//le muestro la cantidad de horas, minutos y segundos trabajados.
		
	return 0;
}
