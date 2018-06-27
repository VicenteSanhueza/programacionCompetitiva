#include <bits/stdc++.h>

using namespace std;

#define MIN(a,b)	(a<b?a:b)
#define MAX(a,b)	(a<b?b:a)
#define POS(a)		(a==0?1:0)

int t_Llegada[10000];
int arr[10000];

void fun(queue<int>& q, int t_Cruzar, int t, int n){
	int aux=0;
	while((!q.empty()) && (t_Cruzar >= arr[q.front()]) && (aux < n)){
		t_Llegada[q.front()] = t_Cruzar + t;
		q.pop();
		aux++;
	}
}

int main(){
	int cases; cin>>cases;
	int z=0;

	string l="left";

	while(cases--){
		if(z>0) puts("");
		z++;

		int n,t,m;
		cin>>n>>t>>m;

		queue<int> qLeft;
		queue<int> qRight;

		for(int i=0; i<m ;i++){
			int tiempo;
			string v;
			cin>>tiempo>>v;

			if(v.compare(l)) qLeft.push(i);
			else qRight.push(i);
			arr[i]=tiempo;
		}

		int t_Cruzar = 0;
		int pos_Ferry = 0;

		while(!qLeft.empty() || !qRight.empty()){
			int aux=0;

			if(qLeft.empty()) aux=arr[qRight.front()];
			else if(qRight.empty()) aux=arr[qLeft.front()];
			else aux=MIN( arr[qLeft.front()] , arr[qRight.front()] );

			t_Cruzar = MAX(t_Cruzar,aux);
			
			if(!pos_Ferry) fun(qRight, t_Cruzar, t, n);
			else fun(qLeft, t_Cruzar, t, n);

			t_Cruzar += t;
			pos_Ferry= POS(pos_Ferry);
		}

		for(int i=0; i<m ;i++) cout<<t_Llegada[i]<<endl;
	}
	return 0;
}