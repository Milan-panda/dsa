#include <bits/stdc++.h>
using namespace std;

//Leetcode

int reverse(int x) {
    long rn=0;
    while(x){
      int ld=x%10;
      rn=(rn*10)+ld;
      x/=10;
    }

    if(rn>INT_MAX || rn<INT_MIN) return 0;
    
    return (int)rn;
  }

int main(){

  cout<<reverse(123);
  return 0;
}