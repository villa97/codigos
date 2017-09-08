#include<iostream>
#include<math.h>
using namespace std;

double FormulaGeneral(double a, double b, double c,double &x1,double &x2);
int main()
{
	int a,b,c;
	double x1, x2;
		cout<<"Ingresa los valores de 'a', 'b', 'c'."<<endl;
		cout<<"a: ";cin>>a;
		cout<<"b: ";cin>>b;
		cout<<"c: ";cin>>c;
		if(FormulaGeneral(a,b,c,x1,x2)==1)
			cout<<"Math ERROR";
		else 
			cout<<"Resultado con Positivo = "<<x1<<endl<<"Resultado con Negativo = "<<x2;
	return 0;		
}

double FormulaGeneral(double a, double b, double c,double &x1,double &x2)
{
	double resultado=0,raiz=0;		
		raiz=((pow(b,2)) - (4*a*c));
		if(raiz<0)
			resultado = 1;
		else
			{
				x1=(-b+sqrt(raiz))/(2*a); 
				x2=(-b-sqrt(raiz))/(2*a);
			}
	return resultado;
}
