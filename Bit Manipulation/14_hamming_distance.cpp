// https://leetcode.com/problems/hamming-distance/

#include<iostream>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = 0;
        while (x > 0 || y > 0) {
            ans += (x % 2) ^ (y % 2);
            x /= 2;
            y /= 2;
        }
        return ans;
    }
};