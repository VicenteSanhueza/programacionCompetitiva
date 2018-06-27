#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	map<string,int> pais;
	while(n--){
		string insertar,aux;
		cin>>insertar;
		getline(cin,aux);
		pais[insertar]+=1;	
	}
	map<string,int>::iterator it;
	for(it=pais.begin(); it!=pais.end() ;it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}