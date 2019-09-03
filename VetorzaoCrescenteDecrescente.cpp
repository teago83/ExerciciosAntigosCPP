#include <iostream>
#include <vector>
#include <locale.h>
#include <stdio.h>
#include <algorithm>

using namespace std;
int a,b,c,d,e;

int main(){
	setlocale(LC_ALL,"Portuguese");
	//format: vector<DataType> Vector'sName
	
	vector<int>v;
	
	cout << "Digite o valor de a:" << endl;
	cin >> a;
	cout << "Digite o valor de b:" << endl;
	cin >> b;
	cout << "Digite o valor de c:" << endl;
	cin >> c;
	cout << "Digite o valor de d:" << endl;
	cin >> d;
	cout << "Digite o valor de e:" << endl;
	cin >> e;

	cout << "\n";
	
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	v.push_back(d);
	v.push_back(e);
	
	cout << "Ordem normal:" << endl;
	for (unsigned int i = 0; i < v.size(); i++) {
	cout << v[i] << " " << endl;
	}
	
	cout << "Ordem crescente:" << endl;
	for (unsigned int i = 0; i < v.size(); i++) {
	std::sort(v.begin(), v.end());
	cout << v[i] << " " << endl;}
	
	cout << "\n";
	
	cout << "Ordem decrescente:" << endl;
	for (unsigned int i = 0; i < v.size(); i++) {
	std::sort(v.rbegin(), v.rend());
	cout << v[i] << " " << endl;}
	
	cout << "\n";
	
	
	
	return 0;
}
