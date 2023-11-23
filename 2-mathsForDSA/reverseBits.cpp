#include<bits/stdc++.h>
using namespace std;

long reverseBits(long n) {
  long ans=0;

  for(int i=0; i<32;i++){
    long lsb=n&1;

    ans=ans | lsb<<(31-i);

    n=n>>1;
  }

  return ans;
}

int main(){
  cout<<reverseBits(2);
  return 0;
}