#include <iostream>
#include  <string>
#include <vector>
#include <algorithm>
#include<unordered_set>
using namespace std;
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> output; bool flag= true;
        vector<string> temp=words;

        for(vector<string>::size_type i=0;i<words.size();i++)
         { transform(words[i].begin(),words[i].end(),words[i].begin(),::tolower);
//         cout<<words[i];
        }
        unordered_set<char> set1{'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> set2{'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> set3{'z','x','c','v','b','n','m'};
        vector<unordered_set<char>> set={set1,set2,set3};
        int index=0;int k=0;
             for(vector<string>::size_type it=0;it!=words.size();it++)
             {

                 if (set1.find(*words[it].begin())!=set1.end())
                          index=0;
                 else if(set2.find(*words[it].begin())!=set2.end())
                     index=1;
                 else if(set3.find(*words[it].begin())!=set3.end())
                     index=2;
                 unordered_set<char> tmp=set[index];
                 for(char b:words[it])
                 {
                     if(tmp.find(b)!=tmp.end())
                         continue;
                     else
                     {flag=false;
                          break;
                     }
                 }
                 if(flag)

                 output.push_back(temp[k]);
                 flag=true;

                 k++;
             }

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
        cout<<answer[i]<<endl;
    return 0;
}

