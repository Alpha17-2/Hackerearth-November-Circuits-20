#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	cin>>b[i];
	int red;
	cin>>red;
	int p,q,r,s;
	cin>>p>>q>>r>>s;
	if(n%2==0)
	cout<<"A-C";
	else
	cout<<"B-D";
	return 0;
}