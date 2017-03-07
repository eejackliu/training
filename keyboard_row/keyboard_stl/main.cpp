#include <iostream>
#include  <string>
#include <vector>
#include <algorithm>
#include<unordered_set>
using namespace std;
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> output; bool flag= false;
        for(vector<string>::size_type i=0;i<words.size();i++)
         { transform(words[i].begin(),words[i].end(),words[i].begin(),::tolower);
          cout<<words[i];
        }
        unordered_set<char> set1{'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> set2{'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> set3{'z','x','c','v','b','n','m'};
        vector<unordered_set<char>> set{set1,set2,set3};
        cout<<set[0];
//        for(vector<string>::size_type i=0;i<words.size();i++)
//       {
//            for(int j=0;j<3;j++)
//            {
//                if(set[j].find(*words[i].begin()));
//                {

//                    for(char c:words[i])
//                    {
//                     if (!set[j].find(c))
//                         break;
//                     else if(c==words.end())
//                         flag=true;
//                    }
//                    if(flag)
//                   { output.push_back(words[i]);
//                        flag=false;
//                    }

//                }

//            }
//        }
  //      cout<<*words[0].begin()<<endl;
 return output;
    }

};
int main(int argc, char *argv[])
{
    Solution test;
    vector<string> words{"Hello", "Alaska", "Dad", "Peace"};
    vector<string> answer;

    answer= test.findWords(words);
    for(string::size_type i=0;i<answer.size();i++)
        cout<<answer[i];
    return 0;
}
