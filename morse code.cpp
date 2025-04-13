#include<bits/stdc++.h>
using namespace std;

bool f(string &s){
	
	int n=s.length();
	if(s[0]!='.' or s[n-1]!='-') return 0;
	stack<char> st;
	for(int i=0;i<n;i++){
		if(s[i]=='.') st.push('.');
		else{
			while(!st.empty() and st.top()!='.') st.pop();
			st.pop();
		}
	}
	return st.empty();
}
int ff(string input[] ,int n){
	int c=0;
	for(int i=0;i<n;i++) c+=f(input[i]);
	return c;
}
int main(void){
	int n;
	cin>>n;
	string a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<ff(a,n);
}
