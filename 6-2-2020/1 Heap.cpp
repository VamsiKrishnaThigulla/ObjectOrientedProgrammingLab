#include<bits/stdc++.h>
using namespace std;

int p=INT_MAX;
int *q=&p;

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
	int min;
	priority_queue <int, vector<int>, greater<int> > pq;
	for(i=0;i<n;i++)
	{
		pq.push(*a[i]);
	}
	priority_queue<int>::iterator pqr;
	pqr=pq.begin();
	for(j=0;j<n*size;j++)
	{
		min=pq.top();
		pq.pop();
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
				pq.push(*a[i]);
			}
		}
		cout<<endl;
		cout<<min;
	}	
	return 0;
}
