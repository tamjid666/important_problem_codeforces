//https://codeforces.com/problemset/problem/1980/B
#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int t ; cin >> t; while(t--)
	{
		int n , f , k ; cin >> n >> f >> k ; 

		int a[n] ;
		for(auto &x : a ) cin >> x ; 

		int x = a[f-1] ;

		//sort(a,a+n,greater<int>());
		//bubble sort
		for(int i=0; i<n; ++i)
		{
			bool f=false ;
			for(int j=0; j<n-i-1; ++j)
			{
				if(a[j]<a[j+1])
				{
					swap(a[j],a[j+1]);
					f=true ;
				}
			}
			if(!f) break; 
		}

		/*for(auto x : a) cout << x << " ";*/

		if(a[k-1] > x)
			cout << "NO\n" ;
		else if(a[k-1]<x)
			cout << "YES\n" ;
		else
			{
				cout << (k==n || a[k] < x ? "YES\n" : "MAYBE\n"); 
			}
	}
}