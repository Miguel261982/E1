//Creado por:Miguel Angel Bennett Valencia 
//Fecha:28/09/2022 
//Examen del Primer Parcial:FundDeProg 
//Curso:Tics "B" 


//Programa que permita sumar al usuario si un numero es mayor,menor o igual que otro numero 
#include<iostream>
using namespace std;
int main()
{
 //Declare las variables 
  float y,z;
  cout<<"Ingrese y : "; cin>>y;
  cout<<"Ingrese z : "; cin>>z;
  if(y==z)
	{
       cout<<"Son Iguales "<<endl;
	}else{
       if(y<z){
	 cout<<y<<" es el menor que "<<z<<"\n";
       }else{
	 cout<<z<<" es el menor que "<<y<<"\n";
          }
	}
    return 0;



}
