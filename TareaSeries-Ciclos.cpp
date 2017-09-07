#include<iostream>
#include<math.h>
using namespace std;

void FuncionMenu();
float Cos(float cos);
float Sen(float sen);
float Log(float log);
int Factorial(int fac);
int main()
{
	int menu;
	float lim;
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
						Cos(lim);
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
int Factorial(int fac)
{
	int fact=1;
	for(int ciclo=1;ciclo<=fac;ciclo++)	
		fact*=ciclo;
	return fact;
}
float Sen(float sen)
{
	float resultado=1;
	cout<<"Sen(x) ";
	int a=3;
	for(int terminos = 1; terminos<=sen;terminos++)
		{
			resultado += ((pow(sen,a))/Factorial(a));
			a+=2;
		}
	cout<<" = "<<resultado<<endl;
}
float Cos(float cos)
{
	float resultado=1;
	cout<<"Cos(x)";
	int a=2;
	for(int terminos=1;terminos<=cos;terminos++)
		{
			resultado += ((pow(cos,a))/Factorial(a));
			a+=2;
		}
	cout<<" = "<<resultado<<endl;
}
float Log(float log)
{
	float resultado=0;
	cout<<"Log(x)";
	for(float terminos=1;terminos<=log;terminos++)
		{
			//float a=(log -1)/log;
			resultado += ((pow(((log -1)/log),terminos)) * (1/terminos));		
		}
	cout<<" = "<<resultado<<endl;
}
