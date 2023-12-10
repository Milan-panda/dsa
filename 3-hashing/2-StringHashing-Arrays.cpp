#include<iostream>
using namespace std;

int main(){
  string s;
  cin>>s;


  int hash[26]={0};
  for(int i=0; i<s.size(); i++){
    hash[s[i]-'a']++;
  }

  //* for capital characters 
  // hash[s[i]-'A']

  //* for all characters/mix of lowercase and uppercase
  // hash[s[i]]

 
  int q;
  cin>>q;
  while(q--){
    char c;
    cin>>c;

    cout<<hash[c-'a']<<endl;

  }

  return 0;
}