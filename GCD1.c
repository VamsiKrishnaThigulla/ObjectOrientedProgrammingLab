#include<stdio.h>
#include<math.h>

int gcd(int a,int b)
{
	if(a==0)
	{	
		return abs(b);
	}
	else	
		return gcd(b%a,a);	
}

int gcdi(int a,int b)
{
	int temp;
	while(a!=0)
	{
		temp=a;
		a=b%a;
		b=temp;
	}
	return abs(b);
}

int main()
{
	int a,b;
	printf("Enter the two integers \n");
	scanf("%d%d",&a,&b);
	int g, gi;
	g=gcd(a,b);
	printf("\nThe gcd through recursion of %d and %d is %d",a,b,g);
	gi=gcdi(a,b);
	printf("\nThe gcd through iteration of %d and %d is %d",a,b,gi);
	return 0;
}
