//Construa um programa que gere a tabela verdade e apresente na tela os seus dados intermediários e o valor final Y referente às entradas padrões combinatórios 
//de A, B e C. O programa deve oferecer também ao usuário a possibilidade de gerar randomicamente as entradas e produzir a tabela com suas respectivas saídas 
//aleatórias.

#include<iostream> 
#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<cstring>

using namespace std;

char op,v[3],a[1],b[1],c[1],y[1],joj[1];

int main(){
	setlocale(LC_ALL,"Portuguese");
	strcpy(a,"");
	strcpy(b,"");
	strcpy(c,"");
	comeco:
		system("cls");
		cout<<"Preferirá digitar os valores manualmente ou gerá-los aleatoriamente? ('M' = 'manualmente' e 'R' = 'randomicamente')";
		do{
			cin>>op;
			op=toupper(op);	
			if((op!='M')&&(op!='R')){
				cout<<"\nOpção inválida. Por favor, digite 'R' para 'randomicamente' ou 'M' para 'manualmente. ";
			}
		}while((op!='M')&&(op!='R'));
		switch(op){
			case'R':{
				//goto random;
				break;
			}
			case'M':{
				goto manual;
				break;
			}
			manual:
				system("cls");
				cout<<"Digite os valores para as entradas.";
				cout<<"\nLembre-se: Somente serão aceitos 0 ou 1.";
				for(int i=1;i<4;i++){
				if(i=1){
					do{
						cout<<"\nEntrada A: ";
						cin>>v[i];
						if((v[i]!='0')&&(v[i]!='1')){
							cout<<"\nERRO: Valor inválido. Por favor, digite 0 ou 1."<<endl;
						}
					}while((v[i]!='0')&&(v[i]!='1'));
				}
				if(i=2){
					do{
						cout<<"\nEntrada B: ";
						cin>>v[i];
						if((v[i]!='0')&&(v[i]!='1')){
							cout<<"\nERRO: Valor inválido. Por favor, digite 0 ou 1."<<endl;
						}
					}while((v[i]!='0')&&(v[i]!='1'));
				}
				if(i=3){
					do{
						cout<<"\nEntrada C: ";
						cin>>v[i];
						if((v[i]!='0')&&(v[i]!='1')){
							cout<<"\nERRO: Valor inválido. Por favor, digite 0 ou 1."<<endl;
						}
					}while((v[i]!='0')&&(v[i]!='1'));
				}
				}
					
				system("cls");
				cout<<"Primeira porta lógica: NOT"<<endl;
				cout<<"\n  ENTRADA  SAÍDA"<<endl;
				cout<<"     A      ~A"<<endl;
				for(int i=1;i<2;i++){
					if(i=1){
						if(v[i]=='1'){
							cout<<"  1      "<<"0";
						}
						if(v[i]=='0'){
							cout<<"  0      "<<"1";
						}
					}
				}
					cout<<"\nSegunda porta lógica: AND"<<endl;
					cout<<"\n  ENTRADA  SAÍDA"<<endl;
					cout<<"    ~A  B    X=~A.B"<<endl;

					for(int i=1;i<3;i++){
						if(i=1){
							if(v[i]=='1'){
								cout<<"  0      "<<"";
						}
							if(v[i]=='0'){
								cout<<"  0      "<<"1";
						}
						}
						if(i=2){
							if(v[i]=='1'){
								cout<<"\n     1 ";
							}
						}
					}
		}
		return 0;
}
