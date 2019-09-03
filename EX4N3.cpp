//Faça um algoritmo que, dados dois vetores inteiros A e B de 10 elementos, efetue as respectivas operações indicadas por um outro vetor C de 10 elementos de 
//caracteres, também fornecido pelo usuário, contendo as quatro operações aritméticas em qualquer combinação e armazenando os resultados em um quarto vetor D. 
//Por exemplo, suponha que A[1] = 10, B[1] = 3 e C[1] = '*', então D[1] = 30.

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

using namespace std;

float va[10],vb[10],vd[10];
char op,vc[10];

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
		system("cls");
		cout<<"\nVetor A: Número."<<endl;
		cout<<"Vetor B: Número."<<endl;
		cout<<"Vetor C: Operação matemática que deverá ser feita com os números."<<endl;
		cout<<"OPÇÕES DE OPERAÇÕES: + (soma) | - (subtração) | * (multiplicação) | / (divisão)"<<endl;
		cout<<"\nDigite os valores dos vetores:"<<endl;
		cout<<"\nATENÇÃO: Para os valores numéricos, o resultado não poderá passar de 6 dígitos."<<endl;
		//Achei isso bem estranho. Toda vez que dava um número com mais de 6 dígitos, como 1000000, por exemplo,
		//aparecia um valor semelhante ao seguinte: 1e+006.
		for(int i=0;i<10;i++){
			cout<<"\nValores dos vetores número ("<<i+1<<"):"<<endl;
			do{
				cout<<"\nA: ";
				cin>>va[i];
				if((va[i]>999999)||(va[i]<-999999)){
					cout<<"\nERRO: Valor excedendo o limite de 6 dígitos. Tente novamente."<<endl;
				}
			}while((va[i]>999999)||(va[i]<-999999));
			do{
				cout<<"B: ";
				cin>>vb[i];
				if((vb[i]>999999)||(vb[i]<-999999)){
					cout<<"\nERRO: Valor excedendo o limite de 6 dígitos. Tente novamente."<<endl;
					cout<<"\n";
				}
			}while((vb[i]>999999)||(vb[i]<-999999));
			do{
				cout<<"C: ";
				cin>>vc[i];
				if((vc[i]!='*')&&(vc[i]!='+')&&(vc[i]!='-')&&(vc[i]!='/')){
					cout<<"\nERRO: Caractere inválido. Por favor, insira um dos seguintes:"<<endl;
					cout<<"\n + (soma) | - (subtração) | * (multiplicação) | / (divisão) "<<endl;
					cout<<"\n";
				}
			}while((vc[i]!='*')&&(vc[i]!='+')&&(vc[i]!='-')&&(vc[i]!='/'));
			if(vc[i]=='+'){
				vd[i]=va[i]+vb[i];
			}
			if(vc[i]=='-'){
				vd[i]=va[i]-vb[i];
			}
			if(vc[i]=='*'){
				vd[i]=va[i]*vb[i];
			}
			if(vc[i]=='/'){
				vd[i]=va[i]/vb[i];
			}
		}
		system("cls");
		cout<<"\nOperações resultantes:"<<endl;
		cout<<"\n";
		for(int i=0;i<10;i++){
			if((vd[i]>999999)||(vd[i]<-999999)){
				cout<<"("<<i+1<<"): "<<va[i]<<vb[i]<<" = "<<"Resultado excede o limite de 6 dígitos."<<endl;
			}
			else{
				cout<<"("<<i+1<<"): ";
				cout<<va[i]<<vc[i]<<vb[i]<<" = "<<vd[i]<<endl;
			}
			
		}
		cout<<"\nDeseja repetir o processo? (Digite 'S' para 'sim' e 'N' para 'não')";
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
