#include<iostream>
using namespace std ; 

int main()
{
	cout << "----------Decimal To Any base-------- \n" ;
	int dec , base ; 
	cin >> dec >> base ;
	char arr[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

	string s ;
	while(dec!=0){
		int rem = dec%base; 
		s.push_back(arr[rem]); 
		dec /= base ;
	} 

	for(int i=s.size()-1; i>=0; --i)
		cout << s[i] ;
}