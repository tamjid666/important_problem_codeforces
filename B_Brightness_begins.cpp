//https://codeforces.com/contest/2020/problem/B
#include<iostream>
#include<math.h>
using namespace std; 
#define ll long long  

ll root(ll mid)
{
	ll x = sqrt(mid)+2; 
	while(x*x>mid)
		x--;
	return x ; 
}
void solve()
{
	ll k ; cin >> k ; 
	unsigned ll s = 0 , e  = 1e19 ,ans ; 

	while(s<=e)
	{
		ll mid = (s+e)>>1;
		ll rt = root(mid) ; 
		if(mid-rt>=k)
		{
			ans = mid;
			e = mid-1;
		}
		else s = mid+1; 
	}
	cout << ans << endl ; 
}
int main()
{
	int t ; cin >> t ; while(t--){solve();}
}