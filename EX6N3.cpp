//Leia um vetor de 12 posi��es e em seguida ler tamb�m dois valores X e Y quaisquer correspondentes a duas posi��es no vetor. Ao final seu programa dever� 
//escrever a soma dos valores encontrados nas respectivas posi��es X e Y. 

#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<conio.h>

using namespace std;

char op;
int v[12],x,y,result;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
		system("cls");
		x=0;
		y=0;
		cout<<"Digite os valores do vetor."<<endl;
		cout<<"ATEN��O: N�o digite valores com mais de 6 d�gitos."<<endl<<endl;
		for(int i=0;i<12;i++){
			do{
				cout<<"Valor n�mero ("<<i<<"):";
				cin>>v[i];
				if((v[i]>999999)||(v[i]<-999999)){
				cout<<"\nERRO: Valor com mais de 6 d�gitos. Por favor, tente novamente."<<endl<<endl;
			}
			}while((v[i]>999999)||(v[i]<-999999));
		}
		cout<<"\nAgora, digite os valores de X e de Y."<<endl;
		cout<<"Escolha n�meros de 0 a 11."<<endl;
		do{
			cout<<"\nX: ";
			cin>>x;
			if((x>11)||(x<0)){
				cout<<"\nERRO: Valor inv�lido. Por favor, tente novamente."<<endl;
			}
		}while((x>11)||(x<0));
		do{
			cout<<"Y: ";
			cin>>y;
			if((y>11)||(y<0)){
				cout<<"\nERRO: Valor inv�lido. Por favor, tente novamente."<<endl<<endl;
			}
			if(y==x){
				cout<<"\nERRO: Valor igual ao de X. Por favor, digite outro valor."<<endl<<endl;
			}
		}while((y>11)||(y<0)||(y==x));
		for(int i=0;i<12;i++){
			result=v[x]+v[y];
		}
		cout<<"\nO resultado da soma dos valores encontrados nas posi��es "<<x<<" e "<<y<<" ser� igual a: "<<result<<endl;
		cout<<"\nDeseja repetir o processo? (Digite 'S' para 'sim' e 'N' para 'n�o')";
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
