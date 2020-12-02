#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t,count=0;
	cin>>t;
	while(t--)
	{
		ll q;
		cin>>q;
		char w;
		cin>>w;
		ll e;
		cin>>e;
    string z;
    cin>>z;
	string m;
	cin>>m;
	if(m[q-1]==z[0]&&m[e-1]==z[0])
	continue;
		if(m[q-1]==z[0]||m[e-1]==z[0])
		{
			count++;
		}
}
cout<<count;
}
