#include<iostream>
using namespace std;

/*
  Pattern 1
  * * * * * 
  * * * * * 
  * * * * * 
  * * * * * 
  * * * * * 
*/
void pattern1(int n){
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}

/*
  Pattern 2
  * 
  * * 
  * * * 
  * * * * 
  * * * * * 
*/
void pattern2(int n){
  for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}

/*
  Pattern 3
  1 
  1 2 
  1 2 3 
  1 2 3 4 
  1 2 3 4 5 
*/
void pattern3(int n){
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
}

/*
  Pattern 4
  1 
  2 2 
  3 3 3 
  4 4 4 4
  5 5 5 5 5
*/
void pattern4(int n){
  for(int i=1; i<=n;i++){
		for(int j=1; j<=i; j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}


int main(){
  // pattern1(5);
  // pattern2(5);
  // pattern3(5);
  pattern4(5);

  return 0;
}