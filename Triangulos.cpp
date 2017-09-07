#include<iostream>
using namespace std;

void FuncionMenu();
int FuncionT1(int lim);
int FuncionT2(int lim);
int FuncionT3(int lim);
int FuncionT4(int lim);

int main()
{
	int menu,limite;
	do{system("cls");
	FuncionMenu();
	cout<<"Ingresa tu seleccion: ";
	cin>>menu;
		switch(menu)
		{
			case 1:
				cout<<"Ingresa el tamaño del triangulo: ";
				cin>>limite;
				FuncionT1(limite);
				system("PAUSE");
				break;
			case 2:
				cout<<"Ingresa el tamaño del triangulo: ";
				cin>>limite;
				FuncionT2(limite);
				system("PAUSE");
				break;
			case 3:
				cout<<"Ingresa el tamaño del triangulo: ";
				cin>>limite;
				FuncionT3(limite);
				system("PAUSE");
				break;
			case 4:
				cout<<"Ingresa el tamaño del triangulo: ";
				cin>>limite;
				FuncionT4(limite);
				system("PAUSE");
				break;
			case 5:
				cout<<"Ingresa el tamaño del triangulo: ";
				cin>>limite;
				FuncionT1(limite);
				cout<<endl;
				FuncionT2(limite);
				cout<<endl;
				FuncionT3(limite);
				cout<<endl;
				FuncionT4(limite);
				system("PAUSE");
				break;	
			case 0:
				menu = 0;
				break;
			default:
				cout<<"Seleccion invalida"<<endl;
				system("PAUSE");
		}
	}while(menu!=0);
	return 0;
}

void FuncionMenu()
{	
	cout<<"Menu-------------------------"<<endl;
	cout<<"1-Triangulo 1"<<endl;
	cout<<"2-Triangulo 2"<<endl;
	cout<<"3-Triangulo 3"<<endl;
	cout<<"4-Triangulo 4"<<endl;
	cout<<"5-Mostrar Todos"<<endl;
	cout<<"0-Salir"<<endl;
	cout<<"-----------------------------"<<endl;
}

int FuncionT1(int lim)
{
		for(int ciclo=1;ciclo<=lim;ciclo++)
		{
			for(int pinta=1;pinta<=ciclo;pinta++)
				cout<<"*";
			cout<<"\n";
		}
}

int FuncionT2(int lim)
{
	int c=lim;
		for(int ciclo=1;ciclo<=lim;ciclo++)
		{
			for(int pinta=1;pinta<=c;pinta++)
				cout<<"*";
			cout<<"\n";
			c--;
		}
}

int FuncionT3(int lim)
{
		for(int ciclo=0;ciclo<lim;ciclo++)
		{
			for(int espacio=ciclo;espacio<lim-1;espacio++)
				cout<<" ";
			for(int pinta=ciclo;pinta>=0;pinta--)
				cout<<"*";
		cout<<endl;
		}
}

int FuncionT4(int lim)
{
	int n=lim;
		for(int ciclo=1;ciclo<=lim;ciclo++)
		{
			for(int pinta=1;pinta<=n;pinta++)
				cout<<"*";
			n--;
			cout<<endl;
			if(ciclo<lim)
				for(int espacio=1;espacio<=ciclo;espacio++)
					cout<<" ";		
		}
}
