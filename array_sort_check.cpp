#include<iostream>
using namespace std; 
const int N = 1e5+1 ;
int arr[N] ;  

void solve()
{
	int n ; cin >> n ;  
	for(int i=1; i<=n; ++i) cin >> arr[i] ; 

	int p = 0 ; 
	for(int i=1; i<n; ++i)
	{
		if(arr[i]>arr[i+1]) 
		{
			p=i;
			break; 
		}
	}

	if(!p) cout << "YES\n" ;
	else 
	{
		int test = 0 ; 
		for(int i=p+1; i<=n; ++i)
		{
			int j = (i%n) + 1 ; 
			if(arr[i] > arr[j])
			{
				test = 1; 
				break;
			}
		}
		if(!test) cout << "YES\n" ; 
		else cout << "NO\n" ;
	}
}

int main()
{
	int t ; cin >> t ; 
	while(t--){solve();}
}