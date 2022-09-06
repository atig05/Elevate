#include<bits/stdc++.h>
using namespace std;
/*
input1-> the operation string
input2-> the initial string
input3-> the number of elements to be deleted
*/
string ff(string input1,string input2,int input3){
	stack<pair<char,string> > st;
	vector<char> s;
	for(int i=0;i<input2.length();i++) s.push_back(input2[i]);	
	int i=0;
	while(i<input1.length()){
		if(input1[i]=='w'){
			int j;
			string op="";
			for(j=i+1;input1[j]!='d' and input1[j]!='u';j++){
				s.push_back(input1[j]);
				op+=input1[j];
			}
			i=j;
			st.push({'w',op});
		}
		else if(input1[i]=='d'){
			string op="";
			for(int j=0;j<input3;j++){
				op+=s[s.size()-1];
				s.pop_back();
			}
			reverse(op.begin(),op.end());
			st.push({'d',op});
			i+=1;
		}
		else{
			char o=st.top().first;
			string op=st.top().second;
			if(o=='d'){
				for(int j=0;j<op.length();j++) s.push_back(op[i]);
			}
			else{
				for(int j=0;j<op.length();j++) s.pop_back();
			}
			st.pop();
			i+=1;
		}
	}
	string re="";
	for(int i=0;i<s.size();i++) re+=s[i];
	return re;	
}

int main(void){

	string input1,input2;
	int input3;
	cin>>input1;
	cin>>input2;
	cin>>input3;
	cout<<ff(input1,input2,input3);
}
