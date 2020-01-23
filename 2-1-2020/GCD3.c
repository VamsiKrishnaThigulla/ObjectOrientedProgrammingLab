#include<stdio.h>
#include<math.h>

int gcdi(int a,int b)
{
	int g,d=0;
	while(a%2==0 && b%2==0)
	{
		a=a/2;
		b=b/2;
		d++;
	}
	while(abs(a)!=abs(b))
	{
		if(a!=0)
			g=a;
		else
			g=b;
		if(a%2==0&&a!=0)
		{
			a=a/2;
		}
		else if(b%2==0&&b!=0)	
		{	
			b=b/2;
		}
		else if(a>b)
			a=(a-b)/2;
		else if(a<b)
			b=(b-a)/2;	
	}
	if(a!=0)
			g=a;
	return abs((g*pow(2,d)));
}

int gcd(int a,int b)
{
	if(a%2==0 && b%2==0)
	{
		return (gcd(a/2,b/2))*2;
	}
	if(abs(a)!=abs(b))
	{
		if(a%2==0)
		{
			if(a!=0)
				return gcd(a/2,b);
			else
				return gcd(b,b);
		}
		else if(b%2==0)
		{
			if(b!=0)
				return gcd(a,b/2);
			else
				return gcd(a,a);
		}
		else if(a>b)
			return gcd((a-b)/2,b);
		else if(a<b)
			return gcd((b-a)/2,a);
	}
	else
		return abs(a);
}

int main()
{
	int a,b;
	printf("Enter the two integers\n");
	scanf("%d%d",&a,&b);
	int g,gi;
	g=gcd(a,b);
	printf("The GCD of %d and %d is %d by recursion\n",a,b,g);
	gi=gcdi(a,b);
	printf("The GCD of %d and %d is %d by iteration\n",a,b,gi);
	return 0;
}
