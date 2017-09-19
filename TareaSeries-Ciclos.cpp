#include<iostream>
#include<math.h>
using namespace std;

void FuncionMenu();
double Cos(double cos,double x);
double Sen(double sen,double x);
double Log(double log,double x);
double Factorial(double fac);
int main()
{
	int menu;
	double lim, x;
		do{system("cls");
			FuncionMenu();
			cout<<"Ingresa tu seleccion: ";
			cin>>menu;
			switch(menu)
				{
					case 1:
						cout<<"Ingresa el limite de terminos: "; 	cin>>lim;
						cout<<"Ingresa el valor de X: ";  	cin>>x;
						cout<<"Sen(x) = "<<Sen(lim,x)<<endl;
						system("PAUSE");
						break;
					case 2:
						cout<<"Ingresa el limite de terminos: ";   cin>>lim;
						cout<<"Ingresa el valor de X: ";   cin>>x;
						cout<<"Cos(x) = "<<Cos(lim,x)<<endl;
						system("PAUSE");
						break;
					case 3:
						cout<<"Ingresa el limite de terminos: ";   cin>>lim;
						cout<<"Ingresa el valor de X: ";	cin>>x;
						cout<<"Log(x) = "<<Log(lim,x)<<endl;
						system("PAUSE");
						break;
					case 0:
						menu = 0;
						break;
					default:
						cout<<"Seleccion Invalida"<<endl;
				}
		}while(menu!=0);
}

void FuncionMenu()
{
	cout<<"--------------------Menu--------------------"<<endl
		<<"|            1.-Calcular Sen               |"<<endl
		<<"|            2.-Calcular Cos               |"<<endl
		<<"|            3.-Calcular Loragitmo         |"<<endl
		<<"|            0.-Salir                      |"<<endl
		<<"--------------------------------------------"<<endl;
	/*cout<<"----------------------------------Menu----------------------------------"<<endl
		<<"|1.-Calcular Sen    2.-Calcular Cos    3.-Calcular Loragitmo   0.-Salir|"<<endl
		<<"------------------------------------------------------------------------"<<endl;	*/
}
double Factorial(double fac)
{
	double fact=1;
	for(double ciclo=1;ciclo<=fac;ciclo++)	
		fact*=ciclo;
	return fact;
}
double Sen(double sen,double x)
{
	double resultado=0;
	double a=3;
	int signo=-1;
	for(double terminos = 1; terminos<=sen;terminos++)
		{
			resultado += ((pow(x,a))/Factorial(a))*signo;
			a+=2;
			signo*=-1;
		}
	resultado += x;
	return resultado;
}
double Cos(double cos,double x)
{
	double resultado=0;
	int a=2, signo=-1;
	for(double terminos=1;terminos<=cos;terminos++)
		{
			resultado += ((pow(x,a))/Factorial(a))*signo;
			a+=2;
			signo*=-1;
		}
	resultado += x;
	return resultado;
}
double Log(double log,double x)
{
	double resultado=0;
	for(double terminos=1;terminos<=log;terminos++)
		{
			resultado += ((pow(((log -1)/log),terminos)) * (1/terminos));		
		}
	resultado += x;
	return resultado;
}
