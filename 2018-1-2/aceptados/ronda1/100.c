#include <stdio.h>

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
		int i;
		int largo_maximo=1;
		int largo_actual;
		for(i=start; i<=end ;i++){
			largo_actual=1;
			long long int num=i;
			while(num!=1){
				largo_actual++;
				if(num%2 == 1)num=(3*num)+1;
				else num= num/2;					
			}
			if(largo_actual>largo_maximo) largo_maximo=largo_actual;
		}
		printf("%d %d %d\n",inicio,fin,largo_maximo);
	}
	return 0;
}