//Leia um vetor de 16 posi��es e troque os 8 primeiros valores pelos 8 �ltimos e vice-e-versa. Escreva ao final o vetor obtido. 

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
		cout<<"ATEN��O: Os valores n�o podem exceder 6 d�gitos."<<endl<<endl;
		for(int i=0;i<16;i++){
			do{
				cout<<"Valor n�mero ("<<i+1<<"): ";
				cin>>vi[i];
				if((vi[i]>999999)||(vi[i]<-999999)){
					cout<<"\nERRO: Voc� excedeu o n�mero m�ximo de d�gitos. Tente novamente."<<endl<<endl;
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
			cout<<"\nValor n�mero ("<<i+1<<"): "<<vii[i];
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
