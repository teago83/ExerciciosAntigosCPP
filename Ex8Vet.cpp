//8 Leia um vetor de 20 posi��es e em seguida um valor X qualquer. Seu programa devera fazer uma busca do valor de X no vetor lido e informar a 
//posi��o em que foi encontrado ou se n�o foi encontrado.

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

using namespace std;

int v[20],x;
char op;

int main(){
	comeco:
	system("cls");
	setlocale(LC_ALL,"Portuguese");
	cout<<"DIGITA QUALQUER COISA A� CARA POR FAVOR O TEAGO T� VOLT-- ~sil�ncio~: \n\n";
	for(int i=0;i<20;i++){
		cout<<"Valor "<<i<<":"<<endl;
		cin>>v[i];
	}
	cout<<"digite um valor para x:";
	cin>>x;
	for(int i=0;i<20;i++){
	if(v[i]==x){
		cout<<"x est� presente no vetor, na posi��o:"<<i<<endl;
	}
	if(v[i]!=x){
		cout<<"x n�o est� presente no vetor.";
	}}
	cout<<"\n\n Deseja do it all over again? ('S' ou 'N')"<<endl;
	op=getche();
	op=toupper(op);
	switch(op){
		case'S':{goto comeco;}break;
		case'N':{return 0;}break;
	}


}

