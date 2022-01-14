#include<iostream>
#include<vector>
#include <bits/stdc++.h>

long long sortDescending(long long num);

int main(){
  std::cout<<sortDescending(8123094);
  return 0;
}

long long sortDescending(long long num) {
	std::vector<int> v;
  while(num){
    v.push_back(num%10);
    num/=10;
  }
  std::sort(v.begin(), v.end());
  for(int i=v.size()-1; i>-1; i--){
    num+=v[i];
    num*=10;
  }
  return num/10;
}
