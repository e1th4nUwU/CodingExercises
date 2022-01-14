#include<iostream>
#include<vector>
#include<cstdlib>

float portionHappy(std::vector<int>);

int main(){
  std::cout<<std::endl<<portionHappy({0, 1, 1, 0});
  return 0;
}

float portionHappy(std::vector<int> n) {
	float v=n.size()-1,c=0;
  c+= n[0]==n[1];
  for(int i=1; i<n.size()-1; i++){
    c+= !((n[i-1] != n[i])&&(n[i+1]!=n[i]));
  }
  c+= n[v-1]==n[v];
  return c/(v+1);
}
