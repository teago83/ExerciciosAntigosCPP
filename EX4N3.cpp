//Fa�a um algoritmo que, dados dois vetores inteiros A e B de 10 elementos, efetue as respectivas opera��es indicadas por um outro vetor C de 10 elementos de 
//caracteres, tamb�m fornecido pelo usu�rio, contendo as quatro opera��es aritm�ticas em qualquer combina��o e armazenando os resultados em um quarto vetor D. 
//Por exemplo, suponha que A[1] = 10, B[1] = 3 e C[1] = '*', ent�o D[1] = 30.

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
		cout<<"\nVetor A: N�mero."<<endl;
		cout<<"Vetor B: N�mero."<<endl;
		cout<<"Vetor C: Opera��o matem�tica que dever� ser feita com os n�meros."<<endl;
		cout<<"OP��ES DE OPERA��ES: + (soma) | - (subtra��o) | * (multiplica��o) | / (divis�o)"<<endl;
		cout<<"\nDigite os valores dos vetores:"<<endl;
		cout<<"\nATEN��O: Para os valores num�ricos, o resultado n�o poder� passar de 6 d�gitos."<<endl;
		//Achei isso bem estranho. Toda vez que dava um n�mero com mais de 6 d�gitos, como 1000000, por exemplo,
		//aparecia um valor semelhante ao seguinte: 1e+006.
		for(int i=0;i<10;i++){
			cout<<"\nValores dos vetores n�mero ("<<i+1<<"):"<<endl;
			do{
				cout<<"\nA: ";
				cin>>va[i];
				if((va[i]>999999)||(va[i]<-999999)){
					cout<<"\nERRO: Valor excedendo o limite de 6 d�gitos. Tente novamente."<<endl;
				}
			}while((va[i]>999999)||(va[i]<-999999));
			do{
				cout<<"B: ";
				cin>>vb[i];
				if((vb[i]>999999)||(vb[i]<-999999)){
					cout<<"\nERRO: Valor excedendo o limite de 6 d�gitos. Tente novamente."<<endl;
					cout<<"\n";
				}
			}while((vb[i]>999999)||(vb[i]<-999999));
			do{
				cout<<"C: ";
				cin>>vc[i];
				if((vc[i]!='*')&&(vc[i]!='+')&&(vc[i]!='-')&&(vc[i]!='/')){
					cout<<"\nERRO: Caractere inv�lido. Por favor, insira um dos seguintes:"<<endl;
					cout<<"\n + (soma) | - (subtra��o) | * (multiplica��o) | / (divis�o) "<<endl;
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
		cout<<"\nOpera��es resultantes:"<<endl;
		cout<<"\n";
		for(int i=0;i<10;i++){
			if((vd[i]>999999)||(vd[i]<-999999)){
				cout<<"("<<i+1<<"): "<<va[i]<<vb[i]<<" = "<<"Resultado excede o limite de 6 d�gitos."<<endl;
			}
			else{
				cout<<"("<<i+1<<"): ";
				cout<<va[i]<<vc[i]<<vb[i]<<" = "<<vd[i]<<endl;
			}
			
		}
		cout<<"\nDeseja repetir o processo? (Digite 'S' para 'sim' e 'N' para 'n�o')";
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
