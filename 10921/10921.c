#include <stdio.h>

char correspondente(char val){
    if(val == '0' || val == '1' || val == '-') 
        return val;
    if(val >= 'A' && val <= 'C') 
        return '2';
    if(val >= 'D' && val <= 'F') 
        return '3';
    if(val >= 'G' && val <= 'I') 
        return '4';
    if(val >= 'J' && val <= 'L') 
        return '5';
    if(val >= 'M' && val <= 'O') 
        return '6';
    if(val >= 'P' && val <= 'S') 
        return '7';
    if(val >= 'T' && val <= 'V') 
        return '8';
    
    return '9';
}

int main(){
    char string[31];
    int i;
    while(scanf("%s",string) == 1){
        i=0;
        while(string[i] != '\0'){
            printf("%c",correspondente(string[i]));
            i++;
        }
        printf("\n");
    }
    return 0;
}