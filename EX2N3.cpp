//Uma empresa paga R$ 33.00 por hora normal trabalhada e R$ 53.00 por hora extra. O Programa deve 
//ler 05 funcion�rios, o total de horas normais e o total de horas extras trabalhadas para cada em-
//pregado em um ano e calcular o sal�rio anual de cada trabalhador. Assuma que o trabalhador deve pa-
//gar 10% de imposto se o seu sal�rio anual for menor ou igual a R$ 12000.00. Caso o sal�rio seja 
//maior que este valor o imposto devido � igual a 10% sobre R$ 12000.00 mais 25% sobre o que passar 
//de R$ 12000.00. Este programa deve tamb�m calcular o imposto devido pelo trabalhador. Apresentar no 
//final o nome de cada trabalhador, a quantidade de horas trabalhadas no ano, a quantidade de horas 
//extras feitas no ano, o valor total do sal�rio de um ano, e o valor de imposto devido por cada um 
//deles.

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

using namespace std;

char op, func[5][20];
float imp[5],hrs[5],hrsx[5],slranl[5],hrstt[5];
int aux,aux2,aux3,aux4;

int main(){
setlocale(LC_ALL,"Portuguese");
comeco:
	system("cls");
	for(int i=0;i<5;i++){
		system("cls");
		cout<<"\nFuncion�ri@ n�mero ("<<i+1<<"):"<<endl;
		cout<<"\nDigite o seu nome:"<<endl;
		cin>>func[i];
		fflush(stdin);
		do{
			cout<<"\nDigite o n�mero de horas normais trabalhadas neste ano:"<<endl;
			cout<<"\nATEN��O: N�o digite valores acima de 8760."<<endl;
			cin>>hrs[i];
			fflush(stdin);
			if(hrs[i]>8760){
				cout<<"\nERRO: N�mero de horas trabalhadas excede o tempo de um ano."<<endl;
			}
		}while(hrs[i]>8760);
		do{
			cout<<"\nDigite o n�mero de horas extra trabalhadas neste ano:"<<endl;
			cout<<"\nATEN��O: N�o digite valores acima de 8760."<<endl;
			cin>>hrsx[i];
			fflush(stdin);
			hrstt[i]=hrs[i]+hrsx[i];
			if(hrstt[i]>8760){
				cout<<"\nERRO: N�mero de horas trabalhadas excede o tempo de um ano."<<endl;
			}
		}while(hrstt[i]>8760);
		slranl[i]=(hrs[i]*33)+(hrsx[i]*53);
		if(slranl[i]<=12000){
			imp[i]=slranl[i]*0.1;
		}
		if(slranl[i]>12000){
			aux=(slranl[i]-12000);
			aux2=(slranl[i]-aux)*0.1;
			aux=(slranl[i]-12000)*0.25;
			imp[i]=aux+aux2;
		}
		cin.ignore();
		}
	system("cls");
	for(int i=0;i<5;i++){
		cout<<"\nFuncion�ri@ n�mero ("<<i+1<<"): "<<endl;
		cout<<"\nNome: "<<func[i]<<endl;
		cout<<"\nHoras trabalhadas no ano: "<<hrs[i]<<".";
		cout<<"\nHoras extra feitas no ano: "<<hrsx[i]<<".";
		cout<<"\nSal�rio total em um ano: R$ "<<slranl[i]<<".";
		cout<<"\nImpostos sobre o sal�rio: R$ "<<imp[i]<<"."<<endl;
	}
	cout<<"\nDeseja repetir o processo com novos dados?"<<endl;
	cout<<"\n(Responda com 'S' para 'sim' e 'N' para 'n�o')";
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
