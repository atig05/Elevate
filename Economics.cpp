#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void fuck(vector<int> &a,int i,vector<int > &s,vector<vector<int > > &res){
	if(i==a.size()){
		if(s.size()!=0)
			res.push_back(s);
		return;
	}
	s.push_back(a[i]);
	fuck(a,i+1,s,res);
	s.pop_back();
	fuck(a,i+1,s,res);
}
vector<int >  creampie(vector<vector<int > > &res){
	vector<int> a;
	double max=INT_MIN;
	for(int i=0;i<res.size();i++){
		//cout<<"creampie ";
		double s=0;
		for(int j=0;j<res[i].size();j++) {
			s+=res[i][j];
			//cout<<res[i][j]<<" ";
		}
			
		s/=res[i].size();
		double mid;
		if(res[i].size()%2)
			mid=res[i][res[i].size()/2];
		else{
			mid=(double)(res[i][res[i].size()/2]+res[i][res[i].size()/2-1]);
			mid/=2;
		}
		double diff=s-mid;
		//cout<<s<<" "<<mid<<" "<<diff<<endl;
		if(diff>max){
			max=diff;
			a=res[i];
		}
	}
	return a;
}
int main(void){
	int n=4;
	vector<int> a;//{1,2,3,4};
	for(int i=0;i<n;i++) a.push_back(i+1);
	vector<int> s;
	vector<vector<int > > res;
	fuck(a,0,s,res);
	
	s=creampie(res);
	for(int i=0;i<s.size();i++)
		cout<<s[i]<<" ";
	
}
