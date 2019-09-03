//13. Escreva um que leia um vetor G de 20 elementos caractere que representa o gabarito de uma prova. A seguir, para cada um dos 50 alunos da turma, leia o vetor 
//de respostas (R) do aluno e conte o número de acertos. Mostre o nº de acertos do aluno e uma mensagem APROVADO, se a nota for maior ou igual a 6; e mostre uma 
//mensagem de REPROVADO, caso contrário.

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

using namespace std;

int GB[20],RA[20],pts;
char op;
float rslt;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
		system("cls");
		pts=0;
		cout<<"Primeiramente, digite o gabarito oficial."<<endl;
		for(int i=0;i<20;i++){
			cout<<"\nResposta número ("<<i<<"): "<<endl;
			cin>>GB[i];
			fflush(stdin);
		}
		inicio:
		pts=0;
		system("cls");
		cout<<"Digite as respostas d@ alun@:"<<endl;
		for(int i=0;i<20;i++){
			
			do{
				cout<<"\nResposta número ("<<i<<"):"<<endl;
				cin>>RA[i];
				fflush(stdin);
				}while((RA[i]!=1)&&(RA[i]!=2)&&(RA[i]!=3)&&(RA[i]!=4)&&(RA[i]!=5));
				
		}
		for(int i=0;i<20;i++)
		for(int j=0;j<20;j++){
			if(RA[i]==GB[j]){
				pts=(pts+1.0);
			}
			if(RA[i]!=GB[j]){
				pts=(pts+0.0);
			}
		}
		rslt=(pts)/40;
		if(rslt>=6.0){
			cout<<"\nAlun@ aprovad@ com nota igual a: "<<rslt;
		}
		if(rslt<6.0){
			cout<<"\nAlun@ reprovad@ com nota igual a: "<<rslt;
		}
		cout<<"\n\nDeseja corrigir outra avaliação aplicada anteriormente nesta turma? (Responda com 'S' para 'sim' ou 'N' para 'não')"<<endl;
		op=getche();
		op=toupper(op);
		switch(op){
			case'S':{
				goto comeco;
				break;
			}
			case'N':{
				goto uh;
				break;
			}
		}
		uh:
		cout<<"\n\nDeseja corrigir a prova de outro aluno? (Responda com 'S' para 'sim' e 'N' para 'não')"<<endl;
		op=getche();
		op=toupper(op);
		switch(op){
			case'S':{
				goto inicio;
				break;
			}
			case'N':{
				return 0;
				break;
			}
		}
}
