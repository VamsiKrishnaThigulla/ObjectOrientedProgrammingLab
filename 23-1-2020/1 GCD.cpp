#include<bits/stdc++.h>
using namespace std;

int gcdleft,gcdright;

int gcd(int a,int b)
{
	if(a==0)
	{	
		return abs(b);
	}
	else	
		return gcd(b%a,a);	
}

int lcm(int )
{
	
}

int gcdivcon(int arr[],int begin,int end)
{
	if(begin==end)
		return arr[begin];
	else
	{
		gcdleft=gcdivcon(arr,begin,(begin+end)/2);
		gcdright=gcdivcon(arr,((begin+end)/2)+1,end);
	}
	return gcd(gcdleft,gcdright);
}

int main()
{
	int n;
	cout<<"Enter the number of integers in the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the integers in the array"<<endl;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];	
	}
	cout<<"GCD of the array of integers is "<<gcdivcon(arr,0,n-1)<<endl;
	return 0;
}

