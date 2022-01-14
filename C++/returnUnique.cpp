#include<iostream>
#include<vector>
#include<algorithm>

std::vector<int> returnUnique(std::vector<int>);

int main(){
  std::vector<int> v = returnUnique({1, 9, 8, 8, 7, 1,1});
  std::cout<<'\n';
  for(int i=0; i<v.size(); i++){
    std::cout << v[i] << '\n';
  }
}

std::vector<int> returnUnique(std::vector<int> arr){
  std::vector<int>::iterator it;
  std::vector<int> ans, notans;
  for(int i=0; i<arr.size(); i++){

    it = std::find (arr.begin()+i+1, arr.end(), arr[i]);

    if(it == arr.end()){
      it = std::find (notans.begin(), notans.end(), arr[i]);
      if(it == notans.end()){
        ans.push_back(arr[i]);
      }
    }
    else{
      it = std::find (notans.begin(), notans.end(), arr[i]);
      if(it == notans.end()){
        notans.push_back(arr[i]);
      }
    }
  }

  return ans;
}

//std::vector<int> returnUnique(std::vector<int> arr) {
//	std::vector<int> v;
//	for(auto x:arr)
//		if(1==std::count(arr.begin(),arr.end(),x))
//			v.push_back(x);
//	return v;
//}
