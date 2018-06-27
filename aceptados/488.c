#include <stdio.h>

int main(){
	int n,a,f;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&a,&f);		
		int i,j;
		while(f--){
			for(i=1; i<=a ;i++){
				for(j=0; j<i ;j++){
					printf("%d",i);
				}
				printf("\n");
			}
			for(i=a-1 ;i>0 ;i--){
				for(j=i; j>0 ;j--){
					printf("%d",i);
				}
				printf("\n");
			}
			if(!(n==0 && f==0))printf("\n");
		}
	}
	return 0;
}