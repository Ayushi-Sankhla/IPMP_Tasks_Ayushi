#include<iostream>
using namespace std;
int main()
{
    int i, arr[10], key, low, high, mid;
    cout<<"Enter 10 Elements (ascending order): ";
    for(i=0; i<10; i++)
       {
           cin>>arr[i];
       }
    cout<<"\nEnter Element which is to be Searched: ";
    cin>>key;
    low = 0;
    high = 9;
    mid = (low+high)/2;
    while(low <= high)
    {
        if(arr[mid]<key)
            low = mid++;
        else if(arr[mid]==key)
        {
            cout<<"\nThe number is found at Position "<<mid+1;
            break;
        }
        else
            high = mid-1;
        mid = (low+high)/2;
    }
    if(low>high)
        cout<<"\nNot Found";
    cout<<endl;
    return 0;
}

