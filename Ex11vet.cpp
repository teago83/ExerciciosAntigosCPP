//11. Leia um vetor de 10 posições e verifique se existem valores iguais e os escreva, mostrando a posição destes.

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
		cout<<"\n Valor número "<<i<<":";
		cin>>vo[i];
		fflush(stdin);
			if(vo[i-1]==vo[i]){
				((vo[i-1])&&(vo[i]))==vc[i];
			}	
		}
		cout<<"\n\n Vetor normal:"<<endl;
		for(int i=0;i<10;i++){
			cout<<"\n Valor número "<<i<<":";
			cout<<vo[i];
		}
		//PROFESSOR, ME AJUDE. Não sei como representar o vc[10] lá em cima, entendeu? Não sei se boto [10] nele, ou algo assim, 
		//pois não tenho como saber quantos valores serão repetidos. Exercícios como esse estão sendo bem difíceis para mim.
		//Sim, eu sei que nem terminei o exercício, mas é que essa é o segundo ou terceiro que chego numa situação assim e não sei como progredir.
}
