//Leia dois vetores de 20 posições e calcule um outro vetor contendo, nas posições pares os valores do primeiro e nas posições impares os valores do segundo.

#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdio.h>

using namespace std;

int v[20],vi[20],vii[20];
char op;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
		system("cls");
		cout<<"Digite os valores do primeiro vetor."<<endl;
		cout<<"ATENÇÃO: Os valores não podem exceder 6 dígitos."<<endl<<endl;
		for(int i=1;i<21;i++){
			do{
				cout<<"Valor número ("<<i<<"): ";
				cin>>v[i];
				if(i%2==0){
					vii[i]=v[i];
				}
				if((v[i]>999999)||(v[i]<-999999)){
					cout<<"\nERRO: Valor excede o limite de 6 dígitos. Tente novamente."<<endl<<endl;
				}
			}while((v[i]>999999)||(v[i]<-999999));
			}
		system("cls");
		cout<<"Digite os valores do segundo vetor."<<endl;
		cout<<"ATENÇÃO: Os valores não podem exceder 6 dígitos."<<endl<<endl;
		for(int i=1;i<21;i++){
			do{
				cout<<"Valor número ("<<i<<"): ";
				cin>>vi[i];
				if(i%2!=0){
					vii[i]=vi[i];
				}
				if((vi[i]>999999)||(vi[i]<-999999)){
					cout<<"\nERRO: Valor excede o limite de 6 dígitos. Tente novamente."<<endl<<endl;
				}
			}while((vi[i]>999999)||(vi[i]<-999999));
			}
		system("cls");
		cout<<"\nO terceiro vetor receberá os seguintes valores:"<<endl;
		for(int i=1;i<21;i++){
			cout<<"\nValor número ("<<i<<"): "<<vii[i];
		}
		cout<<"\n\nDeseja repetir o processo? (Digite 'S' para 'sim' e 'N' para 'não')";
		cin>>op;
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
