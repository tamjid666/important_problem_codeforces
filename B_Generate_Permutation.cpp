//https://codeforces.com/contest/2001/problem/B
#include<bits/stdc++.h>
using namespace std; 

void solve()
{
	int n ; cin >> n ; 

	if(n==1){
	 	cout << 1 << endl ; 
		return ;
	} 
	else if(n&1)
	{
		int mid = (n>>1); 
		vector<int> v; 
		for(int i=3; i<=n; i+=2) v.push_back(i);
		v.push_back(1); 
		for(int i=2; i<=n; i+=2) v.push_back(i);
		for(int x:v) cout << x << " " ; 
		cout << endl ; 
		return ; 
	}
	else cout << -1 << endl ; 
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int t ; cin >> t ; while(t--)solve();
}
