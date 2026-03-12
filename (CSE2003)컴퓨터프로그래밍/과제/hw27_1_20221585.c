#include<stdio.h>
void printa(int a[]);
void main(void){
		printf("Input (10numbers): ");
		int a[10],max=-1000001,min=1000001,i=0;
		for(i;i<10;i++){
			scanf("%d",&a[i]);
			if(a[i]>max){
				max=a[i];
			}
			else if(a[i]<min){
				min=a[i];
			}
		}
		for(i=0;i<5;i++){
				int linker;
				linker=a[9-i];
				a[9-i]=a[i];
				a[i]=linker;
		}
		i=0;
		while(i<10){
			printf("%d ",a[i]);
			i++;
			if(i==10){
					printf("\n");
			}
		}
		printf("Max: %d, Min: %d\n",max,min);
}
