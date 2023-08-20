#include<iostream>
using namespace std;
int simpleArraySum(int n,int ar[])
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
	   	sum=sum+ar[i];
	}
	return sum;
}
int main()
{
	int n;
	cout<<"enter the n value:"<<endl;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter the  array elements:";
		cin>>ar[i];
	}
		int sum=simpleArraySum(n,ar);
		cout<<"the sum of n elements:";
		cout<<sum;
	
	return 0;
}
