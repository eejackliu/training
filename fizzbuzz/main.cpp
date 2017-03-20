#include <iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
                vector<string> out;string temp;
                   for(int i=1;i<=n;i++)
                   {
                       if((!(i%3))&&(i%5))
                           out.push_back("Fizz");
                       else if((i%3)&&(!(i%5)))
                           out.push_back("Buzz");
                       else if((!(i%3))&&(!(i%5)))
                           out.push_back("FizzBuzz");
                       else
                       {
                           stringstream ss;
                           ss<<i;
                           temp=ss.str();
                           out.push_back(temp);
                       }
                   }
                   return out;
    }
};


int main(int argc, char *argv[])
{
    Solution a;
    vector<string> tmp=a.fizzBuzz(12);
    for(auto c:tmp)
        cout<<c<<endl;
    return 0;
}
