#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//class Solution {
//public:
//    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
//        vector<int> goback(findNums.size());int j=0;
//        for(auto i:findNums)
//           {
//            vector<int>::iterator tmp;
//           tmp= find(nums.begin(),(--nums.end()),i);
//                if(tmp!=nums.end())
//                {
//                    if((*(tmp+1))>(*tmp))
//                        goback[j]=*(tmp+1);
//                        else
//                        goback[j]=-1;
//                }
//                else
//                   goback[j]=-1;
//                j++;
//        }
//        return goback;
//    }
//};
class Solution{
public:
    vector<int> nextGreaterElement(vector<int>& findNums,vector<int>& nums)
    {
        vector<int> goback;int k=0;int i=0;int j,tmp;
        for(i=0;i<findNums.size();i++)
        {

            for(k=0;k<nums.size();k++)
            {
                if(findNums[i]==nums[k])
                  {
                    for(j=k+1;j<nums.size();j++)
                       { if(findNums[i]<nums[j])
                        {goback.push_back(nums[j]);break;}
                       }
                    if(j>=nums.size())
                        goback.push_back(-1);
                  }

            }


        }
        return goback;
    }
};

int main(int argc, char *argv[])
{
   Solution test;
   vector<int> sum1={4,1,2};
   vector<int> sum2={1,3,4,2};
   vector<int> out;
  out= test.nextGreaterElement(sum1,sum2);
  for(auto i:out)
      cout<<i;
  return 0;
}
