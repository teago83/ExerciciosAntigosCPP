#include<iostream>
#include<conio.h>
#include<locale.h>
#include<stdio.h>

//2. Faça um algoritmo que leia um vetor N[20]. A seguir, encontre o menor elemento do vetor N e a sua posição dentro do vetor, mostrando: “O menor elemento de N 
//é”, M, “e sua posição dentro do vetor é:”,P.

int v[5], mn, posmn;
char op;

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
		system("cls");
		for(int i=0;i<5;i++){
			cout<<"Valor número "<<i<<":"<<endl;
			cout<<"\n";
			cin>>v[i];
			cout<<"\n";
		}
		for(int i=0;i<5;i++){
			cout<<"Valor número "<<i<<": ";
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
		cout<<"Menor número do vetor: "<<mn;
		cout<<"\n\nO mesmo encontra-se na posição de número: "<<posmn;
		cout<<"\n\nDeseja repetir o processo? (Responda com 'S' para 'sim', ou 'N' para 'não').";
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
