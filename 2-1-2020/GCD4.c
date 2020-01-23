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

int rgcdi(int a[],int n)
{
	int g=0;
	int i=0;
	for(i=0;i<n;i++)
	{
		g=gcd(g,a[i]);
	}
	return g;
}

int rgcd(int a[],int n)
{
	static int g=0,i=0;
	g=gcd(g,a[i]);
	i++;
	if(i==n)
		return g;
	return rgcd(a,n);
}

int main()
{
	int n;
	printf("Enter the no. of integers\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the integers\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int g=rgcd(a,n);
	printf("GCD by recursion is %d",g);
	int gi=rgcdi(a,n);
	printf("GCD by iteration is %d",gi);
	return 0;
}
