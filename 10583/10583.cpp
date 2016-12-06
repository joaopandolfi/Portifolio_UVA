
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
 
#include<vector>
#include<string>
#include<map>

using namespace std;
 
int lista[50001];
 
void preenche(int tam){
    for(int i=1; i<=tam; i++)
        lista[i] = i;
}

int verificaRecursivo(int pos){
    if(lista[pos] == pos) 
        return pos;

    return lista[pos] = verificaRecursivo(lista[pos]);
}
 
 
int main(){
    int x,y,i,a,b,count;
    count = 0;
    
    scanf("%d",&x); 
    scanf("%d",&y);
    while(!(x==0 && y==0)){
        map<int ,bool>hmap;
        
        preenche(x);
    
        for(i=0; i<y;i++ ){
            scanf("%d",&a); 
            scanf("%d",&b);
 
            a = verificaRecursivo(a);
            b = verificaRecursivo(b);
 
            lista[a] = b;
        }
 
        for(int i=1; i<=x; i++)
            hmap[verificaRecursivo(i)] = true;
        
        printf("Case %d: %d\n", ++count, int(hmap.size()));
        
        scanf("%d",&x); 
        scanf("%d",&y);
    }
 
    return 0;
}