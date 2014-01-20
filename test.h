#include <stdio.h>
#include <stdlib.h>

int main(){
	int tall[10];
	int i;
	int inn;
	printf("Skriv inn 10 tall:");
	for(i=0; i<10; i++){
		scanf("%i",&inn);
		tall[i]=inn;
	}
	printf("\n");
	int buffer; 
	int sorted=0;
	while(sorted==0){
		for(i=1; i<10; i++){
			if(tall[i-1]>tall[i]){
				buffer=tall[i-1];
				tall[i-1]=tall[i];
				tall[i]=buffer;
				break;
			}
		}
		sorted=1;
		for(i=1; i<10; i++){
			if(tall[i]<tall[i-1]){
				sorted=0;
				break;
			}
		}			
	}
	for(i=0; i<10; i++){
		printf("%i\n",tall[i]);
	}
}
