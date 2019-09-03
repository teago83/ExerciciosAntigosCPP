//Escreva um programa que leia 1000 números aleatórios de 0 até 300 e imprima o maior deles e quantas vezes o maior número foi lido, apresentando este e suas 
//respectivas posições. 

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>

using namespace std;

int v[1000],maiorn,vezes,pos;
char op;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
		system("cls");
		maiorn=0;
		vezes=0;
		cout<<"Os valores aleatórios agora serão distribuidos."<<endl;
		for(int i=0;i<5;i++){
			cout<<"\nValor número ("<<i<<"):"<<endl;
			cin>>v[i];
		}
		for(int i=0;i<5;i++){
			if(v[i]>maiorn){
				maiorn=v[i];
				cout<<"\nMaior número: "<<maiorn;

			}
			if(v[i]>maiorn){
					vezes++;
					pos=i;
				}
		}	
		//	for(int i=0;i<7;i++){
				//if(VetOrig[i] % 2 == 0){
				//	cout<<"\n Par VetOrig["<<i<<"] = "<<VetOrig[i];
				//	QtdPar++;
				//}
				//if(VetOrig[i] % 2 != 0){
				//	cout<<"\n Impar VetOrig["<<i<<"] = "<<VetOrig[i];
				//	QtdImpar++;
				//}
		   // } 
		cout<<"\nMaior número: "<<maiorn;
		cout<<"\nRepetiu-se "<<vezes<<" vezes.";
		cout<<"\nFoi encontrado nas posições: "<<pos<<endl;
		cout<<"\nDeseja repetir o processo? ('S' para 'sim' e 'N' para 'não')";
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
