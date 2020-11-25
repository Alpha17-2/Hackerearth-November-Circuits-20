/*  Author : Alpha_The_Coder
    Created on 25/11/2020      */
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
   lli n;
   cin>>n;
   if(n==1)
   {
       for(int i=1;i<=2;i++)
       cout<<"-1\n";
       return;
   }
   if(even(n))
   {
       // even number found
       lli ans1=0;
       ans1=n*(n/2); // Maximum answer
       int ans2=n; // Minimum answer
       cout<<ans2<<"\n";
       for(int i=1;i<=n;i++)
       {
           if(even(i))
           cout<<i-1<<" ";
           else
           cout<<i+1<<" ";
       }
       cout<<ans1<<"\n";
       for(int i=n;i>0;--i)
       cout<<i<<" ";
   }
   else
   {
       // Odd number
       lli ans1=0,ans2=0;
       string s="",s2="";
       int originaladd=1,half=(n/2)+1;
       for(lli i=n;i>0;--i,originaladd++)
       {
         if(originaladd==half){
              ans1+=abs((i-1)-originaladd);
              s+=to_string((i-1));
              s+=" ";
         }
            
         else if(originaladd==half+1){
              ans1+=abs((i+1)-originaladd);
              s+=to_string((i+1));
              s+=" ";
         }
         else{
              ans1+=abs(i-originaladd);
              s+=to_string(i);
              s+=" ";
         }
       } 
       ans2=n+1;
       cout<<ans2<<"\n";
       for(lli i=1;i<=n-3;++i)
       {
           if(even(i))
           cout<<i-1<<" ";
           else
           cout<<i+1<<" ";
       }
       int temp=n-3+1;
       cout<<temp+1<<" "<<temp+2<<" "<<temp<<"\n";
      cout<<ans1<<"\n";
       cout<<s<<"\n";  
   }
   
}
