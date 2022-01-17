#include <bits/stdc++.h>
using namespace std;


int main() {
    int q;
    cin>>q;
    int a[q];
    for(int i=0;i<q;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<q;i++)
    {
        int k=1,c=0;//k is the for making a count for each row
        //c is counter of no. of complete rows
        while(true)
        {
            if(a[i]>=k)
            {
                c++;//counting total no of complete rows
                a[i]=a[i]-k;//decreasing total no of boxes
                k++;//increaing row/box per row count
            }
            else
            {
                break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}

