#include <vector> 
#include <iostream>
using namespace std;
class Solution {
    public:
        bool isPalindrome(int x) {
            int n=x;
            long rev=0;
            int lastdigit;
            while(n>0)
            {
                lastdigit=n%10;
                rev=(rev*10)+lastdigit;
                n=n/10;
            }
            if(x==rev)
            {
                return true;
            }
            return false;
        }
    };