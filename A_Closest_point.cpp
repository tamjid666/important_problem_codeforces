//https://codeforces.com/contest/2004/problem/A
#include<bits/stdc++.h>
using namespace std; 

void solve()
{
	int n ; cin >> n ; 
	int a[n] ;
	for(int &x:a)
		cin >> x ; 
	
	cout << (n==2&&abs(a[n-1]-a[0])>1?"YES\n":"NO\n") ; 
}
int main()
{
	ios::sync_with_stdio(0) ; cin.tie(0); 
	int t ; cin >> t ; while(t--) solve(); 
}