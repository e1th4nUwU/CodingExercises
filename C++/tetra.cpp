#include<iostream>
using namespace std;

int tetra(int);

int main(){
  for(int i=1; i<=9; i++){
    cout<<i<<' '<<tetra(i)<<endl;
  }
}

int tetra(int n){
  int r=0;
  for(int i=1; i<=n; i++){ for(int j=1; j<=i; j++) r+=j; }
  return r;
}
