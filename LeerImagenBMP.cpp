#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char l1,l2;
	int size;
	int width;
	int height;
	ifstream archivo("c:\\datos\\datos.bmp", ios::binary);
	l1=archivo.get();
	l2=archivo.get();
	cout<<"1= "<<l1<<endl
		<<"2= "<<l2<<endl;
		
	archivo.read((char*)&size,4);
	cout<<"Size= "<<size<<endl;
	archivo.seekg(18,ios_base::beg);
	archivo.read((char *)&width,4);
	cout<<"Width= "<<width<<endl;
	archivo.read((char *)&height,4);
	cout<<"Height= "<<height<<endl;
	archivo.close();
	return 0;
}
