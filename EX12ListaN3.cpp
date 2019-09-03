//12. Escreva um algoritmo que leia um vetor inteiro de 30 posições e crie um segundo vetor, substituindo os valores nulos por 1. Mostre os 2 vetores.

#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int v[30],vn;

int main(){
	cout<<"Digite os valores bem doidos pow:"<<endl;
	
	for(int i=0;i<30;i++){
		cout<<"\nValor numero ("<<i<<"):"<<endl;
		cin>>v[i];
			if(v[i]==0){
				v[i]=1;
				vn++;
			}
	}
	for(int i=0;i<30;i++){
		cout<<"\n"<<v[i];
	}
	cout<<"\n\nNumero de valores nulos: "<<vn;
	return 0;
}
