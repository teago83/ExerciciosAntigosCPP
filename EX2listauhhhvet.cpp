#include<iostream>
#include<conio.h>
#include<locale.h>
#include<stdio.h>

//2. Fa�a um algoritmo que leia um vetor N[20]. A seguir, encontre o menor elemento do vetor N e a sua posi��o dentro do vetor, mostrando: �O menor elemento de N 
//�, M, �e sua posi��o dentro do vetor �:�,P.

int v[5], mn, posmn;
char op;

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
		system("cls");
		for(int i=0;i<5;i++){
			cout<<"Valor n�mero "<<i<<":"<<endl;
			cout<<"\n";
			cin>>v[i];
			cout<<"\n";
		}
		for(int i=0;i<5;i++){
			cout<<"Valor n�mero "<<i<<": ";
			cout<<v[i];
			cout<<"\n\n";
		}
		mn=999999;
		posmn=999999;
		for(int i=0;i<5;i++){
			if(v[i] < mn){
					mn=v[i];
					posmn=i;
				}
		}
		cout<<"Menor n�mero do vetor: "<<mn;
		cout<<"\n\nO mesmo encontra-se na posi��o de n�mero: "<<posmn;
		cout<<"\n\nDeseja repetir o processo? (Responda com 'S' para 'sim', ou 'N' para 'n�o').";
		op=getche();
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
