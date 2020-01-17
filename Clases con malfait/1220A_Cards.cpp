#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
  int n=0, z=0;
  cin>>a;
  string x;
  cin>>x;
  for(int i=0; i<a; i++){
    if(x[i]=='n'){
      n++;
    }
    if(x[i]=='z'){
      z++;
    }
  }
  for(int j=0; j<n; j++){
    cout<<"1 ";
  }
  for(int j=0; j<z; j++){
    cout<<"0 ";
  }
  cout<<"\n";
 
	return 0;
}
