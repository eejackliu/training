#include <iostream>
#include<sstream>
#include<string>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
         int result=0;
        int i=0;
        while(num)
    {
            result|=(!(num&0x1))<<i;
            i++;
            num>>=1;
     }
    return result;
    }
};
int main(int argc, char *argv[])
{
    Solution test;

    cout<<test.findComplement(5);
    return 0;
}
