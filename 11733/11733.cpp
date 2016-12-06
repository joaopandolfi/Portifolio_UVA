#include <cstdio>  
#include <cstring>
#include <algorithm>  
#include <iostream>  
using namespace std;  

struct no{  
    int f, g, h, j;  
}N[100011];  
  
int soma, n, m, contador;  
int val[100011]; 
int pirulito[10011];  
  
int bRecursiva( int x )   {  
    if(x == pirulito[x])
        return x;        

    return pirulito[x] = bRecursiva(pirulito[x]);  
}  

void Magia() {  
    for ( int i = 0; i < m; ++i ) {   
        int a = bRecursiva(N[i].f);
        int b = bRecursiva(N[i].g);  
        if ( a != b ) {  
            val[contador++] = N[i].h;
            pirulito[a] = b;
            soma += N[i].h; 
        }  
    }  
}  

bool checkb( int a, int b ) {  
    return a > b;  
}  

bool checka( no a, no b ) {  
    return a.h < b.h;  
}  

int main(){  
    int A, tests,i, countPrint;
    scanf("%d", &tests);  
    countPrint = 1;
    while(tests--) { 
        int airport; 
        scanf("%d %d %d", &n, &m, &A);  
        
        for (i = 0; i<m; ++i ) 
            scanf("%d %d %d", &N[i].f, &N[i].g, &N[i].h);  
        
        soma = airport = contador = 0;  
        
        for (i = 0; i<=n; ++i ) 
            pirulito[i] = i;  

        sort(N, N+m, checka);  
        Magia();  
      
        for (i = 1; i <= n; ++i ) 
            if ( i == bRecursiva(i) ) 
                airport++;  
        
        soma += A*airport;  
        
        sort( val, val+contador, checkb);  
        
        for (i = 0; i < contador; ++i ) {  
            if ( val[i] >= A ){ 
                soma = soma + A - val[i];
                airport++;  
             }
            else 
                break;  
        }  
        printf("Case #%d: %d %d\n", countPrint++, soma, airport);  
    }  
}  