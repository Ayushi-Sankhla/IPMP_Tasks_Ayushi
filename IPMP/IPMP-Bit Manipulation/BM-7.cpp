#include<bits/stdc++.h>
using namespace std;
int fun(unsigned int n)
{
    return n&(n-1);
}
int main()
{
    int n=7;
    cout<<"the number after unsetting is "<<fun(n);
}
