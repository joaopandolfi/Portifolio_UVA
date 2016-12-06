#include<stdio.h>

long long macacoThugLife[1000001];
int main(){
    long long i,j,k,maior,menor;
    long long quant,qtdData,lido;

    while(scanf("%lld",&quant)==1){

        for(i=0; i<quant; i++)
            scanf("%lld",&macacoThugLife[i]);
        
        scanf("%lld",&qtdData);
        
        i = qtdData;
        while(i--){
            maior=0;
            scanf("%lld",&lido);
            for(j=0; j<quant; j++){
                if(macacoThugLife[j]<lido)
                    maior=macacoThugLife[j];
                else
                    break;
            }

            if(maior==0) 
                printf("X ");
            else 
                printf("%lld ",maior);
            
            menor=0;
            k=quant;
            while(k--){
                if(macacoThugLife[k]>lido)
                    menor=macacoThugLife[k];
                else
                    break;
            }
            
            if(menor==0) 
                printf("X\n");
            else 
                printf("%lld\n",menor);
        }
    }
    return 0;
}