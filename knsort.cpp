#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int t ; cin >> t ;
	while(t--)
	{
		long long n ; cin >> n ; 
		long long a[n+1] = {}; 
 
		long long m  = 0 , sum = 0 ; 
		for(int i=1; i<=n; ++i)
		{
			cin >> a[i];
			if(a[i-1] > a[i])
			{
				long long temp = a[i-1]-a[i] ;
				sum += temp;
				a[i] = a[i-1] ;
				m = max(m,temp);
			}
		}
		cout << sum + m << endl ; 
	} 
}