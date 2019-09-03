//6 Declare um vetor de 10 posições e o preencha com os 10 primeiros números impares e o escreva.

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>

using namespace std;

int v[10],vi[10];
char op;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
	system("cls");
	cout<<"Digita'ê, parça:"<<endl;
	for(int i=0;i<10;i++){
		do{
			cout<<"\n Valor número "<<i<<":"<<endl;
			cin>>v[i];
		}while(v[i]%2==0);
	}
	for(int i=0;i<10;i++){
		cout<<"\n\n Valor número "<<i<<": "<<v[i];
	}
	cout<<"\n\n Deseja fazer tudo all over again?"<<endl;
	cin>>op;
	op=getche();
	op=toupper(op);
	switch(op){
	case'S':{
		goto comeco;
	}break;
	case'N':{
		return 0;
	}break;
}
}
