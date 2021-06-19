#include<iostream>
using namespace std;
int main()
{
	int temp,n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{
		for(int j=i;j>0;j--)
		{
			if(a[i]<a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
			else
			{
				break;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}