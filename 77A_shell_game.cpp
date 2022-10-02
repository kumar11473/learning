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


signed main(){
  debugMode();
int n,x;
cin>>n>>x;

int a[3][7]={
	{-1,1,2,2,1,0,0},
	{-1,0,0,1,2,2,1},
	{-1,2,1,0,0,1,2}
};

n=n%6;
if(n==0)
	n=6;

//int c=0;
for(int i=0;i<3;i++)
{
	if(a[i][n]==x)
		cout<<i;
}

  return 0;
}
 