//10.  Leia 3 vetores de 9 posições e crie outro com o 1º terço do primeiro, o segundo 3º do segundo e o ultimo terço do 3º. Escrever o vetor resultante ao final. 

#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<conio.h>

using namespace std;

int v[9],vi[9],vii[9],viii[9];
char op;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
		system("cls");
		cout<<"Digite os valores do primeiro vetor.";
		cout<<"\nATENÇÃO: Os valores não podem exceder 6 dígitos."<<endl;
		for(int i=1;i<10;i++){
			do{
				cout<<"\nValor número ("<<i<<"): ";
				cin>>v[i];
				if((v[i]>999999)||(v[i]<-999999)){
					cout<<"\nERRO: Você excedeu o número máximo de dígitos. Tente novamente."<<endl;
			}
			}while((v[i]>999999)||(v[i]<-999999));
		}
		system("cls");
		cout<<"Agora, digite os valores do segundo vetor.";
		cout<<"\nATENÇÃO: Os valores não podem exceder 6 dígitos."<<endl;
		for(int i=1;i<10;i++){
			do{
				cout<<"\nValor número ("<<i<<"): ";
				cin>>vi[i];
				if((vi[i]>999999)||(vi[i]<-999999)){
					cout<<"\nERRO: Você excedeu o número máximo de dígitos. Tente novamente."<<endl;
			}
			}while((vi[i]>999999)||(vi[i]<-999999));
		}
		system("cls");
		cout<<"Por último, digite os valores do terceiro vetor.";
		cout<<"\nATENÇÃO: Os valores não podem exceder 6 dígitos."<<endl;
		for(int i=1;i<10;i++){
			do{
				cout<<"\nValor número ("<<i<<"): ";
				cin>>vii[i];
				if((vii[i]>999999)||(vii[i]<-999999)){
					cout<<"\nERRO: Você excedeu o número máximo de dígitos. Tente novamente."<<endl;
			}
			}while((vii[i]>999999)||(vii[i]<-999999));
		}
		for(int i=1;i<4;i++){
			viii[i]=v[i];
		}
		for(int i=4;i<7;i++){
			viii[i]=vi[i];
		}
		for(int i=7;i<10;i++){
			viii[i]=vii[i];
		}
		system("cls");
		cout<<"O vetor resultante terá os seguintes valores:"<<endl;
		for(int i=1;i<10;i++){
			cout<<"\nValor número ("<<i<<"): "<<viii[i];
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
