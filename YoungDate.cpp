
//Know if you're too old to date a certain girl.

#include <iostream>
#include <cmath>
#include<cstdlib>

int dateCalc(int);

int main(){
	using namespace std;
	int Age;
	cout<<"Enter your age:";
	cin>>Age;
	cout<<dateCalc(Age);
	cin.get();
	return 0;}
int dateCalc(int MyAge){
	int girlsAge= int (MyAge/2)+7;
	return girlsAge;
}
	

