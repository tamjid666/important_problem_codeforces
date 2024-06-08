#include<bits/stdc++.h>
using namespace std; 

void solve()
{
	int n ; cin >> n ; 
	int a[101] = {};
	for(int i=0; i<n; ++i)
	{
		int x ; cin >> x ; 
		a[x]++;
	}

	int sum = 0 ;
	for(int i=0; i<101; ++i)
		sum += a[i]/3 ;

	cout << sum << "\n" ;
}
int main()
{
	int t ; cin >> t ; while(t--){solve();}
}