#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the n value";
	cin>>n;
	int a[n],l=0;
	
	for(int i=0;i<n;i++)
	{
		cout<<"enter arry elements";
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		l=l+a[i];
     	}
	}
	cout<<l;
}
		