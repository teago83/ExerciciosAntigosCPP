//Fa�a um algoritmo no qual o usu�rio coloca seu endere�o, nome e CPF e, em seguida, escolhe entre um desktop ou laptop para, depois, informar o pre�o do mesmo,
//a quantidade desejada e quando quer que seja entregue. Todas essas informa��es, assim como o valor do produto mais barato e o valor do produto mais caro devem
//ser mostradas no fim, juntas do total gasto pelo cliente nessas compras.

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

float x,y,z,toty,totz;
char op,opdl;
char adrs,adrsy,adrsz,nome,nomey,nomez;
int cpf,cpfy,cpfz;
int qtdd,qtddy,qtddz,datd,datdy,datdz,datm,datmy,datmz;
char oppy[8],oppz[8],opb,opc;

int main(){

setlocale(LC_ALL,"Portuguese");

x==0;
y==0;
z==0;

	do{
		
		system("cls");
		printf("\n Digite o seu nome:");
		scanf("%s",&nome);
		printf("\n Digite o seu endere�o, sem espa�os:");
		scanf("%s",&adrs);
		printf("\n Digite o seu CPF:");
		scanf("%d",&cpf);
			
			if((cpf>=100000000000)&&(cpf<=9999999999)){								//Notei que esse sistema de seguran�a n�o funcionou. Se souber explicar 
				printf("\n\n Valor inv�lido. Digite um n�mero com 11 caract�res.");
				printf("\n Digite o seu CPF:");
				scanf("%d",&cpf);
				}while((cpf>=100000000000)&&(cpf<=9999999999));
		
		printf("\n Escolha o produto desejado.");
		printf("\n 1 - Desktop | 2 - Laptop");
		scanf("%s",&opdl);
		
		if((opdl!='1')&&(opdl!='2')){
			printf("\n\n Valor inv�lido. Por favor, digite 1 para Desktops ou 2 para Laptops.");
			printf("\n Escolha o produto desejado.");
			printf("\n 1 - Desktop | 2 - Laptop");
			scanf("%s",&opdl);																				
		}while((opdl!='1')&&(opdl!='2'));
		
		if((opdl=='1')&&(opdl!='2')){
			printf("\n Qual ser� o valor do Desktop?");
			scanf("%f",&x);
			
			if(y==0){
				y==x;
			}
			if(z==0){
				z==x;
			}
			if(x<y){
				y==x;
			}
			if(x>z){
				z==x;
			}
			printf("\n Quantas unidades ser�o compradas?");			//At� aqui vai tudo certo; o problema � quando boto o dia, respondendo � pergunta seguinte.
			scanf("%d",&qtdd);										//Quando respondo, o algoritmo trava e para de funcionar.
	
			printf("\n Quando ir� querer que seja(m) entregue(s)?");
			printf("\n\n DIA:");
			scanf("%d",&datd);
			
			if((datd>=32)&&(datd<=0)){
				printf("Valor inv�lido. Digite um n�mero maior que 0 e menor que 32.");
				printf("\n\n DIA:");
				scanf("%d",&datd);
			}while((datd>=32)&&(datd<=0));
			
			printf("\n\n M�S:");
			scanf("%d",&datm);
			
			if((datm>=13)&&(datm<=0)){
				printf("Valor inv�lido. Digite um n�mero maior que 0 e menor que 13.");
				printf("\n\n M�S:");
				scanf("%d",&datm);
			}while((datm>=13)&&(datm<=0));	
			
			if(y==x){
				datdy==datd;
				datmy==datm;
				oppy=="Desktop";
				cpfy==cpf;
				qtddy==qtdd;
				nomey==nome;
				adrsy==adrs;
			}
			if(z==x){
				datdz==datd;
				datmz==datd;
				oppz=="Desktop";
				cpfz==cpf;
				qtddz==qtdd;
				nomez==nome;
				adrsz==adrs;
			}
		
		}
		if(opdl=='2'){
			printf("\n Qual ser� o valor do Laptop?");
			scanf("%f",&x);
			
			if(y==0){
				y==x;
			}
			if(z==0){
				z==x;
			}
			if(x<y){
				y==x;
			}
			if(x>z){
				z==x;
			}
			
			printf("\n Quantas unidades ser�o compradas?");
			scanf("%d",&qtdd);
			
			printf("\n Quando ir� querer que seja(m) entregue(s)?");
			printf("\n\n DIA:");
			scanf("%d",&datd);
			
			if((datd>=32)&&(datd<=0)){
				printf("Valor inv�lido. Digite um n�mero maior que 0 e menor que 32.");
				printf("\n\n DIA:");
				scanf("%d",&datd);
			}while((datd>=32)&&(datd<=0));
			
			printf("\n\n M�S:");
			scanf("%d",&datm);
			
			if((datm>=13)&&(datm<=0)){
				printf("\n Valor inv�lido. Digite um n�mero maior que 0 e menor que 13.");
				printf("\n\n M�S:");
				scanf("%d",&datm);
			}while((datm>=13)&&(datm<=0));	
			
			if(y==x){
				datdy==datd;
				datmy==datm;
				oppy=="Laptop";
				cpfy==cpf;
				qtddy==qtdd;
				nomey==nome;
				adrsy==adrs;
			}
			if(z==x){
				datdz==datd;
				datmz==datd;
				oppz=="Laptop";
				cpfz==cpf;
				qtddz==qtdd;
				nomez==nome;
				adrsz==adrs;
			}
		}
		
		printf("\n\n Mais algu�m quer fazer compras? ('S' ou 'N')");
		op=getche();
		op=toupper(op);
		
		if((op!='N')&&(op!='S')){
			printf("\n\n Valor inv�lido. Por favor, digite 'S' ou 'N'.");
			op=getche();
			op=toupper(op);
		}while((op!='N')&&(op!='S'));
		
	}while((op!='N')&&(op=='S'));
	
	system("cls");
	
	totz=qtddz*z;
	toty=qtddy*y;
	
	printf("Deseja ver informa��es sobre os produtos mais baratos comprados? ('S' ou 'N')");
	opb=getche();
	opb=toupper(op);
	if(opb=='S'){
		printf("COMPRA DOS PRODUTOS MAIS BARATOS:");	
		printf("\n\n Cliente: %s",nomey);                   
		printf("\n CPF: %d",cpfy);
		printf("\n Endere�o: %s",adrsy);
		printf("\n Produto comprado: %s",oppy);
		printf("\n Quantidade comprada: %s",qtddy);
		printf("\n Data de entrega: %d/%d",datdy,datmy);
		printf("\n Total a ser pago: %.2f",toty);}
			printf("\n\n Deseja ver informa��es sobre os produtos mais caros comprados?");
			opc=getche();
			opc=toupper(opc);
				if(opc=='S'){
						printf("\n\n COMPRA DOS PRODUTOS MAIS CAROS:");			
						printf("\n\n Cliente: %s",nomez);
						printf("\n CPF: %d",cpfz);
						printf("\n Endere�o: %s",adrsz);
						printf("\n Produto comprado: %s",oppz);
						printf("\n Quantidade comprada: %s",qtddz);
						printf("\n Data de entrega: %d/%d",datdz,datmz);
						printf("\n Total a ser pago: %.2f",totz);}
	if((opb!='S')&&(opb=='N')){
		printf("\n\n Deseja ver informa��es sobre os produtos mais caros comprados? ('S' ou 'N')");
		opc=getche();
		opc=toupper(opc);
		if(opc=='S'){
			printf("\n\n COMPRA DOS PRODUTOS MAIS CAROS:");			
			printf("\n\n Cliente: %s",nomez);
			printf("\n CPF: %d",cpfz);
			printf("\n Endere�o: %s",adrsz);
			printf("\n Produto comprado: %s",oppz);
			printf("\n Quantidade comprada: %s",qtddz);
			printf("\n Data de entrega: %d/%d",datdz,datmz);
			printf("\n Total a ser pago: %.2f",totz);
		}
	}
	
	
	
	system("pause");
}
