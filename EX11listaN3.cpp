//11. Escreva um algoritmo que leia 50 valores para um vetor de 50 posições. Mostre depois somente os positivos.

#include<conio.h>
#include<iostream>
#include<stdio.h>

using namespace std;

int v[10];

main(){
	cout<<"Digita'e:"<<endl;
	for(int i=0;i<10;i++){
		cout<<"\nValor numeraço ("<<i<<"):"<<endl;
		cin>>v[i];
	}
	for(int i=0;i<10;i++){
		if(v[i]>=0){
			cout<<"\n\n"<<v[i]<<endl;
		}
	}
	return 0;
}
