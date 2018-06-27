#include <stdio.h>
#include <stdlib.h>

int recu(long long int n){
	if(n==1) return 1;
	else if(n%2 == 1) return (recu((3*n)+1) + 1);
	else return (recu(n/2) + 1);
}

void swap(int* num1, int* num2){
	int aux;
	aux= *num1;
	*num1=*num2;
	*num2=aux;
}

int main(){	
	int inicio,start,fin,end;
	while(scanf("%d %d",&inicio,&fin) != EOF){
		start=inicio;
		end=fin;
		if(start>end) swap(&start,&end);
		int largo_maximo=1,i;
		for(i=start; i<=end ;i++){
			int largo_actual=recu(i);
			if(largo_actual>largo_maximo) largo_maximo= largo_actual;
		}
		printf("%d %d %d\n",inicio,fin,largo_maximo);
	}
	return 0;
}