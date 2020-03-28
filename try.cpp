#include <math.h>
#include <iostream>

using namespace ::std;

int main()
{
   int s;
   cin>>s;
   
   int a[s],p[s/2],q[s/2];
   int visit[s]={0};
 
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
 
   int diff=0,tmp=0,del_j=0,ct=0;
   
   
   for(int i=0;i<s;i++)
   {
	int min_j;
      for(int j=i+1;j<s;j++)
	{
	 if(visit[j]!=1)
 	  {
		min_j=diff+a[i]-a[j];
	  	del_j=j;
		break;
	  }	
	}
      if(visit[i]!=1)
	{
	 visit[i]=1;
            for(int j=0;j<s;j++)
            {   
                if(visit[j]!=1)
                {
                    tmp=a[i]-a[j];
                    tmp= abs(diff-tmp)<=abs(diff+tmp) ? (diff-tmp) : (diff+tmp);
                    if(abs(tmp)<abs(min_j))
                        {
                            min_j=tmp;
                            del_j= tmp==diff+(a[i]-a[j]) ? j : -j;
                        }
                }
            }
	
        if(del_j<0)
        {
            p[ct]=a[-1*del_j];
            q[ct]=a[i];
            visit[-1*del_j]=1;
        }
        else
        {
            p[ct]=a[i];
            q[ct]=a[del_j];
	    visit[del_j]=1;
        }
	ct++;
	diff=min_j;
	}
   }   
     for(int i=0;i<s/2;i++)
	cout<<p[i]<<' '<<q[i]<<'\n';
	cout<<'\n';
}

