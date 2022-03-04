#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n,m;
   cin>>n>>m;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int flag=0,ans;
   while(1)
   {
       for(int i=0;i<n;i++)
       {
           if((a[i]-m)<=0)
           {
               if(a[i]>0)
               {
                   a[i]=0;
                  ans=i+1;
               }
               
           }
           else
           {
               a[i]-=m;
           }
       }
       for(int i=0;i<n;i++)
       {
           if(a[i]!=0)
           {
               flag=0;
               break;
           }
           else
           {
               flag=1;
           }
       }
    if(flag==1)
    {
        break;
    }
       
   }
   cout<<ans;
   
	return 0;
}
