#include <bits/stdc++.h>

using namespace std;

void crear( vector< vector<int> >& lista, string v, const map<char,int>& mapeo){
	/*
		0=A   1=B   2=C  etc...
	*/

	int cont=0;
	for(int i=0; i<v.size() ;i++){
		int aux;
		if(cont==0){
			aux=mapeo[v[i]];
			cont=1;
		}
		if(v[i]==';') vienen los adyacentes...
		if(v[i]==':') cambiamos a otro nodo...

	}
}

void llenar(map<char,int>& mapeo){
	mapeo['A']=0;
	mapeo['B']=1;
	mapeo['C']=2;
	mapeo['D']=3;
	mapeo['E']=4;
	mapeo['F']=5;
	mapeo['G']=6;
	mapeo['H']=7;
	mapeo['I']=8;
	mapeo['J']=9;
	mapeo['K']=10;
	mapeo['L']=11;
	mapeo['M']=12;
	mapeo['N']=13;
	mapeo['O']=14;
	mapeo['P']=15;
	mapeo['Q']=16;
	mapeo['R']=17;
	mapeo['S']=18;
	mapeo['T']=19;
	mapeo['U']=20;
	mapeo['V']=21;
	mapeo['W']=22;
	mapeo['X']=23;
	mapeo['Y']=24;
	mapeo['Z']=25;
}

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string v;
	while(getline(cin,v)){
		if(!v.compare("#")) break;
		
		stringstream ass(v);

		string adyacentes,mino,teseo,K;

		ass>>adyacentes;
		ass>>mino;
		ass>>teseo;
		ass>>K;

		int k=atoi(K.c_str());

		vector< vector<int> > lista;
		map<char,int> mapeo;
		llenar(mapeo);
		crear(lista,adyacentes,mapeo);

	}

	return 0;
}