//10. Leia 3 vetores de 9 posi��es e crie outro com o 1� ter�o do primeiro, o segundo 3�. do segundo e o ultimo ter�o do 3�. Escrever o vetor resultante ao final.

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

using namespace std;

int vI[9],vII[9],vIII[9],vIV[9];
char op;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
		system("cls");
		cout<<"Ol�, digite o primeiro vetor:"<<endl;
		for(int i=0;i<9;i++){
			cout<<"\n Valor n�mero "<<i<<":"<<endl;
			cin>>vI[i];
			fflush(stdin);
		}
		cout<<"\n\n Agora, digite o segundo vetor:"<<endl;
		for(int i=0;i<9;i++){
			cout<<"\n Valor n�mero "<<i<<":"<<endl;
			cin>>vII[i];
			fflush(stdin);
		}
		cout<<"\n\n Por �ltimo, o terceiro vetor:"<<endl;
		for(int i=0;i<9;i++){
			cout<<"\n Valor n�mero "<<i<<":"<<endl;
			cin>>vIII[i];
			fflush(stdin);
		}
		for(int i=0;i<3;i++){
			vI[i]=vIV[i];
		}
		for(int i=3;i<6;i++){
			vII[i]=vIV[i];
		}
		for(int i=6;i<9;i++){
			vIII[i]=vIV[i];
		}
		cout<<"\n\n O vetor n�mero quatro ficar�, ent�o, assim:"<<endl;
		for(int i=0;i<9;i++){
			cout<<"\n Valor n�mero "<<i<<": "<<vIV[i]<<endl;
		}
		cout<<"\n\n Deseja repetir o processo? ('S' ou 'N')"<<endl;
		op=getche();
		op=toupper(op);
		switch(op){
			case'S':{goto comeco;}break;
			case'N':{return 0;}break;
		}
}
