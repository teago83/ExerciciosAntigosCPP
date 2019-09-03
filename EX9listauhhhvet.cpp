//9.Escreva um algoritmo que leia um vetor de 100 posições e mostre-o ordenado em ordem crescente.

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

using namespace std;

int v[100],vi[100],a;
char op;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
	system("cls");
		cout<<"Digite os valores do vetor:"<<endl;
		for(int i=0;i<100;i++){
			cout<<"Valor de número ("<<i<<"): "<<endl;
			cin>>v[i];
			fflush(stdin);
			vi[i]=v[i];

		}
		for(int i=0;i<100;i++)
		for(int j=0;j<100;j++){
		   	if(vi[i]<vi[j]){
				a=vi[i];
				vi[i]=vi[j];
				vi[j]=a;}
				}
	cout<<"\nValores do vetor, agora em ordem crescente."<<endl;
	for(int i=0;i<100;i++){
		cout<<"\nValor número ("<<i<<"): "<<vi[i]<<endl;}		
		cout<<"\nDeseja repetir o processo? (Responda com 'S' para 'sim' e 'N' para 'não')";
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
			}}}
