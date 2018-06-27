#include <bits/stdc++.h>

using namespace std;

int cmp(const void* a,const void* b){
	return *(int*)a < *(int*)b;
}

int main(){
	int n;
	cin>>n;
	int v[3];
	int aux=1;
	while(n--){
		for(int i=0; i<3 ;i++) cin>>v[i];
		qsort(&v,3,sizeof(int),cmp);
		printf("Case %d: %d\n",aux,v[1]);
		aux++;
	}
	return 0;
}