#include <stdio.h>
#include <stdlib.h>

void crarPrimos(long long int* v){
    int i,j;
    long long int num=7;
    v[0]=2;
    v[1]=3;
    v[2]=5;
    for(i=3; i < 5000 ;i++,num++){
        while(1){
            for(j=0; v[j] <= (num/2) ;j++){
                if((num%v[j]) == 0){
                    num++;
                    break;
                }
            }
            if(v[j]>num/2) break;
        }
        v[i]=num;
    }
}

int main(){
    long long int* v=(long long int*)malloc(sizeof(long long int)*5000);
    crarPrimos(v);
    long long int n;
    int i;
    for(i=0; i<20 ;i++){
        printf("%lld ",v[i]);
    }
    printf("\n");
    /*while(1){
        scanf("%lld",&n);
        if(n==0) break;
        printf("%lld =",n);
        if(n<0){
            printf(" -1 x");
            n=n*(-1);
        }
        int i;
        for(i=0; (i < 5000) && (n > 1) ;i++){
            while((n % v[i]) == 0){
                printf(" %lld",v[i]);
                n=n/v[i];
                if(n>1) printf(" x");
                else printf("\n");
            }
        }
        if(i==5000 && n>1) printf(" %lld\n",n);
    }*/
    free(v);
    return 0;
}