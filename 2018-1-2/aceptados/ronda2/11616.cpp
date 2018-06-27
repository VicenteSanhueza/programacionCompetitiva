#include <bits/stdc++.h>

using namespace std;

string num_romano(int num);
int num_normal(string v);

int main(){
	string v;
	int num;
	while(cin>>v){
		if(v[0]>='0' && v[0]<='9'){
			num=atoi(v.c_str());
			string aux= num_romano(num);
			cout<<aux<<endl;
		}else{
			num= num_normal(v);
			cout<<num<<endl;
		}
	}
	return 0;
}

string num_romano(int num){
	int v[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
	string letras[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

	string aux;
	for(int i=0; i<13 ;i++){
		if(num==0)break;
		int aux2=num/v[i];
		num-= aux2*v[i];

		for(int j=0; j<aux2 ;j++) aux+=letras[i];
	}
	return aux;
}

int num_normal(string v){
	map<char,int> rom;
	rom['M']=1000;
	rom['D']=500;
	rom['C']=100;
	rom['L']=50;
	rom['X']=10;
	rom['V']=5;
	rom['I']=1;

	int aux=0;

	for(int i=0; i<v.size() ;i++){
		int aux2= rom[v[i]];

		if((i<(v.size()-1)) && (aux2<rom[v[i+1]])) aux-=aux2;
		else aux+=aux2;
	}
	return aux;
}