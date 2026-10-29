#include<iostream>
using namespace std;
int binary_search(int a[], int n,int x)
{
int first=0, last=n-1;
while (first<=last){
    int mid = (first+last)/2;
    if(a[mid]==x)return (mid);
    else if (a[mid]<x)first=mid+1;
    else last=mid-1;
}

return -1;
    
}

int main()
{
    int a[10],x,n;
    cout<<"How many elements ";
    cin>>n;
    cout<<"Enter "<<n<<" Elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }
    cout<<"Enter the element to be searched ";
    cin>>x;
    int position=binary_search(a,n,x);
    if (position==-1) 
    cout<<"Element not found ";
    else cout <<"Element found at position "<<position;

    return (0);
}

// output 
// PS D:\Sagar> cd "d:\Sagar\" ; if ($?) { g++ binarysearch.cpp -o binarysearch } ; if ($?) { .\binarysearch }
// How many elements 6
// Enter 6 Elements
// 5
// 6
// 8
// 9
// 4
// 7
// Enter the element to be searched 6
// Element found at position 1
