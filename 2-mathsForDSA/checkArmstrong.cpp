#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){
	//Write your code here
	int len=floor(log10(n)+1);

	int ans=0;
	int temp=n;

	while(temp>0){
		ans+=pow(temp%10, len);
		temp/=10;
	}

	return (n==ans);
}

int main(){
  cout<<checkArmstrong(1);

  return 0;
}