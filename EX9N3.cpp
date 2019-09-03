//9. Leia um vetor de 5 posições contendo os caracteres de um número. Depois, o digite por extenso.

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<cstring>

using namespace std;

int v[5];
char a[20],b[20],c[20],d[20],e[20];
char ae[10],be[10],ce[10],de[10],op;

int main(){
	setlocale(LC_ALL,"Portuguese");
	comeco:
		strcpy(a,"");
		strcpy(b,"");
		strcpy(c,"");
		strcpy(d,"");
		strcpy(e,"");
		strcpy(ae,"");
		strcpy(be,"");
		strcpy(ce,"");
		strcpy(de,"");

		system("cls");
		cout<<"Digite os valores do vetor:"<<endl;
		cout<<"\nOs mesmos não poderão ser maiores do que nove (9) ou menores do que zero (0)."<<endl;
		for(int i=0;i<5;i++){
			do{
			cout<<"\nValor número ("<<i<<"):"<<endl;
			cin>>v[i];}while((v[i]<0)||(v[i]>9));
		}
		for(int i=0;i<5;i++){
						
				if(v[0]==0){
					goto milhar;
				}
				if((v[0]==1)&&(v[1]==0)){
					strcpy(a,"DEZ MIL");
					if((v[2]==0)&&(v[3]==0)&&(v[4]==0)){
						goto fim;
					}
				}
				if((v[0]==1)&&(v[1]==1)){
					strcpy(a,"ONZE MIL");
					if((v[2]==0)&&(v[3]==0)&&(v[4]==0)){
						goto fim;
					}
				}
				if((v[0]==1)&&(v[1]==2)){
					strcpy(a,"DOZE MIL");
					if((v[2]==0)&&(v[3]==0)&&(v[4]==0)){
						goto fim;
					}
				}
				if((v[0]==1)&&(v[1]==3)){
					strcpy(a,"TREZE MIL");
					if((v[2]==0)&&(v[3]==0)&&(v[4]==0)){
						goto fim;
					}
				}
				if((v[0]==1)&&(v[1]==4)){
					strcpy(a,"CATORZE MIL");
					if((v[2]==0)&&(v[3]==0)&&(v[4]==0)){
						goto fim;
					}
				}
				if((v[0]==1)&&(v[1]==5)){
					strcpy(a,"QUINZE MIL");
					if((v[2]==0)&&(v[3]==0)&&(v[4]==0)){
						goto fim;
					}
				}
				if((v[0]==1)&&(v[1]==6)){
					strcpy(a,"DEZESSEIS MIL");
					if((v[2]==0)&&(v[3]==0)&&(v[4]==0)){
						goto fim;
					}
				}
				if((v[0]==1)&&(v[1]==7)){
					strcpy(a,"DEZESSETE MIL");
					if((v[2]==0)&&(v[3]==0)&&(v[4]==0)){
						goto fim;
					}
				}
				if((v[0]==1)&&(v[1]==8)){
					strcpy(a,"DEZOITO MIL");
					if((v[2]==0)&&(v[3]==0)&&(v[4]==0)){
						goto fim;
					}
				}
				if((v[0]==1)&&(v[1]==9)){
					strcpy(a,"DEZENOVE MIL");
					if((v[2]==0)&&(v[3]==0)&&(v[4]==0)){
						goto fim;
					}
				}
				if(v[0]==2){
					strcpy(a,"VINTE");
				}
				if(v[0]==3){
					strcpy(a,"TRINTA");
				}
				if(v[0]==4){
					strcpy(a,"QUARENTA");
				}
				if(v[0]==5){
					strcpy(a,"CINQUENTA");
				}
				if(v[0]==6){
					strcpy(a,"SESSENTA");
				}
				if(v[0]==7){
					strcpy(a,"SETENTA");
				}
				if(v[0]==8){
					strcpy(a,"OITENTA");
				}
				if(v[0]==9){
					strcpy(a,"NOVENTA");
				}
				if((v[0]>1)&&(v[1]==0)){
					strcpy(ae," MIL ");
				}
				if((v[0]>1)&&(v[1]>0)){
					strcpy(ae," E ");
				}			
			milhar:
				if((v[0]==0)&&(v[1]==0)){
					goto centena;
				}
				if((v[0]==1)&&(v[2]==0)){
					strcpy(be," E ");
					goto centena;
				}
				if((v[0]==0)&&(v[1]==1)){
					strcpy(b,"MIL");
				}
				if((v[0]>1)&&(v[1]==1)){
					strcpy(b,"UM MIL");
				}
				if((v[0]!=1)&&(v[1]==2)){
					strcpy(b,"DOIS MIL");
				}
				if((v[0]!=1)&&(v[1]==3)){
					strcpy(b,"TRÊS MIL");
				}
				if((v[0]!=1)&&(v[1]==4)){
					strcpy(b,"QUATRO MIL");
				}
				if((v[0]!=1)&&(v[1]==5)){
					strcpy(b,"CINCO MIL");
				}
				if((v[0]!=1)&&(v[1]==6)){
					strcpy(b,"SEIS MIL");
				}
				if((v[0]!=1)&&(v[1]==7)){
					strcpy(b,"SETE MIL");
				}
				if((v[0]!=1)&&(v[1]==8)){
					strcpy(b,"OITO MIL");
				}
				if((v[0]!=1)&&(v[1]==9)){
					strcpy(b,"NOVE MIL");
				}
				if((v[1]>0)&&(v[2]==0)&&(v[3]||v[4])>0){
					strcpy(be," E ");
				}
				if((v[1]>0)&&(v[2]>0)&&(((v[3])||(v[4]))>0)){
					strcpy(be," ");
				}
				if((v[1]>0)&&(v[2]>0)&&(v[3]==0)&&(v[4]==0)){
					strcpy(be," E ");
				}
				if((v[0]>0)&&(v[1]==0)&&((v[2]==0))&&(((v[3])||(v[4]))>0)){
					strcpy(be,"E ");
				}
							
			centena:
			
				if((v[0]==0)&&(v[1]==0)&&(v[2]==0)){
					goto dezena;
				}
				if(v[2]==1){
					strcpy(c,"CENTO");
				}
				if(v[2]==2){
					strcpy(c,"DUZENTOS");
				}
				if(v[2]==3){
					strcpy(c,"TREZENTOS");
				}
				if(v[2]==4){
					strcpy(c,"QUATROCENTOS");
				}
				if(v[2]==5){
					strcpy(c,"QUINHENTOS");
				}
				if(v[2]==6){
					strcpy(c,"SEISCENTOS");
				}
				if(v[2]==7){
					strcpy(c,"SETESCENTOS");
				}
				if(v[2]==8){
					strcpy(c,"OITOSCENTOS");
				}
				if(v[2]==9){
					strcpy(c,"NOVESCENTOS");
				}
				if((v[2]>0)&&(v[3]>0)){
					strcpy(ce," E ");
				}
				if((v[2]>0)&&(v[4]>0)){
					strcpy(ce," E ");
				}
							
			dezena:
			
				if((v[0]==0)&&(v[1]==0)&&(v[2]==0)&&(v[3]==0)){
					goto unidade;
				}
				if((v[3]==1)&&(v[4]==1)){
					strcpy(d,"ONZE");
					goto fim;
				}
				if((v[3]==1)&&(v[4]==2)){
					strcpy(d,"DOZE");
					goto fim;
				}
				if((v[3]==1)&&(v[4]==3)){
					strcpy(d,"TREZE");
					goto fim;
				}
				if((v[3]==1)&&(v[4]==4)){
					strcpy(d,"CATORZE");
					goto fim;
				}
				if((v[3]==1)&&(v[4]==5)){
					strcpy(d,"QUINZE");
					goto fim;
				}
				if((v[3]==1)&&(v[4]==6)){
					strcpy(d,"DEZESSEIS");
					goto fim;
				}
				if((v[3]==1)&&(v[4]==7)){
					strcpy(d,"DEZESSETE");
					goto fim;
				}
				if((v[3]==1)&&(v[4]==8)){
					strcpy(d,"DEZOITO");
					goto fim;
				}
				if((v[3]==1)&&(v[4]==9)){
					strcpy(d,"DEZENOVE");
					goto fim;
				}
				if((v[3]==1)){
					strcpy(d,"DEZ");
					goto fim;
				}
				if(v[3]==2){
					strcpy(d,"VINTE");
				}
				if(v[3]==3){
					strcpy(d,"TRINTA");
				}
				if(v[3]==4){
					strcpy(d,"QUARENTA");
				}
				if(v[3]==5){
					strcpy(d,"CINQUENTA");
				}
				if(v[3]==6){
					strcpy(d,"SESSENTA");
				}
				if(v[3]==7){
					strcpy(d,"SETENTA");
				}
				if(v[3]==8){
					strcpy(d,"OITENTA");
				}
				if(v[3]==9){
					strcpy(d,"NOVENTA");
				}
				if((v[3]>1)&&(v[4]>0)){
					strcpy(de," E ");
				}
			unidade:
				if((v[3]>0)&&(v[4]==0)){
					goto fim;
				}
				if(v[4]==1){
					strcpy(e,"UM");
				}
				if(v[4]==2){
					strcpy(e,"DOIS");
				}
				if(v[4]==3){
					strcpy(e,"TRÊS");
				}
				if(v[4]==4){
					strcpy(e,"QUATRO");
				}
				if(v[4]==5){
					strcpy(e,"CINCO");
				}
				if(v[4]==6){
					strcpy(e,"SEIS");
				}
				if(v[4]==7){
					strcpy(e,"SETE");
				}
				if(v[4]==8){
					strcpy(e,"OITO");
				}
				if(v[4]==9){
					strcpy(e,"NOVE");
				}			
				if((v[0]==0)&&(v[1]==0)&&(v[2]==0)&&(v[3]==0)&&(v[4]==0)){
					strcpy(a,"ZERO");
				}
				if((v[0]==0)&&(v[1]==0)&&(v[2]==0)&&(v[3]==0)&&(v[4]>0)){
					strcpy(de,"");
				}
				if((v[0]>1)&&(v[1]==0)&&(v[2]==0)&&(v[3]==0)&&(v[4]==0)){
					strcpy(ae," MIL");
				}
		}		
		fim:
		cout<<"\nNúmero digitado: ";
		for(int i=0;i<5;i++){
			cout<<v[i];
		}
		cout<<"\n\n"<<a<<ae<<b<<be<<c<<ce<<d<<de<<e<<", por extenso."<<endl;
		cout<<"\nDeseja repetir o processo? ('S' para 'sim' e 'N' para 'não')";
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
