#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,k;
	
	/*
	To print the sequence
	12345..(1-n)
	1234
	123
	12
	1
	*/
	cout<<"Enter the number of rows in the triangle i.e. the number of elements in the array"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<endl;
		for(j=1;j<n-i+1;j++)
		{
			cout<<j<<" ";
		}
	}
	
	/*
	To print the sequence
	12345
	 2345
	  345
	   45
	    5
	*/
	cout<<endl<<"Enter the number of rows in the triangle"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<endl;
		for(j=1;j<n+1;j++)
		{			
			if(j<=i)
			{
				cout<<"  ";
			}
			else
				cout<<j<<" ";
		}
	}
	
	/*
	To print the sequence
	1
	12
	123
	1234
	12345
	*/
	cout<<endl<<"Enter the number of rows in the triangle"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<endl;
		for(j=1;j<=i+1;j++)
		{
			cout<<j<<" ";
		}
	}
	
	/*
	To print the sequence 
	    5
	   45
	  345
	 2345
	12345     
	*/
	cout<<endl<<"Enter the number of rows in the triangle"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<endl;
		for(j=1;j<n+1;j++)
		{
			if(j<n-i)
				cout<<"  ";
			else
				cout<<j<<" ";
		}
	}
	
	/*
	To print the sequence
	12345678910
	 23456789
	  345678
	   4567
	    56
	    56
	   4567
	  345678 
	 23456789
	12345678910
	Ramesseum Tentyris!!!!!
	*/
	cout<<endl<<"Enter the number of rows in the pattern"<<endl;
	cin>>n;

		for(i=0;i<n;i++)
		{
			cout<<endl;
			for(j=1;j<2*n-i;j++)
			{			
				if(j<i)
					cout<<"  ";
				else if(j<2*n-i+1)
					cout<<j<<" ";
				else
					cout<<"  ";
			}
		}
		for(i=n;i<2*n;i++)
		{
			cout<<endl;
			for(j=n-i;j<2*n;j++)
			{			
				if(j<2*n-i-1)
					cout<<"  ";
				else if(j<=i-1)
					cout<<j<<" ";
				else
					cout<<"  ";
			}
		}
	
}
