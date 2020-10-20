#include<bits/stdc++.h>
#define ll long long
using namespace std;

int a[(int)1e6+10];

void solve(){

	set<int> tprime;
	tprime.insert(4);
	for(int i=3 ; i<=1e6 ; i+=2)
	{
		if(a[i]==0)
		{
			tprime.insert(i*i);
			for(int j=i ; j<=1e6 ; j+=i)
				a[j]=1 ;
		}
	}
	for(auto i : tprime)
	{
		cout<<i<<" ";

	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}
