//5 Leia um vetor de 12 posi��es e em seguida ler tamb�m dois valores X e Y quaisquer correspondentes a duas posi��es no vetor. Ao final,
//seu programa dever� escrever a soma dos valores encontrados nas respectivas posi��es X e Y.

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<locale.h>

using namespace std;

int v[12],x,y,z;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	cout<<"Digita'�:"<<endl;
	for(int i=0;i<12;i++){
		cout<<"\n N�mero ["<<i<<"]:"<<endl;
		cin>>v[i];	
		fflush(stdin);
	}
	
	cout<<"\n\n Digite um valor x e um valor y, cada um correspondendo a uma das 12 posi��es do vetor:"<<endl;
	cout<<"\n";
	cin>>x;
	cin>>y;
	cout<<"\n";
	
	if((x>11)||(x<0)||(y>11)||(y<0)){
		
		cout<<"Erro. Digite valores correspondentes a posi��es do vetor.";
		cout<<"\n\n Digite um valor x e um valor y, cada um correspondendo a uma das 12 posi��es do vetor:"<<endl;
		cin>>x;
		cin>>y;
	
	}while((x>11)||(x<0)||(y>11)||(y<0));
	
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<"\n";
	
	z=v[x]+v[y];
	
	cout<<"Soma dos valores:"<<"\n\n";
	cout<<z;
	cout<<"\n\n";
	
	system("pause");
	
	return 0;
}
