#include<stdio.h>
#include<iostream>
using namespace std;

int add(int a,int b){
    for(int i=0;i<b;i++)
    {
        a++;
    }
    return a;
}
int main()
{
    int c=add(67,13);
    cout<<c;
}
