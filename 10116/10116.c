#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define visited(v) v>=0
#define MAP_TAM 10
#define readLine(l) fgets(l, sizeof(l), stdin) 

int main(){
	int tam,qtdCommands,start,currC,currL;
	char map[11][11];
	int vis[11][11];
	int steps,i;
	while(1){
		scanf("%d %d %d\n",&tam,&qtdCommands,&start);

		if(tam == 0 && qtdCommands == 0 && start == 0)
			break;

		currL = start-1;
		currC = steps = i = 0;
		while(i<tam){
			readLine(map[i]);
			scanf("\n");
			for(int j=0 ;j<10;j++)
				vis[i][j] = -1;
			i++;
		}

		while(1){

			if(currC >= tam || currC < 0 || currL >= qtdCommands || currL < 0){
				printf("%d step(s) to exit\n", steps);
				break;
			}
			else if(visited(vis[currC][currL])){
				printf("%d step(s) before a loop of %d step(s)\n",vis[currC][currL],steps-vis[currC][currL]);
				break;
			}
			vis[currC][currL] = steps;
			switch(map[currC][currL]){
				case 'N':
					currC--;
				break;
				case 'S':
					currC++;
				break;
				case 'W':
					currL--;
				break;
				case 'E':
					currL++;
				break;
			}
			steps++;
		}
	}

	return 0;
}