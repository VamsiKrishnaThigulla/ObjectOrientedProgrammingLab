#include<iostream>
#include<math.h>
using namespace std;


int gcd(int a,int b)
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
			if(a%2==0)
				a=a/2;
			else if(b%2==0)
				b=b/2;
			else if(a>b)
				a=(a-b)/2;
			else if(a<b)
				b=(b-a)/2;
		}
		g=a;
		return abs((g*pow(2,d)));
	}
