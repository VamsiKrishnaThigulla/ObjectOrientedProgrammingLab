#include<bits/stdc++.h>
#include"gcd.h"
using namespace std;

int gcdleft,gcdright;

int gcdivcon(int arr[],int begin,int end)
{
	if(begin==end)
		return arr[begin];
	else
	{
		gcdleft=gcdivcon(arr,begin,(begin+end)/2);
		gcdright=gcdivcon(arr,((begin+end)/2)+1,end);
	}
	return gcd(gcdleft,gcdright);
}
