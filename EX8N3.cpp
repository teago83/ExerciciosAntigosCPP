//Leia dois vetores de 20 posi��es e calcule um outro vetor contendo, nas posi��es pares os valores do primeiro e nas posi��es impares os valores do segundo.

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
		cout<<"ATEN��O: Os valores n�o podem exceder 6 d�gitos."<<endl<<endl;
		for(int i=1;i<21;i++){
			do{
				cout<<"Valor n�mero ("<<i<<"): ";
				cin>>v[i];
				if(i%2==0){
					vii[i]=v[i];
				}
				if((v[i]>999999)||(v[i]<-999999)){
					cout<<"\nERRO: Valor excede o limite de 6 d�gitos. Tente novamente."<<endl<<endl;
				}
			}while((v[i]>999999)||(v[i]<-999999));
			}
		system("cls");
		cout<<"Digite os valores do segundo vetor."<<endl;
		cout<<"ATEN��O: Os valores n�o podem exceder 6 d�gitos."<<endl<<endl;
		for(int i=1;i<21;i++){
			do{
				cout<<"Valor n�mero ("<<i<<"): ";
				cin>>vi[i];
				if(i%2!=0){
					vii[i]=vi[i];
				}
				if((vi[i]>999999)||(vi[i]<-999999)){
					cout<<"\nERRO: Valor excede o limite de 6 d�gitos. Tente novamente."<<endl<<endl;
				}
			}while((vi[i]>999999)||(vi[i]<-999999));
			}
		system("cls");
		cout<<"\nO terceiro vetor receber� os seguintes valores:"<<endl;
		for(int i=1;i<21;i++){
			cout<<"\nValor n�mero ("<<i<<"): "<<vii[i];
		}
		cout<<"\n\nDeseja repetir o processo? (Digite 'S' para 'sim' e 'N' para 'n�o')";
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
