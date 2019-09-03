//3. Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo índice, colocando o resultado em um terceiro vetor. 
//Mostre o vetor resultante.

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

using namespace std;

int v[10],vi[10],vii[10];
char op;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
	system("cls");
	cout<<"Digite os valores do primeiro vetor."<<endl;
	for(int i=0;i<10;i++){
		cout<<"\nValor de número ("<<i<<"):"<<endl;
		cin>>v[i];
		fflush(stdin);
	}
	cout<<"\nDigite os valores do primeiro vetor."<<endl;
	for(int i=0;i<10;i++){
		cout<<"\nValor de número ("<<i<<"):"<<endl;
		cin>>vi[i];
		fflush(stdin);
	}
	for(int i=0;i<10;i++){
		vii[i]=v[i]*vi[i];
	}
	cout<<"\nPara o terceiro vetor, os valores igualar-se-ão a:"<<endl;
	for(int i=0;i<10;i++){
		cout<<"\nValor de número ("<<i<<"): "<<vii[i]<<endl;
	}
	cout<<"\nGostaria de repetir o processo? (Responda com 'S' para 'sim' e 'N' para 'não')";
	op=getche();
	op=toupper(op);
	switch(op){
		case'S':{
			goto comeco;
			break;
		}
		case'N':{
			return 0;
			break;
		}
	}
	}
	

