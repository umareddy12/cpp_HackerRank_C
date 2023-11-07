//CODEFORCES problem:i D eraser
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t,n,k;
 cin>>t;
 while(t--){
 cin>>n>>k;
 string s;
 cin>>s;
 int i=0,count=0;
 while(i<s.length())
 {
 	if(s[i]=='B')
 	{
	 	count++;
	 	i=i+k;
    }
    else{
    	i=i+1;
	}
 }
 cout<<count<<endl;
}
return 0;
 	
}
