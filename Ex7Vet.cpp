//7 Leia um vetor de 16 posi��es e troque os 8 primeiros valores pelos 8 �ltimos e vice-e-versa. Escreva ao final o vetor obtido.

#include<iostream>
#include<conio.h>
#include<locale.h>
#include<stdio.h>

using namespace std;

int v[16],vI[16];
char op;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comecu:
	system("cls");
	cout<<"Digita'� por favor sen�o vou perder meu emprego:";
	for(int i=0;i<16;i++){
		cout<<"\n["<<i<<"]:";
		cin>>v[i];
		fflush(stdin);
	}
	cout<<"\n\n";
	for(int i=8;i<16;i++){
		vI[i-8]=v[i];
	}
	for(int i=0;i<8;i++){
		vI[i+8]=v[i];
	}
	cout<<"\n Vetorz�o final:"<<endl;
	for(int i=0;i<16;i++){
		cout<<"\n Valor de n�mero ["<<i<<"]:"<<vI[i];
	}
	cout<<"\n\n Deseja repetir o processo? ('S' ou 'N')"<<endl;
	op=getche();
	op=toupper(op);
	
	switch(op){
		case'S':{
			goto comecu;
		}break;
		case'N':{
			return 0;
		}break;
	}
}

