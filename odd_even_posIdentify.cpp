//https://codeforces.com/contest/318/problem/A
#include<bits/stdc++.h>
using namespace std; 

int main(){
	long long n , k; cin>> n >> k; 

	long long odd_count = (n+1)/2;
	// cout << odd_count << "\n"; 

	if(k<=odd_count)
		cout << 2*k-1 << "\n";
	else
		cout << 2*(k-odd_count) << "\n";
}