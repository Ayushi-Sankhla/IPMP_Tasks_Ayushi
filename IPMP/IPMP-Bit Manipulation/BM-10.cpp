#include<bits/stdc++.h>
//position of only set bit program(left)
using namespace std;
int isPowerOfTwo(unsigned n)
{
    return n && (!(n & (n-1)))
}
int findPosition(unsigned n)
{
    if(!isPowerOfTwo(n))
    return -1;
}