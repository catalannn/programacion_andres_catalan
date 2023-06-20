#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	int indice,a;
	char frase[50];
	
	cout<<"Ingrese una frase: "<<endl;
	cin>>frase;
	
	for(a=0;a<50;a++)
	{
		if(frase[a]=='\0')
		{
			indice=a;
			break;
		}
	}
	
	cout<<"La frase al reves es: "<<endl;
	
	for(a=indice-1;a>=0;a--)
	{
		cout<<frase[a];
	}
	
}
