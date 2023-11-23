#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
  int ans=0;
	int org=n;
	while(org > 0){
		int a=org%10;
		if( a!=0 &&  n%a==0) ans++;
		org/=10;
	}

	return ans;
}

int main(){
  cout<<countDigits(336);
  return 0;
}