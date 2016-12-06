#include<stdio.h>

int main(){
    int tam,flag;
    flag = 0;
    while(scanf("%d",&tam)){
        if(tam==0)
            break;

        int result[tam];
        
        if(flag == 1)
            printf("\n");
        else 
            flag = 1;
        
        for(int i=0;i<tam;i++)
            scanf("%d",&result[i]);
        
        for(int x=0;tam-x>=6;x++)
            for(int y=x+1;tam-y>=5;y++)
                for(int z=y+1;tam-z>=4;z++)
                    for(int a=z+1;tam-a>=3;a++)
                        for(int b=a+1;tam-b>=2;b++)
                            for(int g=b+1;tam-g>=1;g++)
                                printf("%d %d %d %d %d %d\n",result[x],result[y],result[z],result[a],result[b],result[g]);
    
    }
    return 0;
}