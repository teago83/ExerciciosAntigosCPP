//8 Leia um vetor de 20 posições e em seguida um valor X qualquer. Seu programa devera fazer uma busca do valor de X no vetor lido e informar a 
//posição em que foi encontrado ou se não foi encontrado.

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
	cout<<"DIGITA QUALQUER COISA AÍ CARA POR FAVOR O TEAGO TÁ VOLT-- ~silêncio~: \n\n";
	for(int i=0;i<20;i++){
		cout<<"Valor "<<i<<":"<<endl;
		cin>>v[i];
	}
	cout<<"digite um valor para x:";
	cin>>x;
	for(int i=0;i<20;i++){
	if(v[i]==x){
		cout<<"x está presente no vetor, na posição:"<<i<<endl;
	}
	if(v[i]!=x){
		cout<<"x não está presente no vetor.";
	}}
	cout<<"\n\n Deseja do it all over again? ('S' ou 'N')"<<endl;
	op=getche();
	op=toupper(op);
	switch(op){
		case'S':{goto comeco;}break;
		case'N':{return 0;}break;
	}


}

