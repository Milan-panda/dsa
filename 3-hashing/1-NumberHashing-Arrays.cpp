#include<iostream>
using namespace std;

// Number Hashing Using Arrays

int main(){
  int arr[5]={1,2,1,3,2};

  int hash[13]={0};
  for(int i=0; i<5; i++){
    hash[arr[i]]++;
  }

  cout<<hash[4]<<endl;
  cout<<hash[1]<<endl;
  cout<<hash[2]<<endl;
  cout<<hash[3]<<endl;
  cout<<hash[12]<<endl;

  return 0;

}