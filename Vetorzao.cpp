#include <iostream>
#include <vector>
#include <locale.h>

using namespace std;
int xI,xII,yI,yII,zI,zII,aI,aII,bI,bII;

int main(){
	setlocale(LC_ALL,"Portuguese");
	//format: vector<DataType> Vector'sName
	
	vector<int>MyVectorI;
	
	cout << "Primeiro vetor:" << endl;
	cout << "\n";
	
	cout << "Digite o valor de x:" << endl;
	cin >> xI;
	cout << "Digite o valor de y:" << endl;
	cin >> yI;
	cout << "Digite o valor de z:" << endl;
	cin >> zI;
	cout << "Digite o valor de a:" << endl;
	cin >> aI;
	cout << "Digite o valor de b:" << endl;
	cin >> bI;

	cout << "\n";
	
	MyVectorI.push_back(xI);
	MyVectorI.push_back(yI);
	MyVectorI.push_back(zI);
	MyVectorI.push_back(aI);
	MyVectorI.push_back(bI);
	
	for (unsigned int i = 0; i < MyVectorI.size(); i++) {
	cout << MyVectorI[i] << " " << endl;
	}
	cout << "\n";
	
	vector<int>MyVectorII;
	
	cout << "Segundo vetor:" << endl;
	
	cout << "\n";
	cout << "Digite o valor de x:" << endl;
	cin >> xII;
	cout << "Digite o valor de y:" << endl;
	cin >> yII;
	cout << "Digite o valor de z:" << endl;
	cin >> zII;
	cout << "Digite o valor de a:" << endl;
	cin >> aII;
	cout << "Digite o valor de b:" << endl;
	cin >> bII;
	
	cout << "\n";
	
	MyVectorII.push_back(xII);
	MyVectorII.push_back(yII);
	MyVectorII.push_back(zII);
	MyVectorII.push_back(aII);	
	MyVectorII.push_back(bII);
	
	for (int i = 0; i < MyVectorII.size(); i++) {
	cout << MyVectorII[i] << " " << endl;
	
	cout << "\n";
	
	int x = xI*xII; 
	int y = yI*yII; 
	int z = zI*zII; 
	int a = aI*aII; 
	int b = bI*bII;

	cout << "Multiplicações dos valores de mesmo índice:" << endl;

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	cout << a << endl;
	cout << b << endl;
		
	} return 0;
}
