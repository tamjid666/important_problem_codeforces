#include<iostream>
using namespace std; 

int main()
{
	int t ; cin >> t ; while(t--)
	{
		int n; cin >> n ; 
		int a[n][n] ;

		int bottom_row =0 , bottom_col= 0 ;
		for(int i=0; i<n; ++i)
		{	
			for(int j=0; j<n; ++j)
			{
				char c ; cin >> c ;
				if(c=='0')a[i][j] = 0;
				else a[i][j] = 1;
				if(a[i][j] == 1)
				{
					bottom_row=i;
					bottom_col=j;
				}
			}
		}

		int top_row = 0 , top_col = 0 ;
		for(int i=0; i<n; ++i)
		{
			for(int j=0; j<n; ++j)
			{
				if(a[i][j] == 1)
				{
					top_row = i;
					top_col = j ;
					i = n ;
					break;
				}
			}
		}

		if(a[bottom_row][top_col] == 1 && a[top_row][bottom_col] == 1)
			cout << "SQUARE\n";
		else
			cout << "TRIANGLE\n";
	}
}