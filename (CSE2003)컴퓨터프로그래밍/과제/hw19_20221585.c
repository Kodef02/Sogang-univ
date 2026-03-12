#include<stdio.h>

void dec2oct(int*,int*,int*,int*,int);
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
}
void dec2oct(int*b,int*c,int*d,int*e,int a)
{
	*b=a/512;
	*c=(a%512)/64;
	*d=((a%512)%64)/8;
	*e=a%8;
}
void dec2hex(char*o,char*p,char*q,int a)
{
	*o = digit2hex(a/256);
	*p = digit2hex((a%256)/16);
	*q = digit2hex(a%16);
}
char digit2hex(int a)
{
	char m=a;
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
