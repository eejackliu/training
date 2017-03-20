#include <iostream>
#include <string>
#include <string.h>
using namespace std;
class Solution {
public:
    string reverseString(string s) {
        string answer;
         char* word=new char[s.length()+1];
         strcpy(word,s.c_str());
       //  *word= *s.c_str();
         for(int i=(int)s.length()-1;i>=0;i--)
             answer.push_back(*(word+i));
         delete []word;
         return answer;
    }
};
int main(int argc, char *argv[])
{
    Solution test;string out;
    out=test.reverseString("hello");
    cout<<out;
    return 0;
}
