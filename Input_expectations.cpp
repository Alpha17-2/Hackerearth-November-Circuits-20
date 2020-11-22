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
   int n;
   cin>>n;
   vector<int>a(n);
   loop(0,n) cin>>a[i];
   int t=n;
   int current_count=0;
   int numberofN=0;
   
   for(;current_count<n;current_count+=(a[current_count]+1))
   {
       numberofN++;
   }
   if(current_count==n)
   {
       cout<<t-numberofN<<"\n";
       return;
   } 
   current_count=current_count-n;
   cout<<((t-numberofN)+current_count)<<"\n";
}
