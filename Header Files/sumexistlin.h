#include<bits/stdc++.h>
#include<chrono>
using namespace std;

int sumexist(int A[],int size,int p)
{
	int diff; //difference of p,q
	int i,j;
	for(i=0;i<size;i++)
	{
		diff=p-A[i];
		for(j=0;j<size;j++)
		{
			if(i==j)
				continue;
			else if(diff==A[j])
				return 1;
		}
	}
	return 0;
}
