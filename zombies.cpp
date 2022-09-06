#include<iostream>
using namespace std;
bool co_prime(int a,int b){
	int m=a<b?a:b;
	while(m!=1){
		if(a%m==0 and b%m==0) return false;
		m--;
	}
	return true;
}
int bohemian_rhapsody(int input1[],int input2){
	for(int i=0;i<input2;i++){
		if(input1[i]>input1[i+1] and co_prime(input1[i],input1[i+1])) return i;
	}
	return -1;
}
int main(void){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];
	cout<<bohemian_rhapsody(ar,n);
}
