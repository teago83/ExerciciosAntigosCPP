#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
void result(void);

int H,B,A;

main(){
	cout<<"Hello, you came here to calculate the area of a triangle, didn't you?";
	printf("\n\n");
	cout<<"Magnificent! We shall begin the calculations, then.";
	printf("\n\n");
	cout<<"Tell me, kiddo, what's the height of your triangle?";
	printf("\n\n");
	cin>>H;
	printf("\n\n");
	cout<<"What about its base?";
	printf("\n\n");
	cin>>B;
	printf("\n\n");
	cout<<"Your triangle's area, given the circumstances, will equal:";
	printf("\n\n");
    A=(H*B)/2;
    cout<<A;
    return (0);
	}
	
