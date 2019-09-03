//1. A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para
//ler as dimensões de um terreno e depois exibir a área do terreno.

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
