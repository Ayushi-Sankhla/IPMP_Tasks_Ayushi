#include<bits/stdc++.h>
using namespace std;

/*function that checks for majority element,
returns true and prints the majority element if present
else returns false*/
bool check(vector<int> a, int n)
{

    //fist loop for picking the element
    for (int i=0;i<n;i++)
    {

        //for storing count of the element
        int freq=0;

        //nested loop for counting frequency
        for (int j=i;j<n;j++)
        {
            if (a[i]==a[j])
                freq++;
        }

        /*after each time the nested loop is finished we
        have to check weather we got the majority element or not*/
        if (freq>(n/2))
        {
            cout<<"Majority element: "<<a[i];
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter the size the array: ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the elements of the array: ";
    for (int i=0;i<n;i++)
        cin>>a[i];

    //this coondition is executed when there is no majority element
    if (!check(a, n))
        cout<<"No majority element is present";
    return 0;
}
