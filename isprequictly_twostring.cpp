
//https://codeforces.com/contest/1968/problem/B
#include<bits/stdc++.h>
using namespace std; 

void solve()
{
	int n , m ; cin >> n >> m ;
	string a , b ; cin >> a >> b ; 

	int k = 0 , ct = 0 ; 

	for(int i=0; i<n; ++i)
	{
		for(int j=k; j<m; ++j)
		{
			k=j+1;
			if(a[i] == b[j])
			{
				ct++; 
				break; 
			}
		}
		if(k>=m)
				break;
	} 
	cout << ct << "\n"; 
}
int main()
{
	int t ; cin >> t ; while(t--){solve();}
}