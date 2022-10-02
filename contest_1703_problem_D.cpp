
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


int main()
{
	debugMode();
	int t; cin>>t;
	while(t--)
	{
		
		unordered_map<string,char> m;
		int n;
		cin>>n;
		string a[n];
		string ans="";
		for(int i=0;i<n;i++)
		{
			string ss;
			cin>>ss;
			a[i]=ss;
			m[ss]++;
		}
		for(int i=0;i<n;i++)
		{
			bool b=false;
			int k=0;
			string s=a[i];
			for(unsigned int j=0;j<s.size();j++)
			{
	
				string x=s.substr(k,j);
				string z=s.substr(j,s.size()-j);
				if((m.find(x)!=m.end()) && (m.find(z))!=m.end())
				{
					ans+='1';
					b=true;
					break;	
				}	
				
			}
			if(b==false)
					ans+='0';
				
		}
		cout<<ans;
		cout<<"\n";		
		
		
	}
	return 0;
}

