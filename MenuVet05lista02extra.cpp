/*5 - Construa um programa em C/C++ que leia um vetor de 7 
posições com valores inteiros e realize as seguintes 
tarefas conforme o menu:

1 - Mostrar o vetor original;
2 - Apresentar o vetor em ordem crescente;
3 - Apresentar o vetor em ordem decrescente;
4 - Mostrar o maior e o menor valor e suas respectivas posições com relação ao vetor original ;
5 - Localizar a posição central do vetor e mostrar seu valor e a posição;
6 - Mostrar separado os valores pares dos impares, suas respectivas quantidades e posições;
7 - Sair.*/
#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;//comando para habilitar uso de Cin e Cout

int VetOrig[7],VetClone[7],ValorMenor,ValorMaior;
int PosMenor,PosMaior;
int op,aux;
char opc;

main(){ do{
			system("cls");
			//Preenchimento do Vetor Original e Clone
			for(int i=0;i<7;i++){
				cout<<"\n VetOrig["<<i<<"]: ";
				cin>>VetOrig[i];
				VetClone[i]=VetOrig[i];}
				
	       //Menu de opções
	       menu:
		   cout<<"\n 1 - Mostrar o vetor original";
           cout<<"\n 2 - Apresentar o vetor em ordem crescente";
           cout<<"\n 3 - Apresentar o vetor em ordem decrescente";
		   cout<<"\n 4 - Maior e o Menor valor e suas posições Vet Original";
           cout<<"\n 5 - Posição central e seu valor e a posição Vet Original";
           cout<<"\n 6 - Separar pares dos impares, quantidade de cada e posições";
		   cout<<"\n 7 - Sair";
		   cout<<"\n Digite a opção desejada";
		   cin>>op;
		   switch(op){
		   	
		   	case 1:{
			   	for(int i=0;i<7;i++){
				cout<<"\n VetOrig["<<i<<"]: "<<VetOrig[i];}
				goto menu;
				break;
			   }
		   	case 2:{
		   		for(int i=0;i<7;i++)
		   		 for(int j=0;j<7;j++){
		   		 	if(VetClone[i]<VetClone[j]){
							aux=VetClone[i];
							VetClone[i]=VetClone[j];
							VetClone[j]=aux;		   		 		
						}}
				for(int i=0;i<7;i++){
				cout<<"\n VetCresc["<<i<<"]: "<<VetClone[i];}		
				goto menu;
				break;
			   }
		   	
		   	case 3:{
		   		for(int i=0;i<7;i++)
		   		 for(int j=0;j<7;j++){
		   		 	if(VetClone[i]>VetClone[j]){
							aux=VetClone[i];
							VetClone[i]=VetClone[j];
							VetClone[j]=aux;		   		 		
						}}
				for(int i=0;i<7;i++){
				cout<<"\n VetDecresc["<<i<<"]: "<<VetClone[i];}		
				goto menu;
				break;
			   }
		   case 4:{
				ValorMaior=0;
				ValorMenor=99999999;
				for(int i=0;i<7;i++){
				    if(VetOrig[i] > ValorMaior){
						ValorMaior=VetOrig[i];
						PosMaior=i;}						
					if(VetOrig[i] < ValorMenor){
						ValorMenor=VetOrig[i];
						PosMenor=i;}			
						}
			
			cout<<"\n ValorMenor["<<PosMenor<<"] = "<<ValorMenor;		
			cout<<"\n ValorMaior["<<PosMaior<<"] = "<<ValorMaior;		
				goto menu;
				break;
			   }
            case 5:{
			int qtide=7;		
			cout<<"\n ValorMeio["<<qtide/2<<"] = "<<VetOrig[qtide/2];		
				goto menu;
				break;
			   }
			case 6:{
			int QtdPar=0,QtdImpar=0;	
			for(int i=0;i<7;i++){
				if(VetOrig[i] % 2 == 0){
					cout<<"\n Par VetOrig["<<i<<"] = "<<VetOrig[i];
					QtdPar++;
				}
				if(VetOrig[i] % 2 != 0){
					cout<<"\n Impar VetOrig["<<i<<"] = "<<VetOrig[i];
					QtdImpar++;
				}
		    } 
		    cout<<"\n Qtidade Par"<<QtdPar;
		    cout<<"\n Qtidade Impar"<<QtdImpar;
				goto menu;
				break;
			   }
			case 7:{ exit(0);
				break;
			   }
			 default:goto menu;  
}

cout<<"\n Deseja novos valors <S> ou <N>";
opc=getche();
opc=toupper(opc);} while(opc != 'N');
}


