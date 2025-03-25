#include <bits/stdc++.h> 
using namespace std;
class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            if(nums.size() == 1)
            {
                return;
            }
            int j=-1,temp;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==0)
                {
                    j=i;
                    break;
                }
            }
            if(j==-1) return;
            for(int i=j+1;i<nums.size();i++)
            {
                if(nums[i] !=0)
                {
                  swap(nums[i],nums[j]);
                  j++;
                }
            }
            return ;
        }
    };