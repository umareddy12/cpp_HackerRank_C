//hacker Rank peoblem solving:Plus Minus
#include<bits/stdc++.h>
using namespace std;
void plusMinus(int n,int arr[])
{
	int pos=0,neg=0, zero=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			pos++;
		}
		else if(arr[i]<0)
		{
			neg++;
		}
		else{
			zero++;
		}
	}
    // Calculate the fractions and print them with 6 decimal places
    cout << fixed << setprecision(6) << (double)pos / n << endl;
    cout << fixed << setprecision(6) << (double)neg / n << endl;
    cout << fixed << setprecision(6) << (double)zero / n << endl;

}
int main()
{
	int n;
	cout<<"enter n value:";
	cin>>n;
	
	int arr[n];// Declare an array to store the input
	for(int i=0;i<n;i++)
	{
		//cout<<"enter array elements:"<<endl;
		cin>>arr[i];
	}
	plusMinus(n,arr);
	return 0;
}
