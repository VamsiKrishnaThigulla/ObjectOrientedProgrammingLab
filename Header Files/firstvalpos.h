#include<bits/stdc++.h>
using namespace std;

#define SIZE 10000

int positionbin(int arr[],int size, int val)
{
	int min, max, mid;
	min=0, max=size;
	while(min<=max)
	{
		mid=(min+max)/2;
		if(arr[mid]==val)
		{
			if(arr[mid-1]!=val)
			{
				return mid;
			}
			else
			{
				max=mid;
			}
		}
		else
		{
			if(arr[mid+1]==val)
			{
				return (mid+1);
			}
			else
			{
				min=mid;
			}
		}
	}
}

int positionlin(int arr[],int size,int val)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]==val)
			return i;
	}
}

int position(int arr[],int size, int val,int start)
{
  int jmp=2,tmp;                           //jump value for quadratic probing
  if(arr[0]==-1)
	return(0);
  for(int p=0;pow(2,p)<size;p++)
    {   tmp=(int)pow(2,p)+start;
        if(arr[tmp]==val&&arr[tmp-1]!=val)
        	return((int)pow(2,p)+start);
    	if(arr[tmp]==val)   	 
    	 	return(position(arr,size,val,(int)pow(2,p-1)));
	}
}
