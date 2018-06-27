#include <bits/stdc++.h>

using namespace std;

typedef struct{
	char cadena[50];
	int num;
}ADN;

int fun(ADN v,int tam){
	int count=0;
	for(int i=0; i<tam ;i++){
		if(v.cadena[i] == 'C'){
			for(int j=i+1; j<tam ;j++){
				if(v.cadena[j] == 'A'){
					count++;
				}
			}
		}else if(v.cadena[i] == 'G'){
			for(int j=i+1; j<tam ;j++){
				if(v.cadena[j] == 'A' || v.cadena[j] == 'C'){
					count++;
				}
			}
		}else if(v.cadena[i] == 'T'){
			for(int j=i+1; j<tam ;j++){
				if(v.cadena[j] == 'A' || v.cadena[j] == 'C' || v.cadena[j] == 'G'){
					count++;
				}
			}
		}
	}
	return count;
}

int cmp(const void* a, const void* b){
	ADN c,d;
	c=*(ADN*)a;
	d=*(ADN*)b;
	return	c.num > d.num;
}

int main(){
	int cases;
	cin>>cases;
	int tam,n;
	while(cases--){
		cin>>tam;
		cin>>n;
		ADN* v = (ADN*)malloc(sizeof(ADN)*n);
		for(int i=0; i<n ;i++){
			cin.ignore();
			scanf("%[^\n]",v[i].cadena);
			v[i].num= fun(v[i],tam);
		}
		qsort(v,n,sizeof(ADN),cmp);
		for(int i=0; i<n ;i++){
			printf("%s\n",v[i].cadena);
		}
		if(cases != 0)puts("");
		
	}
	return 0;
}