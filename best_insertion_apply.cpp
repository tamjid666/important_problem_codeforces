//https://codeforces.com/contest/1972/problem/A
#include<bits/stdc++.h>
using namespace std; 

void solve()
{
	int n ; cin>> n ; 

	int a[n] , b[n] ;
	for(int i=0; i<n; ++i) cin >> a[i] ;
	for(int i=0; i<n; ++i) cin >> b[i] ; 

	int ct = 0 ; 
	for(int i=0; i<n; ++i)
	{
		if(a[i]>b[i])
		{
			for(int k=n-1; k>0; k--)
			{
				a[k] = a[k-1];
			}
			a[0] = b[i] ;
			sort(a,a+n);
			// for(auto x : a ) cout << x << " " ;
			ct++;
		}
		// cout << "\n" ;
	}
	cout << ct << "\n"; 
}
int main(){
	int t ; cin >> t ; 
	while(t--) {solve();}
}