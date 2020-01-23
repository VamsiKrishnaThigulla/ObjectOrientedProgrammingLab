#include<bits/stdc++.h>
using namespace std;

#define SIZE 10000

int position(int arr[],int size, int val)
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

int main()
{
	int arr[SIZE];
	int i=0;
	for(i=0;i<SIZE;i++)
	{
		arr[i]=-1;
	}
	cout<<"Enter the members of the array"<<endl;
	for(i=0;i<SIZE;i++)
	{
		cin>>arr[i];
		if(arr[i]==-1)
			break;
	}
	cout<<"First -1 is found at "<<position(arr,SIZE,-1)+1<<" position"<<endl;
}
