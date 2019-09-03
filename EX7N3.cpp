//Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos e vice-e-versa. Escreva ao final o vetor obtido. 

#include<iostream>
#include<locale.h>
#include<conio.h>
#include<stdio.h>

using namespace std;

int vi[16],vii[16];
char op;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
		system("cls");
		cout<<"Digite os valores do vetor original."<<endl;
		cout<<"ATENÇÃO: Os valores não podem exceder 6 dígitos."<<endl<<endl;
		for(int i=0;i<16;i++){
			do{
				cout<<"Valor número ("<<i+1<<"): ";
				cin>>vi[i];
				if((vi[i]>999999)||(vi[i]<-999999)){
					cout<<"\nERRO: Você excedeu o número máximo de dígitos. Tente novamente."<<endl<<endl;
			}
			}while((vi[i]>999999)||(vi[i]<-999999));
		}
		for(int i=0;i<8;i++){
			vii[i+8]=vi[i];
		}
		for(int i=8;i<16;i++){
			vii[i-8]=vi[i];
		}
		system("cls");
		cout<<"\nVetor resultante:"<<endl;
		for(int i=0;i<16;i++){
			cout<<"\nValor número ("<<i+1<<"): "<<vii[i];
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
