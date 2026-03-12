#include<stdio.h>


void dec2oct(int*b,int*c,int*d,int *e,int a);
void dec2hex(char*,char*,char*,int);
char digit2hex(int);

void main(void)
{
	int a,b,c,d,e;
	char o,p,q;
	scanf("%d",&a);
	dec2oct(&b,&c,&d,&e,a);
	printf("%04o\n",a);
	printf("%d%d%d%d\n",b,c,d,e);
	dec2hex(&o,&p,&q,a);
	printf("%03X\n",a);
	printf("%c%c%c\n",o,p,q);
	printf("%c\n",digit2hex(a));
}
void dec2oct(int*b,int*c,int*d,int*e,int a)
{
	*b=a/512;
	*c=(a-*b*512)/64;
	*d=((a-*b*512)-*c*64)/8;
	*e=a-(a/8)*8;
}
void dec2hex(char*o,char*p,char*q,int a)
{
	*o=a/256;
	if(*o>=10)
	{
		*o+='A'-10;
	}
	else
	{
		*o+='0';
	}
	*p=(a%256)/16;
	if(*p>=10)
	{
		*p+='A'-10;
	}
	else
	{
		*p+='0';
	}
	*q=a%16;
	if(*q>=10)
	{
		*q+='A'-10;
	}
	else
	{
		*q+='0';
	}
}
char digit2hex(int a)
{
	char m=a%16;
	if(m>=10)
	{
		m+='A'-10;
	}
	else
	{
		m+='0';
	}
	return m;
}
