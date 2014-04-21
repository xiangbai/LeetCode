/*将一串字符串进行反转
  Giver s = "the sky is blue"
  return s = "blue is sky the"
  */
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
class Solution
{
	public:
		void reverseWords(std::string &s) ;
};
void Solution::reverseWords(std::string &s)
{
	std::string word ;
	std::vector<std::string> svec ;
	std::istringstream sin(s);
	while(sin >>word)
	{
		svec.push_back(word);
	}
	sin.clear() ;
	std::vector<std::string>::iterator begin = svec.begin() ;
	std::vector<std::string>::iterator end = svec.end() ;
	end = svec.end()-1;
	s = "";
	for( ; end >= svec.begin() ; --end)
	{
		s += *end + " " ;
	}
}
int main(int argc , char *argv[])
{
	Solution sol ;
	std::string s("the sky is blue");
	std::cout<<"Given s = "<<s <<std::endl;
	sol.reverseWords(s);
	std::cout<<"return s = "<<s <<std::endl;
	return 0 ;
}
