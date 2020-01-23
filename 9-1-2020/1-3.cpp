#include<bits/stdc++.h>
using namespace std;

#define MAX 100

int sumexist(int A[],int size,int p)
{
	int diff,h[MAX];
	int i;
	for(i=0;i<size;i++)
	{
		h[A[i]]++;
	}
	for(i=0;i<size;i++)
	{
		diff=p-A[i];
		if(h[diff]>=1&&diff!=A[i])
			return 1;
		if(h[diff]==2&&diff==A[i])		
			return 1;
	}
	return 0;
}

int main()
{
	int size,p;
	cout<<"Enter the number of integers in the array"<<endl;
	cin>>size;
	cout<<"Enter the integer for which sum should exist"<<endl;
	cin>>p;
	cout<<"Enter the members of the array"<<endl;
	int i;
	int A[size];
	for(i=0;i<size;i++)
	{
		cin>>A[i];
	}
	if(sumexist(A,size,p))
	{
		cout<<"There exist two integers in the array such that their sum is equal to "<<p<<endl;
	}
	else
		cout<<"There exist no two integers in the array such that their sum is equal to "<<p<<endl;
	return 0;
}
