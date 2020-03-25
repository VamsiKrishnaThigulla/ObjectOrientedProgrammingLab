#include<bits/stdc++.h>
using namespace std;

#define SIZE 10000

/*Logic:
Use quadratic probing to search for the position of the first -1
*/

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

int main()
{
	int arr[SIZE];
	int i=0,mrk=0;
	cout<<"Enter the members of the array"<<endl;
	for(i=0;i<SIZE;i++)
	{	
		if(mrk==1)
			arr[i]=-1;
		else
			cin>>arr[i];
		
		if(arr[i]==-1)
			mrk=1;
	}
	cout<<"First -1 is found at "<<position(arr,SIZE,-1,0)+1<<" position"<<endl;
}
