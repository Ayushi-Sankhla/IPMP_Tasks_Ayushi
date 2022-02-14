#include<bits/stdc++.h>

#include<iostream>
using namespace std;
unsigned int fun(unsigned int n)
{
    int temp1=n>>4;
    int temp2=n<<4;
    return temp1|temp2;
}
int main()
{
    int n=2;
    cout<<fun(n);
}