#include<iostream>
using namespace std;

int lcm(int, int);

int main(){
  cout<<endl<<lcm(11,17);
}

int lcm(int n1, int n2){
  int min=(n1 < n2 ? n1 : n2), max=(n1 >= n2 ? n1 : n2), i=min;
  while(1){
    if(i%max == 0){ return i; }
    i+=min;
  }
}
