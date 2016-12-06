#include <stdio.h>

int main(){
	int tam;
	long long a,b;
	scanf("%d",&tam);

	while(tam--){
		scanf("%lld %lld",&a,&b);
		if(a>b)
			printf(">\n");
		else if(a < b)
			printf("<\n");
		else
			printf("=\n");
	}

	return 0;
}