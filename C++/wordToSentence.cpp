/*Create a function that turns an array of words into a comma separated list,
where the last word is separated by the word "and".*/

#include<iostream>
#include<vector>

std::string wordsToSentence(std::vector<std::string> words) {
	int size = words.size(), i;
	std::string str = "";
	
	if(!size)
		return str;
	
	str+=words[0];
	for(i=1; i<size-1; i++)
		str+=", " + words[i];

	if(size > 1)
		str += " and " + wordsstd::string wordsToSentence(std::vector<std::string> words) {
        int size = words.size(), i;
        std::string str = "";

        if(!size)
                return str;

        str+=words[0];
        for(i=1; i<size-2; i++)
								if(words[i].length())
										str+=", " + words[i];

        if(size > 1) 
								if(words[i].size())
										if(words[i+1].size())
											str+=
										str += words[i] " and " + words[i+1];
								else if(words[i].size()){
									str
								}

        return str;
}[size-1];

	return str;
}

int main(){
	using namespace std;
	vector<string> words={"uwu","hola","owo"};
	cout<<wordsToSentence(words)<<endl;
	return 0;
}
