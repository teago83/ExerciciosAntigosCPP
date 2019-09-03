//Uma empresa paga R$ 33.00 por hora normal trabalhada e R$ 53.00 por hora extra. O Programa deve 
//ler 05 funcionários, o total de horas normais e o total de horas extras trabalhadas para cada em-
//pregado em um ano e calcular o salário anual de cada trabalhador. Assuma que o trabalhador deve pa-
//gar 10% de imposto se o seu salário anual for menor ou igual a R$ 12000.00. Caso o salário seja 
//maior que este valor o imposto devido é igual a 10% sobre R$ 12000.00 mais 25% sobre o que passar 
//de R$ 12000.00. Este programa deve também calcular o imposto devido pelo trabalhador. Apresentar no 
//final o nome de cada trabalhador, a quantidade de horas trabalhadas no ano, a quantidade de horas 
//extras feitas no ano, o valor total do salário de um ano, e o valor de imposto devido por cada um 
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
		cout<<"\nFuncionári@ número ("<<i+1<<"):"<<endl;
		cout<<"\nDigite o seu nome:"<<endl;
		cin>>func[i];
		fflush(stdin);
		do{
			cout<<"\nDigite o número de horas normais trabalhadas neste ano:"<<endl;
			cout<<"\nATENÇÃO: Não digite valores acima de 8760."<<endl;
			cin>>hrs[i];
			fflush(stdin);
			if(hrs[i]>8760){
				cout<<"\nERRO: Número de horas trabalhadas excede o tempo de um ano."<<endl;
			}
		}while(hrs[i]>8760);
		do{
			cout<<"\nDigite o número de horas extra trabalhadas neste ano:"<<endl;
			cout<<"\nATENÇÃO: Não digite valores acima de 8760."<<endl;
			cin>>hrsx[i];
			fflush(stdin);
			hrstt[i]=hrs[i]+hrsx[i];
			if(hrstt[i]>8760){
				cout<<"\nERRO: Número de horas trabalhadas excede o tempo de um ano."<<endl;
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
		cout<<"\nFuncionári@ número ("<<i+1<<"): "<<endl;
		cout<<"\nNome: "<<func[i]<<endl;
		cout<<"\nHoras trabalhadas no ano: "<<hrs[i]<<".";
		cout<<"\nHoras extra feitas no ano: "<<hrsx[i]<<".";
		cout<<"\nSalário total em um ano: R$ "<<slranl[i]<<".";
		cout<<"\nImpostos sobre o salário: R$ "<<imp[i]<<"."<<endl;
	}
	cout<<"\nDeseja repetir o processo com novos dados?"<<endl;
	cout<<"\n(Responda com 'S' para 'sim' e 'N' para 'não')";
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
