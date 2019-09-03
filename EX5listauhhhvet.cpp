//5. Faça um algoritmo que leia um vetor S[20] e uma variável A. A seguir, mostre o produto da variável A pelo vetor.


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
		cout<<"\nValor de número ("<<i<<"):"<<endl;
		cin>>v[i];
		fflush(stdin);
	}
	cout<<"\nDigite o valor desejado para a variável A:"<<endl;
	cin>>A;
	cout<<"\nNovos valores, após ter sido feita a multiplicação doidona:"<<endl;
	for(int i=0;i<20;i++){
		v[i]=v[i]*A;
		cout<<"\nValor de número ("<<i<<"): "<<v[i]<<endl;
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
