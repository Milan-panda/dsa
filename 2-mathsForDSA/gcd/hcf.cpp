#include<bits/stdc++.h>
using namespace std;

int calcGCD(int a, int b){
  while(a>0 && b>0){
    if(a>b) a%=b;
    else b%=a;
  }

  if(a==0) return b;
  return a;
}

int main(){
  cout<<calcGCD(52, 10)<<endl;

  return 0;
}