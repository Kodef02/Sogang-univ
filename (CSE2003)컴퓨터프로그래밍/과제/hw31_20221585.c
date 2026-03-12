#include<stdio.h>

int main()
{
	FILE *ffp,*sfp;
	int count=0,c,d;
	char fbite[20],sbite[20];
	int same=0;
	printf("Input first file name: ");
	scanf("%s",fbite);
	printf("Input second file name: ");
	scanf("%s",sbite);
	ffp=fopen(fbite,"r");
	if(ffp==NULL)
	{
		printf("ERROR\n");
		return 0;
	}
	sfp=fopen(sbite,"r");
	if(sfp==NULL)
	{
		printf("ERROR\n");
		return 0;
	}

	while((c=fgetc(ffp))!=EOF&&(d=fgetc(sfp))!=EOF)
	{
		do
		{
			c=fgetc(ffp);
		}while(c==' '||c=='\n');
		do
		{
			d=fgetc(sfp);
		}while(d==' '||d=='\n');
		if(c==d)
		{
			same++;
		}
		count++;
	}
	float x=(float)same/count;
	x*=100;
	FILE *output=fopen("output","w");
	fprintf(output,"Total character: %d\nSame charact: %d\n%.3f%%\n",count,same,x);
	fclose(ffp);
	fclose(sfp);
	fclose(output);
}
