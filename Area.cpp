//1. A imobili�ria Im�bilis vende apenas terrenos retangulares. Fa�a um algoritmo para
//ler as dimens�es de um terreno e depois exibir a �rea do terreno.

#include<iostream>
#include<conio.h>
#include<stdio.h>

int b,h,a;

main(){
	do{
	printf("Digite a altura do terreno:");
	printf("\n\n");
	scanf("%d",&h);
	printf("\n\n");
	printf("Digite a base do terreno:");
	printf("\n\n");
	scanf("%d",&b);
	printf("\n\n");
	
	a=b*h;
	
	printf("A area do terreno equivaler-se-a a:");
	printf("\n\n");
	printf("%d",a);
	printf("\n\n");
	printf("Deseja calcular outra area retangular? (S ou N)");
	
	
	getch();}
}
