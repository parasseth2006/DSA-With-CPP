#include <bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int>& nums) {
    int xorr = 0;

    for (int num : nums) {
        xorr ^= num;
    }

    unsigned int uxorr = (unsigned int)xorr;
    unsigned int rightmost = uxorr & (~uxorr + 1);

    int b1 = 0, b2 = 0;

    for (int num : nums) {
        if ((unsigned int)num & rightmost)
            b1 ^= num;
        else
            b2 ^= num;
    }

    return {b1, b2};
}