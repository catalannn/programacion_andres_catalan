#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	
	char palabra[35];
	int si,a=0,e=0,j=0,o=0,u=0;
		
		cout<<"ingrese palabra: "; gets(palabra);
		
		strlwr(palabra);
		si = strlen(palabra);
		
		for(int i=0;i<si;i++)
			{
				switch (palabra[i]){
					case 'a': a++; break;
					case 'e': e++; break;
					case 'i': j++; break;
					case 'o': o++; break;
					case 'u': u++; break;
				}
			}
	cout<<"la letra a sale: "<<a<<" la e: "<<e<<" la i: "<<j<<" la o: "<<o<<" u: "<<u<<endl;
	return 0;}

