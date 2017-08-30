#include <iostream>
using namespace std;

int main()
{
	int seleccion;
	do
	{system("cls");
		cout<<"Ingresa una seleccion del menu------------------"<<endl;
		cout<<"1.-Numero primo                                |"<<endl;
		cout<<"2.-Factorial de un numero                      |"<<endl;
		cout<<"3.-Promedio                                    |"<<endl;
		cout<<"0.-Salir                                       |"<<endl;
		cout<<"------------------------------------------------"<<endl;
		cin>>seleccion;
		
			switch(seleccion)
			{
				case 1:
					system("cls");//limpio pantalla
					int numpri,div;//declaro la variable donde voy a guardar el numero ingresado, y la variable para contar cuantas veces se divide.
					cout<<"Seleccion Numero Primo---------------------------------------"<<endl;//menu de cabezal
					cout<<"Ingresa un numero:";//pido el numero
					cin>>numpri;//lo almaceno 
					if(numpri<0)//comparo que no sea negativo
					numpri*=-1;//si lo es multiplico por -1 y lo hago positivo
					div=0;//el control de divisiones lo igualo a cero
					for(int cont=1;cont<(numpri+1);cont++)//inicio ciclo de las diviciones
						{
							if(numpri%cont==0)//digo que si su divicion no tiene residuo(osea no es divisible)
							div++;//aumenta 1 en la cantidad de divisiones
						}
					if(div!=2)//digo que si la cantidad de divisiones es diferente a 2(osea mas de 2)
						cout<<"No es primo"<<endl;//entonces el numero no es primo
					else
						cout<<"Es primo"<<endl;//pero si solo es 2 si es primo
					system("PAUSE");//hago una pausa para mostrar el resultado.
				break;
				
				case 2:
					system("cls");//limpio pantalla
					int numfac;//creo variable donde guardare el numero ingresado
					long  RF;//Creo variable donde almacenar el Resuldo Factorial
					cout<<"Seleccion Factorial de un numero (!N)---------------------------------------"<<endl;
					cout<<"Ingresa un numero:";//Pido numero
					cin>>numfac;//lo almaceno
					RF=1;//inicio la variable en 1 para que la multiplicacion no de 0
					cout<<numfac<<"!= ";//pinto la primer parte del msj (numero ingresado mas los signos ! y =) ejemplo: 5!=
					for(int cont=1;cont<=numfac;cont++)//ciclo para hacer el calculo
						{
							RF*=cont;//multiplico y almaceno
							cout<<cont;//pinto el contador
							if(cont<numfac)//digo que si el contador sigue siendo menor al numero ingresado
							cout<<" X ";//se píntara la X para simular la multiplicacion
						}
						cout<<" = "<<RF<<endl;//pinto el signo = y el resultado del factorial
					system("PAUSE");//hago una pausa para mostrar el resultado
				break;
				
				case 3:
					system("cls");//limpio pantalla
					float cal,pro;//declaro variables para la calificacion y promedio en float para aceptar decimales
					int total,fin;//declaro las variables para contar cuantas calificaciones ingresaron y identificar cuando sea una negativa y detener el proceso
					cout<<"Seleccion Promedio de calificacion---------------------------------------"<<endl;
					cout<<"Ingresa las calificaciones"<<endl;//pido las calificaciones
					pro=0;//promedio lo igualo a cero para no tener basura en la variable
					fin=0;//el fin lo igualo a 1 para que cuando sea negativo valdra 0 y se terminara de ejecutar el proceso
					total=0;//el total lo igualo a cero para no tener basura dentro de el
					while(!fin)//digo que while se ejecutara mientras que la variable fin  no sea cero
					{
						cout<<"Calificacion:";//pido la calificacion
						cin>>cal;//la almaceno
						if(cal<0)//verifico que el numero ingresado  no sea menor a cero osea negativa
							fin=1;//si es menor a cero osea negativa fin lo igualo a cero para terminar el proceso
						else//si el numero ingresado no es negativo entonces hago lo siguiente.
							{
								pro+=cal;//almaceno en promedio la suma de las calificaciones
								total++;//aumento el contador de las calificaciones
							}
					}
					pro/=total;////promedio lo divido entre el total de calificaciones
					cout<<"El primedio es: "<<pro<<endl;//muestro el promedio
					system("PAUSE");//hago la pausa
					break;
				case 0:
				break;
				default:
				cout<<"Error en seleccion."<<endl;
				system("PAUSE");//hago la pausa
			}
	}
	while(seleccion != 0);//todo el ciclo se repite mientras que el usuario no seleccione cero o salir
	return 0;
		
}
