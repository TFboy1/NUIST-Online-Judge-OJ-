#include<stdio.h>

int main()
{     int a,b,c,i,tmp,t;
		while(scanf("%d ",&a)!=EOF)
	{scanf("%d %d",&b,&c);
	
	if(a<b)//���a��bС������a��b��ֵ��ʹa��Ŵ������

{

tmp=a;

a=b;

b=tmp;

}

if(a<c)//���a��cС������a��c��ֵ��ʹa��Ŵ������

{

tmp=a;

a=c;

c=tmp;

}

if(b<c)//���b��cС������b��c��ֵ��ʹb��Ŵ������

{

tmp=b;

b=c;

c=tmp;

}

for(t=c;t>1;t--)
	if(c%t==0&&a%t==0&&b%t==0)
		break;
printf("%d\n",t);
		}}