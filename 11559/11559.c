#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define readInt(a) scanf("%d",&a)
#define readString(s) scanf("%s",s)
#define left -1
#define right 1

int main(){
	int tests;
	char command[30];
	readInt(tests);
	while(tests--){
		int nCommands,i,result;
		readInt(nCommands);
		int commands[nCommands];
		i = result = 0;
		while(i<nCommands){
			readString(command);

			if(strcmp(command,"LEFT") == 0)
				commands[i] = left;
			else if(strcmp(command,"RIGHT") == 0)
				commands[i] = right;
			else{
				int number;
				readString(command);
				readInt(number);
				commands[i] = commands[number-1];
			}
			result += commands[i];
			i++;
		}

		printf("%d\n",result);
	}


	return 0;
}