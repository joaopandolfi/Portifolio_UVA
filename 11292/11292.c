#include <stdio.h>


void sort(int val[], int tam) {
      int i, j, aux;
      for (i = 1; i < tam; i++) {
            j = i;
            while (j > 0 && val[j-1] > val[j]) {
                  aux = val[j];
                  val[j] = val[j-1];
                  val[j-1] = aux;
                  j--;
            }
      }
}

int main(){
	int diameters[20002];
	int talls[20002];
	int heads,knights;
	int i,j,cost,killCount;

	while(scanf("%d %d",&heads,&knights)){
		if(heads == 0 && knights == 0)
			break;

		cost = killCount = 0;

		for(i=0; i<heads; i++)
			scanf("%d",&diameters[i]);

		for(i=0; i<knights;i++)
			scanf("%d",&talls[i]);

		sort(diameters,heads);
		sort(talls,knights);

		for(i=0;i<knights;i++){
			for(j=killCount; j<heads;j++){
				if(talls[i]>=diameters[j]){
					killCount++;
					cost+= talls[i];
					break;
				}
			}
		}

		if(killCount < heads){
			puts("Loowater is doomed!");
		}
		else
			printf("%d\n", cost);
	}


	return 0;
}