/*#include<iostream>
using namespace std; 
int main()
{
int temp,n,min;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
for(int i=0;i<n-1;i++)
{
 min=i;
for(int j=i+1;j<n;j++)
{
	if(a[i]>a[j])
	{
		min=j;
	}
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
	
}
}
for(int i=0;i<n;i++)
{
	cout<<a[i];
}
}*/
//sorted only first half in a array
/*#include<iostream>
using namespace std; 
int main()
{
int temp,n,min;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
for(int i=0;i<n/2-1;i++)
{
 min=i;
for(int j=i+1;j<n/2;j++)
{
	if(a[i]>a[j])
	{
		min=j;
	}
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
	
}
}
for(int i=0;i<n;i++)
{
	cout<<a[i];
}
}*/
//sorted only second sorted array
/*#include<iostream>
using namespace std; 
int main()
{
int temp,n,min;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
for(int i=n/2;i<n-1;i++)
{
 min=i;
for(int j=i+1;j<n;j++)
{
	if(a[i]>a[j])
	{
		min=j;
	}
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
	
}
}
for(int i=0;i<n;i++)
{
	cout<<a[i];
}
}*/
//first half is increment and second half is decrement
#include<iostream>
using namespace std; 
int main()
{
int temp,n,min;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
for(int i=0;i<n/2-1;i++)
{
 min=i;
for(int j=i+1;j<n/2;j++)
{
	if(a[i]>a[j])
	{
		min=j;
	}
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
	
}
}
for(int i=n/2;i<n-1;i++)
{
 min=i;
for(int j=i+1;j<n;j++)
{
	if(a[i]<a[j])
	{
		min=j;
	}
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
	
}
}
for(int i=0;i<n;i++)
{
	cout<<a[i];
}
}