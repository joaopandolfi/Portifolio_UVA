	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <ctype.h>
	int main(){
		int tam,i,j,n,k,f,f2,v,a;
		char pal[2001][31];
		int nPal[2001];
		char aux[76];
		char cidade[31];
		i = n = a = 0;
		if(scanf("%d\n",&tam)!=1)
			return 0;
		memset(nPal,0,sizeof(nPal));
		while(i<tam){
			fgets(aux, sizeof(aux), stdin);		
			j = 0;
			f = 0;
			v = 0;
			a = 0;			
			memset(cidade,'\0',sizeof(cidade));
			while(j< 70 && aux[j] != '\0' && aux[j] != '\n'){
				if(f != 1){					
					if(!isspace(aux[j])){
						cidade[a] = aux[j];
						 a++;
						 v = 1;						 
					}
					else if(v == 1){						
						f = 1;						
					}
				}else{
					f2 = 1;
					for(k =0 ; k<n; k++){											
						if(strcmp(pal[k],cidade)==0){						
							nPal[k]++;
							f2 = 0;
							break;
						}
					}
					if(f2 == 1){							
						nPal[n]++;
						strcpy(pal[n],cidade);
						n++;
					}
					break;
				}
				j++;
			}
			if(f == 0){
				nPal[n]++;
				strcpy(pal[n],cidade);
				n++;				
			}

			i++;
		}

		for(i=0; i<n;i++){
			for(j = i;j<n;j++){
				if(strcmp(pal[i],pal[j])>0){
					strcpy(cidade,pal[j]);
					strcpy(pal[j],pal[i]);
					strcpy(pal[i],cidade);
					f = nPal[i];
					nPal[i] = nPal[j];
					nPal[j] = f;
				}
			}
		}

		for(i=0;i<n;i++){
			printf("%s %d\n",pal[i],nPal[i]);
		}
		return 0;
	}