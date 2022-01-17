#include <bits/stdc++.h>
using namespace std;


int main() {
    int p,q,r,s;
    cin>>p>>q>>r>>s;
    //checking if starting time of "Bob" lies between starting and ending time of "Alice"
    if(r>=p&&r<=q)
    {
        //checking if ending time of "Bob" lies between starting and ending time of "Alice"
        if(s<=q)
            cout<<s-r;
        else
            cout<<q-r;
    }
    //checking if starting time of "Alice" lies between starting and ending time of "Bob"
    else if(p>=r&&p<=s)
    {
        //checking if ending time of "Alice" lies between starting and ending time of "Bob"
        if(q<=s)
            cout<<q-p;
        else
            cout<<s-p;
    }
    //"Alice" starts after end time of "Bob" and vice versa
    else
        cout<<"0";
    return 0;
}

