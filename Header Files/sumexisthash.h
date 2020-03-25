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
