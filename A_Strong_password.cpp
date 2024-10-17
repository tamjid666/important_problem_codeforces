//https://codeforces.com/contest/1997/problem/A
#include<bits/stdc++.h>
using namespace std;

void addChar(string &s) {
    char lastChar = s.back(); //s.front() == first_value 
    s.push_back(lastChar == 'z' ? 'y' : (lastChar == 'a' ? 'b' : lastChar - 1));
}

void solve() {
    string s,a;
    cin >> s;
    
    int i = 0;
    while (i < s.size() - 1 && s[i] != s[i+1]) 
        a.push_back(s[i++]);
    
    if (i == s.size() - 1 || s.size() == 1) {
        addChar(s);
        cout << s << endl;
    } else {
        a.push_back(s[i]);
        addChar(a);
        cout << a + s.substr(i+1) << endl;
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) 
        solve();
}
