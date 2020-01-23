#include<stdio.h>
#include<math.h>

int gc; //Global to be used in recursive
int gcd(int a, int b)
{
	static int i=1;
	if(b==0)
		return a;
	if(a%i==0 && b%i==0)
	{
		gc=i;
	}
	if(i<=abs(b))
	{
		i++;
		return gcd(a,b);
	}
	else
		return abs(gc);
}

int gcdi(int a, int b)
{
	int gc,i;
	if(a==b||b==0)
	{
		return abs(a);
	}
	if(a==0)
	{
		return abs(b);
	}
	if(a<b)
	{
		for(i=1;i<=abs(a);i++)
		{
			if(a%i==0 && b%i==0)
			{
				gc=i;
			}
		}
	}
	if(a>b)
	{
		for(i=1;i<=abs(b);i++)
		{
			if(a%i==0 && b%i==0)
			{
				gc=i;
			}
		}
	}
	return abs(gc);
}

int main()
{
	int a,b;
	printf("Enter the integers\n");
	scanf("%d%d",&a,&b);
	int g,gi;
	g=gcd(a,b);
	printf("The GCD of %d and %d is %d by recursion\n",a,b,g);
	gi=gcdi(a,b);
	printf("The GCD of %d and %d is %d by iteration\n",a,b,gi);
	return 0;
}
