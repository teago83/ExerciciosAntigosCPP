//1. Elaborar um algoritmo que l� um conjunto de 30 valores e os coloca em 2 vetores conforme estes valores forem pares ou �mpares. O tamanho do vetor � de 5 
//posi��es. Se algum vetor estiver cheio, escrev�-lo. Terminada a leitura escrever o conte�do dos dois vetores. Cada vetor pode ser preenchido tantas vezes for 
//necess�rio.

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

using namespace std;

int v[30],vi[5],vp[5];
char op;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
		system("cls");
		cout<<"Digite os 30 valores doid�es:"<<endl;
		for(int i=0;i<30;i++){
			cout<<"\nValor n�mero ("<<i<<"):"<<endl;
			cin>>v[i];
			fflush(stdin);
		}
		for(int i=0;i<30;i++){
			if(v[i]%2==0){
				vp[i]==v[i];
				cout<<"\nValor par n�mero ("<<i<<"): "<<v[i]<<endl;
			}
			if(v[i]%2!=0){
				vi[i]==v[i];
				cout<<"\nValor impar n�mero ("<<i<<"): "<<v[i]<<endl;

			}
		}
		cout<<"\n\nGostaria de repetir o processo? (Responda com 'S' para 'sim' e 'N' para 'n�o')";
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
