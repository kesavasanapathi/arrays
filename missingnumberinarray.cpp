#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int sum;
	sum=n*(n+1)/2;
	int a[5]={1,2,3,0,5};
	for(int i=0;i<n;i++)
	{
		sum=sum-a[i];
	}
	cout<<sum;
}