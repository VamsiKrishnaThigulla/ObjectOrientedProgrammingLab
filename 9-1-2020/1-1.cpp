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
//	clock_t start,end;
//	start=clock();
//	auto start=chrono::high_resolution_clock::now();
//	ios_base::sync_with_stdio(false);
	if(sumexist(A,size,p))
	{
		cout<<"There exist two integers in the array such that their sum is equal to "<<p<<endl;
	}
	else
		cout<<"There exist no two integers in the array such that their sum is equal to "<<p<<endl;
	end=clock();
//	auto end=chrono::high_resolution_clock::now();
//	double time_taken=chrono::duration_cast<chrono::nanoseconds>(end-start).count();
//	time_taken *=1e-9;
//	double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
//	cout<<"Time taken is "<<fixed<<time_taken<<setprecision(10)<<" sec"<<endl;
	return 0;
}
