//11. Leia um vetor de 10 posi��es e verifique se existem valores iguais e os escreva, mostrando a posi��o destes.

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

using namespace std;

int vo[10],vc[10];
char op;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
		system("cls");
		cout<<"Digite os valores do vetor, kiddo. Pode repeti-los, caso queira."<<endl;
		for(int i=0;i<10;i++){
		cout<<"\n Valor n�mero "<<i<<":";
		cin>>vo[i];
		fflush(stdin);
			if(vo[i-1]==vo[i]){
				((vo[i-1])&&(vo[i]))==vc[i];
			}	
		}
		cout<<"\n\n Vetor normal:"<<endl;
		for(int i=0;i<10;i++){
			cout<<"\n Valor n�mero "<<i<<":";
			cout<<vo[i];
		}
		//PROFESSOR, ME AJUDE. N�o sei como representar o vc[10] l� em cima, entendeu? N�o sei se boto [10] nele, ou algo assim, 
		//pois n�o tenho como saber quantos valores ser�o repetidos. Exerc�cios como esse est�o sendo bem dif�ceis para mim.
		//Sim, eu sei que nem terminei o exerc�cio, mas � que essa � o segundo ou terceiro que chego numa situa��o assim e n�o sei como progredir.
}
