#include <bits/stdc++.h>

using namespace std;

#define MIN(a,b) a<b?a:b

int main(){

	int cases; cin>>cases;
    string s;
    cin.ignore();
    int z=0;
    while(cases--){
		vector<int> numeros;
		vector<string> flotantes;
		vector< pair<int,string> >resultado;
    	
    	if(z>0) puts("");
    	z++;
        cin.ignore();
        getline(cin,s);

        stringstream snum(s);        
        int aux;
        while(snum>>aux) numeros.push_back(aux);

        string v;
        getline(cin,v);

        stringstream sfloat(v);
        string aux2;
        while(sfloat>>aux2) flotantes.push_back(aux2);

        int menor = MIN(numeros.size(), flotantes.size());

        for(int i=0; i<menor ;i++) resultado.push_back(make_pair(numeros[i],flotantes[i]));

        sort(resultado.begin(), resultado.end());

        for(int i=0; i<menor ;i++) cout<<resultado[i].second<<endl;

    }
    return 0;
}