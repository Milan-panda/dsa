#include <bits/stdc++.h>
using namespace std;

int divisor(int n){
	int sum=0;

	for(int i=1; i<=sqrt(n);i++){
		if(n%i==0){
			sum+=i;
			if((n/i) != i){
				sum+=(n/i);
			}
		}
	}
	return sum;
}

int sumOfAllDivisors(int n){
	// Write your code here.
	int sum=0;

	for(int i=1; i<=n; i++){
		sum += divisor(i);
	}

	return sum;
		
}

int main(){
  cout<<sumOfAllDivisors(3);
  return 0;
}