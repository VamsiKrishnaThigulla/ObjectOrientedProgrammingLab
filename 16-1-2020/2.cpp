#include<bits/stdc++.h>
using namespace std;

int i, a[1000],b[1000],n;

void BubbleSort(int arr[],int size)
{
	int j=0,i=0,temp;
	for(j=0;j<size-1;j++)
	{	
		for(i=0;i<size-j-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				arr[i]=arr[i]^arr[i+1];
				arr[i+1]=arr[i]^arr[i+1];
				arr[i]=arr[i]^arr[i+1];
			}
		}
	}
}

void swap(int i,int j)
{
	int temp=a[i];
    a[i]=b[j];
    b[j]=temp;
}

int sum1()
{
    int s=0;
    for(i=0;i<n/2;i++)
    {
        s=s+a[i];
    }
    return s;
}

int sum2()
{
    int s=0;
    for(i=0;i<n/2;i++)
    {
        s=s+b[i];
    }
    return s;
}

int main()
{
	int n,i,j;
	cout<<"Enter the number of members in the array"<<endl;
	cin>>n;
	if(n%2!=0)
	{
		cout<<"Array size is supposed to be even in the given constraints"<<endl;
		return 0;
	}
	else
	{
		int arr[n];
		cout<<"Enter the members of the array"<<endl;
		for(i=0;i<n;i++)			
		{
			cin>>arr[i];
		}		
		BubbleSort(arr,n);
		int a[n/2],b[n/2];
		for(i=0;i<n/2;i++)
		{
			a[i]=arr[i];
			b[i]=arr[i+n/2];
		}
		int x=abs(sum2()-sum1());
		int temp;
		for(i=0;i<n/2;i++)
		{
			for(j=0;j<n/2;j++)
			{
				swap(i,j);
				temp=abs(sum2()-sum1());
				if(temp<x)
					x=temp;
				else
					swap(i,j);
			}
		}
		cout<<endl<<"The first array is"<<endl;
		for(i=0;i<n/2;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl<<"The second array is"<<endl;
		for(i=0;i<n/2;i++)
		{
			cout<<b[i]<<" ";
		}
		return 0;
	}
}


