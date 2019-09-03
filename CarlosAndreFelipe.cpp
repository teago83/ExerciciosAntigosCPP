//Carlos, André, Felipe, Bar. Carlos paga com centavos, os outros nyao.

#include<iostream>
#include<stdio.h>
#include<cmath>
#include<locale.h>
#include<conio.h>

float total,soma,contc,contca,conta;
char op;

int main(){
    
    setlocale(LC_ALL,"Portuguese");
    
    do{    system("cls");
           printf("\n Digita'e quanto 6 gastaru nu bar!!!1!!?!?!!");
           scanf("%f",&total);
    
           contca=total/3;
           soma=int(contca)*2;
           contc=total-soma;
    
           printf("\n O andrézaço e o felipão pagarão %.0f reais cada.",soma/2);
           printf("\n Já o carlusão, infelizmente, vai pagar %.2f reais. Tadin.",contc);
 
           printf("\n CE QUÉ VÊ QUANTU US BEBUM GASTARU DE NOVU?!?!?!?!!?? (S ou N).");
    
           op=getche();
           op=toupper(op);}
    while (op!=('N'));
    system("pause");
}
