#include<stdio.h>

int main()
{     int a,b,c,i,tmp,t;
		while(scanf("%d ",&a)!=EOF)
	{scanf("%d %d",&b,&c);
	
	if(a<b)//如果a比b小，交换a和b的值，使a存放大的数字

{

tmp=a;

a=b;

b=tmp;

}

if(a<c)//如果a比c小，交换a和c的值，使a存放大的数字

{

tmp=a;

a=c;

c=tmp;

}

if(b<c)//如果b比c小，交换b和c的值，使b存放大的数字

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