#include<bits/stdc++.h>
using namespace std;


int main() {
    int m,n,c=0;
    cin>>m>>n;
    multiset<long> a; //Declaring a multiset
    for(int i=0;i<m;i++)
    {
        long x;
        cin>>x;
        a.insert(x);//inserting into multiset so that items are inserted in a sorted manner
    }
    for(auto i:a)
    {
        //we will only check till the value of 'n' is greater  than or equal to elements of multiset 'a'
        if(i<=n)
        {
              c++;
              n=n-i;
        }
        //when 'n' becomes less than elements of 'a' it means he does not have enough money to buy more
        else
        {
            break;
        }
    }
    cout<<c;
    return 0;
}

