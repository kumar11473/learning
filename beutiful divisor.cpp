// #include<iostream>
// #include<algorithm>
// #include<set>
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
 
 
void debugMode() {
ios::sync_with_stdio(0);
cin.tie(0);
#ifndef ONLINE_JUDGE
#endif 
}
int func(int n)
{
	int i=0;
	while(true)
	{
		int sum=((pow(2,i)-1)*(pow(2,i-1)));
		if(sum>n)
			return (i-1);
		
		i++;	
	}
}

int main()
{
	debugMode();
	
	int n; cin>>n;
	if((n&1)==1)
		cout<<"1";
	else
	{
		int i=func(n); cout<<i<<" ";
	cout<<((pow(2,i)-1)*pow(2,i-1));
	}	
	
	return 0;
}

