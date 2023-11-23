#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{

  int temp=n;
  int rn=0;

  while(temp){
    int ld=temp%10;
    rn=(rn*10)+ld;
    temp/=10;
  }

  if(n==rn) return true;
  return false;
}

int main(){
  cout<<palindrome(5115)<<endl;

  return 0;
}