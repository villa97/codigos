#include<iostream>
#include<math.h>
using namespace std;

void FuncionMenu();
double Cos(double cos);
double Sen(double sen);
double Log(double log);
double Factorial(double fac);
int main()
{
	int menu;
	double lim;
		do{system("cls");
			FuncionMenu();
			cout<<"Ingresa tu seleccion: ";
			cin>>menu;
			switch(menu)
				{
					case 1:
						cout<<"Ingresa el limite de terminos: ";
						cin>>lim;
						Sen(lim);
						system("PAUSE");
						break;
					case 2:
						cout<<"Ingresa el limite de terminos: ";
						cin>>lim;
						cout<<Cos(lim);
						system("PAUSE");
						break;
					case 3:
						cout<<"Ingresa el limite de terminos: ";
						cin>>lim;
						Log(lim);
						system("PAUSE");
						break;
					case 0:
						menu = 0;
						break;
					default:
						cout<<"Seleccion Invalida"<<endl;
				}
		}while(menu!=0);
	return 0;
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
double Sen(double sen)
{
	double resultado=1;
	cout<<"Sen(x) ";
	double a=3;
	for(double terminos = 1; terminos<=sen;terminos++)
		{
			resultado += ((pow(sen,a))/Factorial(a));
			a+=2;
		}
	cout<<" = "<<resultado<<endl;
	return resultado;
}
double Cos(double cos)
{
	double resultado=1;
	cout<<"Cos(x)";
	int a=2;
	for(double terminos=1;terminos<=cos;terminos++)
		{
			resultado += ((pow(cos,a))/Factorial(a));
			a+=2;
		}
	cout<<" = "<<resultado<<endl;
}
double Log(double log)
{
	double resultado=0;
	cout<<"Log(x)";
	for(double terminos=1;terminos<=log;terminos++)
		{
			resultado += ((pow(((log -1)/log),terminos)) * (1/terminos));		
		}
	cout<<" = "<<resultado<<endl;
}
