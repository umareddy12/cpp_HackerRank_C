//Codeforces:Way To Long Words problem
#include<bits/stdc++.h>//header file
using namespace std;
int main()
{
	int t;
	//cout<<"enter number of test cases:";
	cin>>t;
	while(t--){

string word;//declaration
//cout<<"enter ur word:";
cin>>word;
int len=word.length();
if(word.length()>10)
{
cout<<word.at(0)<<len-2<<word.at(len-1)<<endl;	
}
else{
cout<<word<<endl;
}
}
return 0;
}

	
