//5. Fa�a um algoritmo que leia um vetor S[20] e uma vari�vel A. A seguir, mostre o produto da vari�vel A pelo vetor.


#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

using namespace std;

int v[20],A;
char op;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
	system("cls");
	cout<<"Digite os valores do vetor."<<endl;
	for(int i=0;i<20;i++){
		cout<<"\nValor de n�mero ("<<i<<"):"<<endl;
		cin>>v[i];
		fflush(stdin);
	}
	cout<<"\nDigite o valor desejado para a vari�vel A:"<<endl;
	cin>>A;
	cout<<"\nNovos valores, ap�s ter sido feita a multiplica��o doidona:"<<endl;
	for(int i=0;i<20;i++){
		v[i]=v[i]*A;
		cout<<"\nValor de n�mero ("<<i<<"): "<<v[i]<<endl;
	}
	cout<<"\nGostaria de repetir o processo? (Responda com 'S' para 'sim' e 'N' para 'n�o')";
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
