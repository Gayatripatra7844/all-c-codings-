//A number is palindrome or not
#include<stdio.h>
int main ()
{
	int originalnum,rev=0,remainder,n;
	printf("enter any integer");
	scanf("%d",&n);
    originalnum==n;
    while(n!=0)
    {
    	remainder=n%10;
    	rev=rev*10+remainder;
    	n=n/10;
    }
    if("originalnum=rev")
    printf("given number is a palindrome number");
    else
    printf("given number is not a palindrome");
    return 0;
}