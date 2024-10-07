//https://codeforces.com/contest/2021/problem/B
#include<bits/stdc++.h>
using namespace std; 

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int t ; cin >> t ; while(t--)
	{
		int n , x ; cin >> n >> x;
		map<int,int> m ; 
		int ans = n ; 
		for(int i=0; i<n; ++i)
		{
			int y ; cin >> y ; 
			m[y]++;
		}
		for(int i=0; i<n; ++i)
		{
			if(m[i]==0)
				{ans = i; break;}
			m[i+x] += (--m[i]) ;
		}
		cout << ans << endl ;
	}
	return 0 ;
}