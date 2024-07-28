https://codeforces.com/problemset/problem/1890/A
#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int t ; cin >> t ; 
	while(t--)
	{
		int n ; cin >> n ;
		int a[n] , ct = 0 ; 
		map<int,int> m; 
		for(int i=0; i<n; ++i)
		{
			int x; cin >> x ;
			m[x]++;
		}
		vector<int> v ; 
		for(auto &x : m) 
			v.push_back(x.second);
		if(v.size()==1) cout << "YES\n"; 
		else if(abs(v[0]-v[1])<=1 && v.size()<3) cout << "YES\n";
		else cout << "NO\n";
	}
}