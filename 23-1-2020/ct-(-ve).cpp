#include<iostream>

using namespace std;

/*
Use Divide and Conquer strategy
Binary Search method is used to find the count of negative numbers
*/

int  ctn(int a[],int beg, int mid,int end)
{
	if(beg==mid&&mid==end)		
		{
		 if(a[mid]<0)
			return(1);
		 else
		 	return(0);
		}		
	else
		return(ctn(a,beg,(beg+mid)/2,mid)+ctn(a,mid+1,(end+mid+1)/2,end));	
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
	cout<<ctn(a,0,s/2,s);
}
