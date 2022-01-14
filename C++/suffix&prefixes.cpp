#include<iostream>
#include<string>

bool isSuffix(std::string,std::string);
bool isPrefix(std::string,std::string);

int main(){
  std::cout<<std::endl<<isSuffix("arachnophobia", "-phobia");
  std::cout<<std::endl<<isSuffix("rhinoplasty", "-plasty");
  std::cout<<std::endl<<isSuffix("movement", "-scope");
  std::cout<<std::endl<<isSuffix("vocation", "-logy");
}

bool isPrefix(std::string word, std::string prefix) {
	for(int i=0; i<prefix.size()-1; i++){
		if(word[i] != prefix[i]){
			return 0;
		}
	}
	return 1;
}

bool isSuffix(std::string word, std::string suffix) {
	for(int i=1; i<suffix.size(); i++){
    if(suffix[suffix.size()-i] != word[word.size()-i]){
      return 0;
    }
	}
	return 1;
}
