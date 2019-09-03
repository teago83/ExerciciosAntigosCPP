//Considere que determinada empresa tem registrado, numa tabela, os consumos mensais de energia elétrica ao longo de 3 anos para o primeiro semestre.  
//Cada linha representa um ano e cada coluna um mês.  Faça um programa que, considerando estes dados, determine: 

//a)  O consumo médio em cada um dos meses. 
//b)  Qual mês a empresa gasta mais energia. 
//c)  Qual o ano e mês de maior consumo dos últimos 3 anos.

//Mês/Ano            JAN    FEV    MAR       ABR     MAI     JUN  

//2014               100    530    500       300     400     303 

//2015               123    345    234       667     787     900 

//2016               809    879    500       900     434     233  MAIOR CONSUMO ANUAL

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<cstring>

using namespace std; 

int cnsmnsl[6],mdamsl[6],maiorenergia,a[6],b[6],c[6],maiorenergiaanual,consumoa,consumob,consumoc,mesmaiorenergia[6],mesmaiorenergiax;
char mes[6][15],anomaiorenergia[4],maiorconsumomedio[15],msmrenrg[15];

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
		maiorenergia=0;
		maiorenergiaanual=0;
		consumoa=0;
		consumob=0;
		consumoc=0;
		system("cls");
			cout<<"\nConsumo médio de cada mês:"<<endl;
			for(int i=1;i<7;i++){
				if(i=1){
					strcpy(mes[i],"Janeiro");  //Tanto o nome do mês quanto o valor de consumo médio de Janeiro não têm sido mostrados.
					a[i]=100;				   //Também notei que seus valores em si não têm sido contados. O valor do consumo final de 2016, por exemplo,
					b[i]=123;				   //não considera os gastos de Janeiro.
					c[i]=809;
					if((a[i]>b[i])&&(a[i]>c[i])){
						mesmaiorenergia[i]=a[i];
					}
					if((c[i]>b[i])&&(c[i]>a[i])){
						mesmaiorenergia[i]=c[i];
					}
					if((b[i]>a[i])&&(b[i]>c[i])){
						mesmaiorenergia[i]=b[i];
					}
					cnsmnsl[i]=a[i]+b[i]+c[i];
					if(cnsmnsl[i]>maiorenergia){
						maiorenergia=cnsmnsl[i];
						strcpy(maiorconsumomedio,"Janeiro");
					}
				}
				if(i=2){
					strcpy(mes[i],"Fevereiro");
					a[i]=530;
					b[i]=345;
					c[i]=879;
					if((a[i]>b[i])&&(a[i]>c[i])){
						mesmaiorenergia[i]=a[i];
					}
					if((c[i]>b[i])&&(c[i]>a[i])){
						mesmaiorenergia[i]=c[i];
					}
					if((b[i]>a[i])&&(b[i]>c[i])){
						mesmaiorenergia[i]=b[i];
					}
					cnsmnsl[i]=a[i]+b[i]+c[i];
					if(cnsmnsl[i]>maiorenergia){
						maiorenergia=cnsmnsl[i];
						strcpy(maiorconsumomedio,"Fevereiro");
					}
				}
				if(i=3){
					strcpy(mes[i],"Março");
					a[i]=500;
					b[i]=234;
					c[i]=500;
					if((a[i]>b[i])&&(a[i]>c[i])){
						mesmaiorenergia[i]=a[i];
					}
					if((c[i]>b[i])&&(c[i]>a[i])){
						mesmaiorenergia[i]=c[i];
					}
					if((b[i]>a[i])&&(b[i]>c[i])){
						mesmaiorenergia[i]=b[i];
					}
					cnsmnsl[i]=a[i]+b[i]+c[i];
					if(cnsmnsl[i]>maiorenergia){
						maiorenergia=cnsmnsl[i];
						strcpy(maiorconsumomedio,"Março");
					}
				}
				if(i=4){
					strcpy(mes[i],"Abril");
					a[i]=300;
					b[i]=667;
					c[i]=900;
					if((a[i]>b[i])&&(a[i]>c[i])){
						mesmaiorenergia[i]=a[i];
					}
					if((c[i]>b[i])&&(c[i]>a[i])){
						mesmaiorenergia[i]=c[i];
					}
					if((b[i]>a[i])&&(b[i]>c[i])){
						mesmaiorenergia[i]=b[i];
					}
					cnsmnsl[i]=a[i]+b[i]+c[i];
					if(cnsmnsl[i]>maiorenergia){
						maiorenergia=cnsmnsl[i];
						strcpy(maiorconsumomedio,"Abril");
						cout<<"maior aepow "<<maiorconsumomedio; //Dúvida: ao testar, isso dá certo. Porém, no 'maiorconsumomedio', lá embaixo, na linha número
																 //206, ele mostra vários nadas...

					}
				}
				if(i=5){
					strcpy(mes[i],"Maio");
					a[i]=400;
					b[i]=787;
					c[i]=434;
					if((a[i]>b[i])&&(a[i]>c[i])){
						mesmaiorenergia[i]=a[i];
					}
					if((c[i]>b[i])&&(c[i]>a[i])){
						mesmaiorenergia[i]=c[i];
					}
					if((b[i]>a[i])&&(b[i]>c[i])){
						mesmaiorenergia[i]=b[i];
					}
					cnsmnsl[i]=a[i]+b[i]+c[i];
					if(cnsmnsl[i]>maiorenergia){
						maiorenergia=cnsmnsl[i];
						strcpy(maiorconsumomedio,"Maio");
					}
				}
				if(i=6){
					strcpy(mes[i],"Junho");
					a[i]=303;
					b[i]=900;
					c[i]=233;
					if((a[i]>b[i])&&(a[i]>c[i])){
						mesmaiorenergia[i]=a[i];
					}
					if((c[i]>b[i])&&(c[i]>a[i])){
						mesmaiorenergia[i]=c[i];
					}
					if((b[i]>a[i])&&(b[i]>c[i])){
						mesmaiorenergia[i]=b[i];
					}
					cnsmnsl[i]=a[i]+b[i]+c[i];
					if(cnsmnsl[i]>maiorenergia){
						maiorenergia=cnsmnsl[i];
						strcpy(maiorconsumomedio,"Junho");
					}
			}
			for(int i=1;i<7;i++){
				consumoa=consumoa+a[i];
				consumob=consumob+b[i];
				consumoc=consumoc+c[i];
			}
			for(int i=1;i<7;i++){
				mdamsl[i]=cnsmnsl[i]/3;
				cout<<"\n"<<mes[i]<<": "<<mdamsl[i];}
			}
			for(int j=1;j<7;j++)
			for(int i=1;i<7;i++){
				if(mesmaiorenergia[i]>mesmaiorenergia[j]){
					mesmaiorenergiax=mesmaiorenergia[i];
					if(mesmaiorenergiax==mesmaiorenergia[1]){
						strcpy(msmrenrg,"Janeiro");
					}
					if(mesmaiorenergiax==mesmaiorenergia[2]){
						strcpy(msmrenrg,"Fevereiro");
					}
					if(mesmaiorenergiax==mesmaiorenergia[3]){
						strcpy(msmrenrg,"Março");
					}
					if(mesmaiorenergiax==mesmaiorenergia[4]){
						strcpy(msmrenrg,"Abril");
					}
					if(mesmaiorenergiax==mesmaiorenergia[5]){
						strcpy(msmrenrg,"Maio");
					}
					if(mesmaiorenergiax==mesmaiorenergia[6]){
						strcpy(msmrenrg,"Junho");
					}
				}
			}
				if((consumoa>consumob)&&(consumoa>consumoc)){
					maiorenergiaanual=consumoa;
					strcpy(anomaiorenergia,"2014");
			}
				if((consumob>consumoa)&&(consumob>consumoc)){
					maiorenergiaanual=consumob;
					strcpy(anomaiorenergia,"2015");
			}
				if((consumoc>consumoa)&&(consumoc>consumob)){
					maiorenergiaanual=consumoc;
					strcpy(anomaiorenergia,"2016");
			}
			cout<<maiorenergia;
			cout<<"\n\nMês de maior consumo médio: "<<maiorconsumomedio<<"."<<endl;
			cout<<"Gastou-se a seguinte quantidade de energia neste mês, somando os gastos dos três anos: "<<maiorenergia<<"."<<endl;
			cout<<"\nAno de maior consumo de energia: "<<anomaiorenergia<<", quando consumiu-se a seguinte quantidade de energia: "<<maiorenergiaanual<<"."<<endl;
			cout<<"\nMaior consumo de energia em um mês: "<<mesmaiorenergiax<<". Isso aconteceu no mês de: "<<msmrenrg<<"."<<endl;
			return 0;
}
