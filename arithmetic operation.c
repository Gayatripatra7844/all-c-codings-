#include<stdio.h>
int main ()
{
	int a,b;
	int sum,mul,div,sub;
	printf("enter values of a & b:");
	scanf("%d%d",&a, &b);
	sum=a+b;
	mul=a*b;
	div=a/b;
	sub=a-b;
	printf("sum:%d\n",sum);
	printf("mul:%d\n",mul);
	printf("div:%d\n",div);
	printf("sub:%d\n",sub);
	return 0;
}