//Construa um programa que gere a tabela verdade e apresente na tela os seus dados intermedi�rios e o valor final Y referente �s entradas padr�es combinat�rios 
//de A, B e C. O programa deve oferecer tamb�m ao usu�rio a possibilidade de gerar randomicamente as entradas e produzir a tabela com suas respectivas sa�das 
//aleat�rias.

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
		cout<<"Preferir� digitar os valores manualmente ou ger�-los aleatoriamente? ('M' = 'manualmente' e 'R' = 'randomicamente')";
		do{
			cin>>op;
			op=toupper(op);	
			if((op!='M')&&(op!='R')){
				cout<<"\nOp��o inv�lida. Por favor, digite 'R' para 'randomicamente' ou 'M' para 'manualmente. ";
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
				cout<<"\nLembre-se: Somente ser�o aceitos 0 ou 1.";
				for(int i=1;i<4;i++){
				if(i=1){
					do{
						cout<<"\nEntrada A: ";
						cin>>v[i];
						if((v[i]!='0')&&(v[i]!='1')){
							cout<<"\nERRO: Valor inv�lido. Por favor, digite 0 ou 1."<<endl;
						}
					}while((v[i]!='0')&&(v[i]!='1'));
				}
				if(i=2){
					do{
						cout<<"\nEntrada B: ";
						cin>>v[i];
						if((v[i]!='0')&&(v[i]!='1')){
							cout<<"\nERRO: Valor inv�lido. Por favor, digite 0 ou 1."<<endl;
						}
					}while((v[i]!='0')&&(v[i]!='1'));
				}
				if(i=3){
					do{
						cout<<"\nEntrada C: ";
						cin>>v[i];
						if((v[i]!='0')&&(v[i]!='1')){
							cout<<"\nERRO: Valor inv�lido. Por favor, digite 0 ou 1."<<endl;
						}
					}while((v[i]!='0')&&(v[i]!='1'));
				}
				}
					
				system("cls");
				cout<<"Primeira porta l�gica: NOT"<<endl;
				cout<<"\n  ENTRADA  SA�DA"<<endl;
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
					cout<<"\nSegunda porta l�gica: AND"<<endl;
					cout<<"\n  ENTRADA  SA�DA"<<endl;
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
