//https://codeforces.com/contest/1985/problem/C
/*#include<bits/stdc++.h>
#define ll long long 
using namespace std; 

void solve()
{
	ll n ; cin >> n ; 
	vector<ll> a(n); 
	vector<ll> pre(n+1,0);

	for(int i=0; i<n; ++i)
	{
		cin >> a[i];
		pre[i+1] += pre[i]+a[i]; 
	}


	map<ll,ll> m ; 
	for(int i=1; i<=n; ++i)
		m[pre[i]]++;
	int ans = 0 ; 
	for(auto x:m)
	{
		if(find(a.begin(), a.end(), x.first) != a.end())
			ans++;
		if(x.second==2)
			ans++; 
	}
	
	cout << ans <<"\n" ;  
}
int main()
{
	int tt ; cin >> tt ; while(tt--)solve();
}*/
#include<bits/stdc++.h>
#define ll long long 
using namespace std; 

void solve()
{
	ll n ; cin >> n ; 
	ll mx = -1e9 , sum = 0 , cnt = 0 ; 
	for(ll i=0; i<n; ++i) 
	{
		ll x ; cin >> x ; 
		sum+=x;
		mx=max(mx,x);
		if(sum-mx==mx)cnt++; 
	}
	cout << cnt << endl ; 
}
int main()
{
	ios::sync_with_stdio(0);cin.tie(0);
	int t ; cin >> t ; while(t--) solve();
}