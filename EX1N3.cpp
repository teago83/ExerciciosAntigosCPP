//Escreva um programa que leia 1000 n�meros aleat�rios de 0 at� 300 e imprima o maior deles e quantas vezes o maior n�mero foi lido, apresentando este e suas 
//respectivas posi��es. 

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
		cout<<"Os valores aleat�rios agora ser�o distribuidos."<<endl;
		for(int i=0;i<5;i++){
			cout<<"\nValor n�mero ("<<i<<"):"<<endl;
			cin>>v[i];
		}
		for(int i=0;i<5;i++){
			if(v[i]>maiorn){
				maiorn=v[i];
				cout<<"\nMaior n�mero: "<<maiorn;

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
		cout<<"\nMaior n�mero: "<<maiorn;
		cout<<"\nRepetiu-se "<<vezes<<" vezes.";
		cout<<"\nFoi encontrado nas posi��es: "<<pos<<endl;
		cout<<"\nDeseja repetir o processo? ('S' para 'sim' e 'N' para 'n�o')";
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
