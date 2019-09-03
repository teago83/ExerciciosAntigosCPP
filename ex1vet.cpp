//1. Escreva um algoritmo que leia dois vetores com valores inteiros de 05 posições e faça a multiplicação dos elementos de mesmo índice, colocando o resultado 
//em um terceiro vetor. Mostre os dois vetores iniciais e o vetor resultante.

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

int vI[5],vII[5],vIII[5];
char op;

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	inicio:
	system("cls");
	cout<<"Digite o primeiro vetor:"<<endl;
	for(int i=0;i<5;i++){
		cout<<"\n Valor número ["<<i<<"]:"<<endl;
		cin>>vI[i];
	}
	cout<<"Digite o segundo vetor:"<<endl;
	for(int i=0;i<5;i++){
		cout<<"\n Valor número ["<<i<<"]:"<<endl;
		cin>>vII[i];
	}
	for(int i=0;i<5;i++){
		vIII[i]=vI[i]*vII[i];
		cout<<"\n Valor final (multiplicação) ["<<i<<"]:"<<vIII[i]<<endl;
	}
	cout<<"\n Deseja repetir o processo? (Responda com 'S' ou 'N')."<<endl;
	op=getche();
	op=toupper(op);
	switch(op){
		case'S':{goto inicio;}break;
		case'N':{return 0;}break;
	}
}
