#include <iostream>
#include <vector>
#include <locale.h>

using namespace std;
float a,b,c,d,e;

int main(){
	setlocale(LC_ALL,"Portuguese");
	//format: vector<DataType> Vector'sName
	
	vector<float>v;
	
	cout << "Valores do vetor:" << endl;
	cout << "\n";
	
	cout << "Digite o valor número um:" << endl;
	cin >> a;
	cout << "Digite o valor número dois:" << endl;
	cin >> b;
	cout << "Digite o valor número três:" << endl;
	cin >> c;
	cout << "Digite o valor número quatro:" << endl;
	cin >> d;
	cout << "Digite o valor número cinco:" << endl;
	cin >> e;

	cout << "\n";
	
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	v.push_back(d);
	v.push_back(e);
	
	cout << "Valores do vetor, do primeiro ao quinto:" << endl;
	for (float i = 0; i < v.size(); i++) {
	cout << v[i] << " " << endl;
	}
	cout << "\n";

		
	return 0;
}
