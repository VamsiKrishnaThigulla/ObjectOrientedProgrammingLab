#include<iostream>

using namespace std;

int  ct1(int a[],int beg, int mid,int end)
{
	if(beg==mid&&mid==end)		
		{
		 if(a[mid]<0)
			return(1);
		 else
		 	return(0);
		}		
	else
		return(ct1(a,beg,(beg+mid)/2,mid)+ct1(a,mid+1,(end+mid+1)/2,end));	
}

int main()
{
	int a[100],s;
	cout<<"enter array size";
	cin>>s;
	cout<<"enter array";
	for(int i=0;i<s;i++)
	{
		cin>>a[i];
	}
	cout<<ct1(a,0,s/2,s);
}
