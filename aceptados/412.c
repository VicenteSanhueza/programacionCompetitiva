#include <stdio.h>
#include <math.h>

int fun(int a, int b){
	if(a%b == 0) return b;
	return fun(b,a%b);
}

int main(){
	int n;
	while(1){
		scanf("%d",&n);
		if(!(n>=1 && n<=50)) break;
		int v[n];
		int i,j,total_pares;
		for(i=0; i<n ;i++) scanf("%d",&v[i]);
		int cantidad_pares_resultantes = 0;
		total_pares= (n*(n-1))/2;
		for(i=0; i<n-1 ;i++){
			for(j=i+1; j<n ;j++){					//formo los pares
				if(fun(v[i],v[j])==1){
					cantidad_pares_resultantes++;
				}
			}
		}
		if(cantidad_pares_resultantes == 0){
			printf("No estimate for this data set.\n");
		}else{
			double a= (double)cantidad_pares_resultantes/total_pares;
			printf("%.6lf\n",sqrt(6/a));
		}
	}
	return 0;
}