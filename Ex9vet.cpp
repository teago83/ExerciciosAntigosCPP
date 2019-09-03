//9 Leia um vetor de 13 posições. Contar e escrever quantos valores pares ele possui.

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

using namespace std;

int v[13],joj;
char op;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comecu:
	system("cls");
	cout<<"Digite os valores do vetor:"<<endl;
	for(int i=0;i<13;i++){
		cout<<"Valor número "<<i<<":"<<endl;
		cin>>v[i];
			if((v[i])%2==0){
				joj=joj+1;
			}
	}
	cout<<"Dentre os valores digitados, "<<joj<<" foram pares."<<endl;
	cout<<"Deseja tentar novamente? ('S' ou 'N')"<<endl;
	op=getche();
	op=toupper(op);
	
	switch(op){
		case'S':{goto comecu;}break;
		case'N':{return 0;}break;
	}
}
