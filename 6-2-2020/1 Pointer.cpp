#include<bits/stdc++.h>
using namespace std;

int p=INT_MAX;
int *q=&p;

int min(int* a[],int n,int* b[])
{
	int min=*a[0];
	int i;
	for(i=1;i<n;i++)
	{
		if(min>=*a[i])
		{
			min=*a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(*a[i]==min)
		{
			if(a[i]!=b[i])
			{
				a[i]++;
			}
			else
			{
				a[i]=q;
			}
		}
	}
	return min;
}

int main()
{
	int n;
	cout<<"Enter the number of arrays"<<endl;
	cin>>n;
	int size;
	cout<<"Enter the size of the arrays"<<endl;
	cin>>size;
	cout<<"Enter the members of the array"<<endl;
	int arr[n][size];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<size;j++)
		{
			cin>>arr[i][j];
		}
	}
	int* a[n];
	int* b[n];
	for(i=0;i<n;i++)
	{
		a[i]=&arr[i][0];
		b[i]=&arr[i][size-1];
	}	
	for(i=0;i<n*size;i++)
	{
		cout<<endl;
		cout<<min(a,n,b);
	}
	
	
	return 0;
}
