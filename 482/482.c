#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define readInt(a) scanf("%d",&a)
#define readFloat(f) scanf("%f",&f)
#define readString(s) scanf("%s",s)
#define readLine(l) fgets(l, sizeof(l), stdin) 
#define eraseVector(v,t) memset(v,'\0',t)

int main(){
	int cases;
	int index[500000];
	char result[5000][30];
	char linha[50000];
	char value[30];
	int tam;
	int count,i,k,j;
	if(scanf("%d\n",&cases)!= 1)
		return 0;
 
	while(cases--){

		count = tam = k = j = 0;
		eraseVector(value,30);
		readLine(linha);

		tam = strlen(linha);

		for(i =0; i<tam;i++){
			if(linha[i] != ' ' && linha[i] != '\n' ){
				value[k] = linha[i];
				k++;
			}
			else{
				index[count] = atoi(value)-1;
				result[index[count]][0] = '\0';
				count++;
				k = 0;
				eraseVector(value,30);
			}
		}

		eraseVector(value,30);
		readLine(linha);
		k=0;

		tam = strlen(linha);

		for(i =0; i<tam;i++){
			if(linha[i] != ' ' && linha[i] != '\n' ){
				value[k] = linha[i];
				k++;
			}
			else{
				strcpy(result[index[j]],value);
				j++;
				k = 0;
				eraseVector(value,30);
			}
		}

		for(i = 0; i<count;i++){
			if(result[i][0] != '\0')
				printf("%s\n", result[i]);
		}

		printf("\n");
		scanf("\n");
	}

	return 0;
}