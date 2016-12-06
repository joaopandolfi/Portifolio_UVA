#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int col[102],tam,linha,a,b;

void busca(int c){
	int x,y,count,flag;
	if ( c == 8 && col[b] == a){
		printf("%2d      %d",++linha, col[0] + 1 );
		for (x = 1; x < 8; x++)
			printf(" %d", col[x] + 1);
		printf("\n");
	}

	for (y = 0; y < 8; y++){
		flag = 1;

		for (count = 0; count < c; count++)
			if (col[count] == y || abs(count - c) == abs(col[count] - y)){
				flag = 0;
				break;
			}
		
		if(flag == 1){
			col[c] = y;
			busca(c + 1);
		}
	}
}

int main(){
	int i = 0;
	scanf("%d",&tam);
	while(i<tam){
		linha = 0;
		scanf("%d%d",&a,&b);
		a--;
		b--;
		printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");
		busca(0); 
		printf("\n");		
		i++;
	}
	return 0;	
}

