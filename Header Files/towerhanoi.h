#include<bits/stdc++.h>
using namespace std;

void TOWERS(int n,char starting, char destination, char middle) //n is number of disks
{
	if(n==1)
	{
		cout<<"Move disk 1 from "<<starting<<" to "<<destination<<endl;
		return;
	}
	else
	{
		TOWERS(n-1,starting,middle,destination);
		cout<<"Move disk "<<n<<" from "<<starting<<" to "<<destination<<endl;
		TOWERS(n-1,middle,destination,starting);
	}
}
