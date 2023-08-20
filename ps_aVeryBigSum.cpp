//problem soving in Hacker Rank:aVeryBigSum
#include<iostream>
using namespace std;
// /*
//  * Complete the 'aVeryBigSum' function below.
//  *
//  * The function is expected to return a LONG_INTEGER.
//  * The function accepts LONG_INTEGER_ARRAY arr as parameter.
//  */
 long long int aVeryBigSum( int n,long int arr[])
 {
long long int sum=0;
for(int i=0;i<n;i++)
{
    sum=sum+arr[i];
}
    return sum;

}
int main()
{
    int n;
    cout<<"enter n value:";
    cin>>n;
    long int arr[n];
    for( int i=0;i<n;i++)
    {
      cout<<"enter array elements:";
      cin>>arr[i];
    }

     long long int sum=aVeryBigSum(n,arr);
     cout<<"sum of array elements:";
    cout<<sum;
    return 0;
}
/* Sample output
5
1000000001 1000000002 1000000003 1000000004 1000000005
Your Output (stdout)
5000000015
Expected Output
5000000015 */
