#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*	--aux=me dice si el numero es negativo
	--aux2= me dira si el primera o segunda fila
	--i,j,jk iteradores
	--count= numero de ingresos por fila			*/
int main(){
	int i,j/*k*/,l, num=0 , aux=0 , aux2=1;
	int count=0;
	char entrada[5000000];
	scanf("%[^EOF]",entrada);
	int tam = strlen(entrada);
	int coef[1000];
	int eva[1000];
	int tam_coef;
	int tam_eva;
	for(i=0,j=0; i<=tam ;i++){
		if(entrada[i]=='-'){
			aux=1;
		}else{
			if(entrada[i]>='0'&& entrada[i]<='9'){
				num=(num*10) + (entrada[i] - '0');
			}else{	
				if(aux==1){
					num=num*-1;
					aux=0;
				}
				count++;
				if(aux2==1) coef[j++]=num;
				else eva[l++]=num;
				num=0;
			}
			if(entrada[i] == '\n' || i==tam){
				//printf("Numeros por linea %d\n",count);
				if(aux2==1) tam_coef= count;
				else tam_eva=count;
				/*for(k=0; k<count ;k++){
					if(aux2==1) printf("%d ",coef[k]);
					else printf("%d ",eva[k]);
				}*/
				aux2++;
				//printf("\n");
				count=0;
			}
		}
		if(aux2 > 2){
			int resultado=0;
			int aux3=0;
			int m;
			for(m=0; m<tam_eva ;m++){
				j=tam_coef-1;
				for(l=0; l<tam_coef ;l++,j--){
					if(j==0){
						resultado+=coef[l];
					}else{
						resultado+=(int)coef[l]*(pow(eva[m],j));
					}
				}
				if(aux3==0){
					printf("%d", resultado);
					aux3=1;
				}
				else printf(" %d",resultado);
				resultado=0;	
			}
			printf("\n");
			j=0;
			l=0;
			aux2=1;
		}
	}
	return 0;
}



/* 	LEER TODA LA ENTRADA EN UN BUFFER   */

		/*if(c>='0' && c<='9') num= (num*10) + (c - '0');//guardo el numero
		else{
			printf("%d\n",num);
			
			num=0;
		}
	}*/
