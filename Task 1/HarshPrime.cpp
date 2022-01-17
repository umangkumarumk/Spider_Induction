#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x,c=0;
    cin>>n>>x;
    vector<int> arr,prime(n+1,1);
   
    //finding all primes till n using sieve of eratosthenes
    for (int i=2;i*i<=n;i++)
    {
        if (prime[i]==1) 
        {
            for (int j=i*i;j<=n;j+=i)
                prime[j]=0;
        }
    }
    //storing all the primes 
    for(int i=2;i<n+1;i++)
    {
        if(prime[i])
        {
           arr.push_back(i);
        }
    }
    
    for(int i=2;i<arr.size();i++)
    {
        //checking if sum of three integers is a prime
        if(arr[i-2]+arr[i-1]+1<=n&&prime[arr[i-2]+arr[i-1]+1])
        {
            c++;
        }
    }
    if(c>=x)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

