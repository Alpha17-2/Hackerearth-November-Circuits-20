/*  Author : Alpha_The_Coder
    Created on 22/11/2020      */
#include <bits/stdc++.h>
using namespace std;
#define iamalpha ios_base::sync_with_stdio(false);cin.tie(NULL);
#define loop(a,n) for(int i=a;i<n;i++)
#define nloop(a,n) for(int j=a;j<n;j++)
#define lli long long int
#define even(n) n%2==0?true:false
void solve();
int main()
{
    iamalpha;
    int t=1;
    //scanf("%d",&t);
    while(t--) {
        solve();
    }
    return 0;
}
void solve()
{
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    vector<int>sums(n);
    int val;
    loop(0,n)
    {
        cin>>val;
        a[i]=val;
        int current_sum=0;
        while (val>0)
        {
           current_sum+=val%10;
           val=val/10;
        }
        sums[i]=current_sum;
    }
    while (q--)
    {
        int index;
        cin>>index;
        index--;
        if(index==n-1)
        cout<<"-1\n";
        else
        {
           bool found=false;
           int ans=-1;
           for(int i=index+1;i<n;i++)
           {
               if(a[i]>a[index] && sums[i]<sums[index])
               {
                   found=true;
                   ans=i;
                   break;
               }
           }
           if(found) 
           {
               cout<<ans+1<<"\n";
           }
           else
           {
               cout<<ans<<"\n";
           }
        }
        
        
    }
    

}
